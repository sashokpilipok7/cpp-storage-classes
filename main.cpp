#include <iostream>
#include "title.h" 

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n==== Main Menu ====\n";
        cout << "1. Run task bank 01\n";
        cout << "1. Run task bank 02\n";
        cout << "0. Exit\n";
        cout << "Select choice (number):";
        cin >> choice;

        switch (choice) {
            case 1:{
                 string result = distance_count_1();
                 cout << result << endl;
                 break;
            }
            case 2:{
                double S, T;
                cout << "Введіть відстань (км): ";
                cin >> S;
                cout << "Введіть час (хв): ";
                cin >> T;
                string result = check_speed(S, T);
                cout << result << endl;
                break;
            }
            case 0:
                cout << "Exit from program.\n";
                break;
            default:
                cout << "Incorrect choice.\n";
        }

    } while (choice != 0);

    return 0;
}
