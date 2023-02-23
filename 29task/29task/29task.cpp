#include <iostream>
#include <map>

using namespace std;

int main()
{
    int numHouses;
    cout << "Введите количество домов на улице: ";
    cin >> numHouses;

    map<int, int> houses;

    for (int i = 0; i < numHouses; i++) {
        int houseNumber, numPeople;
        cout << "Введите номер дома: ";
        cin >> houseNumber;
        cout << "Введите количество людей в доме: ";
        cin >> numPeople;

        houses[houseNumber] = numPeople;
    }

    int action;
    cout << "Введите действие (0 - просмотр, 1 - удаление, 2 - добавление): ";
    cin >> action;

    switch (action) {
    case 0: {
        int houseNumber;
        cout << "Введите номер дома: ";
        cin >> houseNumber;

        if (houses.find(houseNumber) != houses.end()) {
            cout << "В доме №" << houseNumber << " проживает " << houses[houseNumber] << " человек." << endl;
        }
        else {
            cout << "Такого дома не существует." << endl;
        }
        break;
    }
    case 1: {
        int houseNumber;
        cout << "Введите номер дома: ";
        cin >> houseNumber;

        if (houses.find(houseNumber) != houses.end()) {
            houses.erase(houseNumber);
            cout << "Дом №" << houseNumber << " успешно удалён." << endl;
        }
        else {
            cout << "Такого дома не существует." << endl;
        }
        break;
    }
    case 2: {
        int houseNumber, numPeople;
        cout << "Введите номер дома: ";
        cin >> houseNumber;
        cout << "Введите количество людей в доме: ";
        cin >> numPeople;

        houses[houseNumber] = numPeople;

        cout << "Дом №" << houseNumber << " успешно добавлен." << endl;

        break;
    }
   
    default: {
        cout << "Некорректный ввод!" << endl;
    }

    }

    return 0;
}