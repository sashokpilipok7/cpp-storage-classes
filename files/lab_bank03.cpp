#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int max_element(int N) {
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cout << "Введіть значення: ";
        cin >> arr[i];
    }

    int max_element = numeric_limits<int>::min();
    for (int i = 0; i < N; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    return max_element;
}


#include <unordered_set>

std::string check_size(int N) {
    unordered_set<string> phone_numbers;

    for (int i = 0; i < N; ++i) {
        string number;
        cout << "Введіть значення: ";
        cin >> number;
        phone_numbers.insert(number);
    }

    return  std::to_string(phone_numbers.size()) + "\n";
}


int deter_matrix() {
    int matrix[3][3];

    // Зчитуємо матрицю 3x3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Введіть значення: ";
            cin >> matrix[i][j];
        }
    }

    // Обчислюємо детермінант
    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                      - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                      + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return determinant;
}
