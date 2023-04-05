
#include <iostream>

struct Bill {
    int BillNumber;
    std::string BillOwner;
    double BillBalance;
};

void BillBalanceChange(Bill& changebleBill, double newBalance) {
    changebleBill.BillBalance = newBalance;
}

int main()
{
    std::setlocale(LC_ALL, "Russian");
    Bill newBill;
    std::cout << "Введите номер счета: ";
    std::cin >> newBill.BillNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> newBill.BillOwner;
    std::cout << "Введите баланс: ";
    std::cin >> newBill.BillBalance;
    std::cout << "Введите новый баланс: ";
    int newBalance;
    std::cin >> newBalance;
    BillBalanceChange(newBill, newBalance);
    std::cout << "Ваш счет: " << newBill.BillOwner << ", " << newBill.BillNumber << ", " << newBill.BillBalance;


}