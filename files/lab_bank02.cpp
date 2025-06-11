#include <string>

std::string check_speed(double S, double T) {
    if (T <= 0) {
        return "Помилка: час має бути більше 0 хвилин.";
    }

    double speed = (S / T) * 60;

    std::string result = "Середня швидкість: " + std::to_string(speed) + " км/год\n";
    if (speed > 60) {
        result += "Перевищення швидкості! Водій порушив правила.";
    } else {
        result += "Швидкість в межах допустимої норми.";
    }

    return result;
}
