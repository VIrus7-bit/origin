#include <iostream>
#include <string>

struct user
{
	long long int a;
	std::string name;
	float b;
	float c;
};

void balanc(user& user);

int main()
{
 
	setlocale(LC_ALL, "Russian");

	user nema_Andrey;

	std::cout << " Введите номер счёта: ";
	std::cin >> nema_Andrey.a;

	std::cout << " Введите имя владельца: ";
	std::cin >> nema_Andrey.name;

	std::cout << " Введите баланс: ";
	std::cin >> nema_Andrey.b;

	balanc(nema_Andrey);

	std::cout << " Ваш счёт: " << nema_Andrey.name << " , " << nema_Andrey.a << " , " << nema_Andrey.b;

}

void balanc(user& user)
{
	std::cout << " Введите новый баланс: ";
	std::cin >> user.b;
}