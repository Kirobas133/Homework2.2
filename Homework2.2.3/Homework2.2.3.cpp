
#include <iostream>

struct adress {
    std::string Country;
    std::string City;
    std::string Street;
    int HomeNumb;
    int AppartNumb;
    int PostCode;
};

void adressout(adress& adr) {
    std::cout << "Страна: " << adr.Country << std::endl
        << "Город: " << adr.City << std::endl 
        << "Улица: " << adr.Street << std::endl
        << "Номер дома: " << adr.HomeNumb << std::endl
        << "Номер квартиры: " << adr.AppartNumb << std::endl
        << "Индекс: " << adr.PostCode << std::endl;

    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    adress home = { "Россия", "Химки", "Гоголя", 9, 119, 141401 };
    adress* parents = new adress{ "Россия", "Железнодорожный", "Рождественская", 5, 242, 142302 };
    parents->AppartNumb = 244;
    adressout(home);
    adressout(*parents);
    delete parents;
}