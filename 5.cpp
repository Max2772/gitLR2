#include <iostream>

int main()
{
    double X,Y;
    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;

    if(X > Y)
    {
        std::cout << X;
    }else
    {
        std::cout << Y;
    }

    return 0;
}

/*                                  Версия с тернарным оператором и логикой
    double X,Y;
    bool res;
    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;

    res = X > Y ? true : false;

    if(res == true)
    {
        std::cout << X;
    }else
        std::cout << Y;

    return 0;

 */

/*                                  Версия без тернарного оператора и логики
    double X,Y;
    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;

    if(X > Y)
    {
        std::cout << X;
    }else
    {
        std::cout << Y;
    }

    return 0;
*/