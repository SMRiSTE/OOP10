#include<iostream>
#include"SayBye.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	std::string name;
	SayBye::Leaver Le;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << Le.leave(name);
}