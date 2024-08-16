#include <iostream>

class Calculator
{
private:
    float num1;
    float num2;

public:
    bool set_num1() {
        do
        {

            std::cout << "Введите Num1: ";
            std::cin >> num1;

            if (num1 <= 0)
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (num1 <= 0);

        return 0;
    }

    bool set_num2() {

        do
        {

            std::cout << "Введите Num2: ";
            std::cin >> num2;

            if (num2 <= 0)
            {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (num2 <= 0);


        return 0;
    }

    double add() {
        std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
        return 0;
    }
    double multiply() {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
        return 0;
    }
    double subtract_1_2() {
        std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
        return 0;
    }
    double subtract_2_1() {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
        return 0;
    }
    double divide_1_2() {
        std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
        return 0;
    }
    double divide_2_1() {
        std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    while (true) {
        Calculator Calculator;
        Calculator.set_num1();
        Calculator.set_num2();
        Calculator.add();
        Calculator.multiply();
        Calculator.subtract_1_2();
        Calculator.subtract_2_1();
        Calculator.divide_1_2();
        Calculator.divide_2_1();
    };
}