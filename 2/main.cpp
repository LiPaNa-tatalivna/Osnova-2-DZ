
#include <iostream>
#include <string>


using namespace std;

struct schet{
    int nomer_schet;
    string vladelets_schet;
    int summa_schet;
};

void new_balance(schet*);

int main()
{
    schet klient;
    cout <<"Введите номер счёта: ";
    cin >> klient.nomer_schet;
    cout <<"Введите имя владельца: ";
    cin >> klient.vladelets_schet;
    cout <<"Введите баланс: ";
    cin >> klient.summa_schet;
    new_balance (&klient);
    cout << "Ваш счёт: " << klient.nomer_schet <<", ";
    cout << klient.vladelets_schet << ", "<< klient.summa_schet;
// Введите новый баланс: 6000

    return 0;
}

void new_balance(schet* klient){
    cout << "Введите новый баланс:";
    cin >> klient->summa_schet;
}