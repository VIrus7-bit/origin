#include <iostream>
#include <string>

class Counter
{
private:
    int a = 0;
    char b;
    char h;

public:

    int setSummator()
    {
        std::cout << "Вы хотите узнать начальное значения счётчика? Введите да или нет: "; 
        std::cin >> h;
        
        if (h == 'да') {

        std::cout << "Введите начальное значения счётчика: "; 
        std::cin >> a;
        }

        do {

   
            std::cout << "Введите команду ('+' , '-' , '=' или 'x'): "; 
            std::cin >> b;

            switch (b) {

            case '+':
                a++;
                break;
            case '-':
                a--;
                break;
            case '=':
                std::cout << a;
                break;
            case 'x':
                std::cout << "До свидания!";
                break;
            } 
        } while (b != 'x');
        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Counter Counter{};
    Counter.setSummator();

}