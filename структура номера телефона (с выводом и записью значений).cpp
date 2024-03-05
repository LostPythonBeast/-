#include <windows.h>
#include <iostream>
using namespace std;
#include <string>

struct Phone{
    string cod_country;
    string cod_city;
    string number;
};
void out_Phone(Phone a){
    cout << "+"<<a.cod_country<< "(" << a.cod_city << ")" <<a.number;
}
void in_Phone(Phone &a){
    cout << "введите код страны(1 цифра): "; cin >> a.cod_country;
    cout << "введите код города (3 цифры): "; cin >> a.cod_city;
    cout << "введите номер (7 цифр): "; cin >> a.number;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
        Phone A,B ={"8", "8", "9"  };
       // cin>>A.cod_country>>A.cod_city>>A.number;
        //cout << A.cod_country << A.cod_city<<A.number;
    in_Phone(B);
    out_Phone(B);

        return 0;
}
