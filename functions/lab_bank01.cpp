#include <iostream>
#include <windows.h>

using namespace std;

int distance_count_1() {
    SetConsoleOutputCP(65001);
    // Вхідні дані
    double miles = 634; // морські милі
    double yards_per_mile = 2025.3718; // ярдів у 1 морській милі
    double verzhki_per_yard = 10.0 / 0.4861; // вершків у 1 ярді

    // Обчислення
    double yards = miles * yards_per_mile;  // переведення миль у ярди
    double verzhki = yards * verzhki_per_yard;  // переведення ярдів у вершки

    // Вивід результату
    cout << "Відстань у вершках: " << verzhki << endl;

    return 0;
}
