#include <iostream>
#include "title.h" 
#include <limits>

using namespace std;

void waitForEnter() {
    cout << "Enter щоб продовжити...";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
}

int main() {
    int choice;

    do {
        using namespace std;

        cout << "\n==== Main Menu ====\n";
        cout << "1. Run task bank 01\n";
        cout << "2. Run task bank 02_1\n";
        cout << "3. Run task bank 02_2\n";
        cout << "4. Run task bank 03_8\n";
        cout << "5. Run task bank 03_9\n";
        cout << "6. Run task bank 03_10\n";
        cout << "7. Run task bank 04_4\n";
        cout << "8. Run task bank 06_3\n";
        cout << "9. Run task bank 06_4\n";
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
            case 3: {
                double x;
                cout << "Введіть значення x: ";
                cin >> x;

                string result = check_divide(x);
                cout << result << endl;
                break;
            }
           case 4: {
                cout << "Enter the number of elements in the array: ";
                int N;
                cin >> N;

                int result = max_element(N);
                cout << result << endl;
                break;
                
            }
              case 5: {
                using namespace std;
                cout << "Enter the number of elements in the array: ";
                int Number;
                cin >> Number;

                string result = check_size(Number);
                cout << result << endl;
                break;
                
            }
             case 6:{
                 int result = deter_matrix();
                 cout << result << endl;
                 break;
            }
            case 7: {
                int N;
                cin >> N;

                int result = alpahabet(N);
                cout << result << endl;
            }
            case 8: {
                check_six();
                break;
            }
            case 0:
                cout << "Exit from program.\n";
                break;
            default:
                cout << "Incorrect choice.\n";
        }
        waitForEnter();
    } while (choice != 0);

    return 0;
}
