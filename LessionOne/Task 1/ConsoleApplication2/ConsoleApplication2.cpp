#include <iostream>

enum season
{
	Январь = 1,Февраль,Март,Апрель, Май,Июнь,Июль,Август,Сентябрь,Октябрь,Ноябрь, Декабрь
};

int main()
{
	setlocale(LC_ALL, "Russian"); int season;

	do
	{
	
		std::cout << " Введите номер месяца: ";
		std::cin  >> season;

		switch (season)
		{

		case season::Январь:
		std::cout << " Январь";
		std::cout << std::endl;
		break;

		case season::Февраль:
		std::cout << " Февраль";
		std::cout << std::endl;
		break;

		case season::Март:
		std::cout << " Март";
		std::cout << std::endl;
		break;

		case season::Апрель:
		std::cout << " Апрель";
		std::cout << std::endl;
		break;

		case season::Май:
		std::cout << " Май";
		std::cout << std::endl;
		break;

		case season::Июнь:
		std::cout << " Июнь";
		std::cout << std::endl;
		break;

		case season::Июль:
		std::cout << " Июль";
		std::cout << std::endl;
		break;
		
		case season::Август:
		std::cout << " Август";
		std::cout << std::endl;
		break;

		case season::Сентябрь:
		std::cout << " Сентябрь";
		std::cout << std::endl;
		break;

		case season::Октябрь:
		std::cout << " Октябрь";
		std::cout << std::endl;
		break;

		case season::Ноябрь:
		std::cout << " Ноябрь";
		std::cout << std::endl;
		break;

		case season::Декабрь:
		std::cout << " Декабрь";
		std::cout << std::endl;
		break;

		case 0:
		std::cout << " До свидания";
		std::cout << std::endl;

		default:
		if (season == 0)
			continue;
		std::cout << " Неправильный номер!";
		std::cout << std::endl;
		break;

		}
	} while (season != 0);

}  