#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int alpahabet(int N) {

    for (int i = 1; i <= N; i++) {
        // Спочатку виводимо 'a'
        cout << "a";
        cout << " " ;
        cout << "a" ;


        // Виводимо пробіли між 'a' і наступними літерами, якщо це необхідно
        for (int j = 1; j < i; j++) {
            cout <<  char('a' + j);  // Після кожної букви додається пробіл
        }


        // Перехід на новий рядок
        cout << endl;
    }


    return 0;
}
