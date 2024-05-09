#include<iostream>
#include "Lib.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Lib::Greeter Gr;
    std::string name;
    std::cout << "Введите имя, ";
    std::cin >> name;
    std::cout << Gr.greet(name);

}