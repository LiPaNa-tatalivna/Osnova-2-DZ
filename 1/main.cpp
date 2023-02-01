
#include <iostream>



using namespace std;

enum mounce{
    January = 1,
    February,
    March, 
    April, 
    May,
    June, 
    July, 
    August,
    September, 
    October, 
    November,
    December
};

int main()
{
    int namber_mounce;
    cout << "Введите номер месяца:";
    cin >> namber_mounce;
    while (namber_mounce != 0){
        // cout << endl;
        mounce m = static_cast<mounce>(namber_mounce);
        switch (m){
            case January:
                cout << "Январь";
                break;
            case February:
                cout << "Февраль";
                break;
            case March:
                cout << "Март";
                break;
            case April:
                cout << "Апрель";
                break;
            case May:
                cout << "Май";
                break;
            case June:
                cout << "Июнь";
                break;
            case July:
                cout << "Июль";
                break;
            case August:
                cout << "Август";
                break;
            case September:
                cout << "Сентябрь";
                break;
            case October:
                cout << "Октябрь";
                break;
            case November:
                cout << "Ноябрь";
                break;
            case December:
                cout << "Декабрь";
                break;
            default:
                cout << "Неправильный номер!";
                break;
        }
        cout << endl;
        cout << "Введите номер месяца:";
        cin >> namber_mounce;
    }
    cout <<"До свидания";

    return 0;
}