#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::string s;
    std::ofstream out;
    out.open("perchik.txt");
    if (out.is_open())
    {
        out << "perchiki zahvatat etot world" << std::endl;
    }
    out.close();
    std::cout << "File has been written" << std::endl;
    std::ifstream Ahmed;
    Ahmed.open("perchik.txt");
    if (Ahmed.is_open()) {
        getline(Ahmed, s);
        std::cout << s;
    }
}
