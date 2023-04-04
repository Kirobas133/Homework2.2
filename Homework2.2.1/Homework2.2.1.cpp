// Homework2.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
