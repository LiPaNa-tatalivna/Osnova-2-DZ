
#include <iostream>
#include <string>


using namespace std;

struct adres{
    string gorod;
    string ylica;
    int nomer_doma;
    int nomer_kvartire;
    int indecs;
};

void new_adres(adres*, int);

int main()
{
    adres* adresss = new adres[2];
    adresss[0] = {"Москва", "Ленинский проспект", 65, 7, 9889393};
    
    adresss[1].gorod = "Сочи";
    adresss[1].ylica = "Ленинский проспект";
    adresss[1].nomer_doma = 92;
    adresss[1].nomer_kvartire = 39;
    adresss[1].indecs = 939458;
    
    new_adres(adresss, 0);
    new_adres(adresss, 1);
    

    return 0;
}

void new_adres(adres* adresss, int n){
    cout << endl;
    cout << "Город: " << adresss[n].gorod << endl;
    cout << "Улица: "<< adresss[n].ylica << endl;
    cout << "Номер дома: " <<adresss[n].nomer_doma << endl;
    cout << "Номер квартиры: " << adresss[n].nomer_kvartire << endl;
    cout << "Индекс: " << adresss[n].indecs << endl;
}



