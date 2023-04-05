
#include <iostream>

enum class month {
    January = 1,
    Februay,
    March,
    April,
    May,
    June,
    Jule,
    August,
    September,
    October,
    November,
    December
};

int main(){
    setlocale(LC_ALL, "Russian");
    int monthnumber = 0;

    while (1) {

        std::cout << "Введите номер месяца: ";
        std::cin >> monthnumber;
        if (monthnumber > 0 && monthnumber < 13) {
            month todaymonth = static_cast<month>(monthnumber);
            switch (todaymonth) {
            case month::January:
                std::cout << "Январь\n";
                break;
            case month::Februay:
                std::cout << "Февраль\n";
                break;
            case month::March:
                std::cout << "Март\n";
                break;
            case month::April:
                std::cout << "Апрель\n";
                break;
            case month::May:
                std::cout << "Май\n";
                break;
            case month::June:
                std::cout << "Июнь\n";
                break;
            case month::Jule:
                std::cout << "Июль\n";
                break;
            case month::August:
                std::cout << "Август\n";
                break;
            case month::September:
                std::cout << "Сентябрь\n";
                break;
            case month::October:
                std::cout << "Октябрь\n";
                break;
            case month::November:
                std::cout << "Ноябрь\n";
                break;
            case month::December:
                std::cout << "Декабрь\n";
                break;
            }
        }
        else if (monthnumber == 0) {
            std::cout << "До свидания!\n";
            return 0;
        }
        else {
            std::cout << "Неправильный Номер!\n";
        }
    }
}