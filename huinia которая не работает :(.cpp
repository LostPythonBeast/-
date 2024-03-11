#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;
#include <string>

struct Phone {
    string cod_country;
    string cod_city;
    string number;
};

bool is_valid_country_code(string code) {
    if (code.size() != 1) return false;
    if (!isdigit(code[0]) || code[0] == '0') return false;
    return true;
}

bool is_valid_city_code(string code) {
    if (code.size() != 3) return false;
    for (int i = 0; i < 3; i++) {
        if (!isdigit(code[i])) return false;
    }
    return true;
}

bool is_valid_phone_number(string number) {
    if (number.size() != 7) return false;
    for (int i = 0; i < 7; i++) {
        if (!isdigit(number[i])) return false;
    }
    return true;
}

void out_Phone(Phone a) {
    cout << "+" << a.cod_country << "(" << a.cod_city << ")" << a.number;
}
string out_Phone_file(Phone a){
    return a.cod_city, a.cod_country, a.number;
}
void in_Phone(Phone& a) {
    cout << "введите код страны(1 цифра): "; cin >> a.cod_country;
    while (!is_valid_country_code(a.cod_country)) {
        cout << "Ошибка: введите корректный код страны(1 цифра): ";
        cin >> a.cod_country;
    }
    cout << "введите код города (3 цифры): "; cin >> a.cod_city;
    while (!is_valid_city_code(a.cod_city)) {
        cout << "Ошибка: введите корректный код города (3 цифры): ";
        cin >> a.cod_city;
    }
    cout << "введите номер (7 цифр): "; cin >> a.number;
    while (!is_valid_phone_number(a.number)) {
        cout << "Ошибка: введите корректный номер (7 цифр): ";
        cin >> a.number;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Phone A, B = { "8", "8", "9" };

    in_Phone(B);
    string s;
    ofstream out;
    out.open("perchik.txt");
    if (out.is_open())
    {
        cout << out_Phone_file;
    }
    out.close();
    cout << "File has been written" << std::endl;
    ifstream Ahmed;
    Ahmed.open("perchik.txt");
    if (Ahmed.is_open()) {
        getline(Ahmed, s);
        cout << s;
    }
    return 0;
}
