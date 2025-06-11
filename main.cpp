#include <iostream>
#include "title.h" 

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n==== ГОЛОВНЕ МЕНЮ ====\n";
        cout << "1. Завдання: Відстань у вершках\n";
        cout << "0. Вихід\n";
        cout << "Введіть ваш вибір:";
        cin >> choice;

        switch (choice) {
            case 1:
                distance_count_1();
                break;
            case 0:
                cout << "Вихід з програми.\n";
                break;
            default:
                cout << "Невірний вибір. Спробуйте ще раз.\n";
        }

    } while (choice != 0);

    return 0;
}
