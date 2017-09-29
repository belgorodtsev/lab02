#include <iostream>

int main()
{
    std::cout << " Write x, y, z " << std::endl;
    int x = 0;
    std::cin >> x;
    int y = 0;
    std::cin >> y;
    int z = 0;
    std::cin >> z;
    // Каждое из чисел нечетное
    int r = x % 2;
    int t = y % 2;
    if (r != 0 && t != 0)
    {
        std::cout << " x, y Odd!! ! " << std::endl;
    }
    else
    {
        std::cout << " Error! " << std::endl;
    }
    // Только одно из чисел меньше 20
    if (x < 20 || y < 20)
    {
        std::cout << " Number < 20 " << std::endl;
    }
    else
    {
        std::cout << " Error! " << std::endl;
    }
    // Хотя бы одно равно нулю
    if (x == 0 || y == 0)
    {
        std::cout << " Number = 0 " << std::endl;
    }
    else
    {
        std::cout << " Error! " << std::endl;
    }
    //Каждое из чисел отрицательное
    if (x < 0 && y < 0 && z < 0)
    {
        std::cout << " Number < 0 " << std::endl;
    }
    else
    {
        std::cout << " Error! " << std::endl;
    }
    // Только одно из чисел кратно 5
    int q = x % 5;
    int w = y % 5;
    int e = z % 5;
    if ((q == 0 && w != 0 && e != 0) ||
    (w == 0 && q != 0 && e != 0) ||
    (e == 0 && q != 0 && w != 0))
    {
        std::cout << " One number / 5 " << std::endl;
    }
    else
    {
        std::cout << " Error! " << std::endl;
    }
    // Хотя бы одно из чисел > 100
    if (x > 100 || y > 100 || z > 100)
    {
        std::cout << " Number > 100 " << std::endl;
    }
    else
    {
        std::cout << " Error! " << std::endl;
    }
    // Ладья
    std::cout << " Write a, b " << std::endl;
    std::pair<int, int> ab;
    std::cin >> ab.first;
    std::cin >> ab.second;
    std::cout << " Write c, d " << std::endl;
    std::pair<int, int> cd;
    std::cin >> cd.first;
    std::cin >> cd.second;
    if ((ab.first == cd.first) || (ab.second == cd.second))
    {
        std::cout << " Threatens the field " << std::endl;
    }
    else
    {
        std::cout << " Does not threaten the field " << std::endl;
    }
    // Слон
    std::cout << " The number of cells that a figure must pass through; number < 8 " << std::endl;
    int number = 0;
    std::cin >> number;
    if ((ab.first + number == cd.first && ab.second + number == cd.second))
    {
        std::cout << " Threatens the field " << std::endl;
    }
    else
    {
        std::cout << " Does not threaten the field " << std::endl;
    }
    // Король
    std::cout << " The number of cells that a figure must pass through; number = -1 or +1 " << std::endl;
    std::cin >> number;
    if ((ab.first + number == cd.first && ab.second + number == cd.second) ||
    (ab.first == cd.first && ab.second + number == cd.second) ||
    (ab.first + number == cd.first && ab.second == cd.second))
    {
    std::cout << " Threatens the field " << std::endl;
    }
    else
    {
        std::cout << " Does not threaten the field " << std::endl;
    }
    // Ферзь 
    std::cout << " The number of cells that a figure must pass through; number < 8 " << std::endl;
    std::cin >> number;
    if ((ab.first == cd.first) || (ab.second == cd.second) ||
    (ab.first + number == cd.first && ab.second + number == cd.second))
    {
        std::cout << " Threatens the field " << std::endl;
    }
    else
    {
        std::cout << " Does not threaten the field " << std::endl;
    }
    // Белая пешка
    std::cout << " The number of cells that a figure must pass through; number = +1 or +2 if a = 2 " << std::endl;
    std::cin >> number;
    if (ab.first == cd.first && ab.second + number == cd.second)
    {
        std::cout << " Threatens the field " << std::endl;
    }
    if (ab.first + 1 == cd.first && ab.second + 1 == cd.second)
    {
        std::cout << " Threatens the field " << std::endl;
    }	
    else
    {
        std::cout << " Does not threaten the field " << std::endl;
    }
    // Таблица умножения на 7
    const int i = 7;
    int j = 1;
    while (j <= 9)
    {
        std::cout << j << "*" << i << "=" << i * j << std::endl;
        ++j;
    }
    // Произведение всех целых чисел от 8 до 15
    int number1 = 8;
    for (int i = 9; i <= 15; ++i)
    {
	    number1 = number1 * i;
    }
    std::cout << " Composition = " << number1 << std::endl;
    //Произведение всех целых чисел от а до 20 (значение а вводится с клавиатуры 1<а<20)
    std::cout << " Write a number 1 < a < 20 " << std::endl;
    int a = 0;
    std::cin >> a;
    if (a <= 1 || a >= 20)
    { 
        std::cout << " Error !" << std::endl;
    }
    else 
    {
        number = a;
    for (int i = a + 1; i <= 20; ++i)
    {
	number = number * i;	
    }
    std::cout << " Composition = " << number << std::endl;
    // Найти произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры 1<b<20)
    std::cout << " Write a number 1 < b < 20 " << std::endl;
    int b = 0;
    std::cin >> b;
    if (b <= 1 || b >= 20)
    {
        std::cout << " Error !" << std::endl;
    }
        else 
    {
        number = 1;
        for (int i = 2; i <= b; ++i)
	{
            number = number * i;
	}
    }
    std::cout << " Composition = " << number << std::endl;
    // Произведение всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a)
    std::cout << " Write a number a, b; b >= a " << std::endl;
    int b1 = 0;
    std::cin >> b1;
    int a1 = 0;
    std::cin >> a1;
    if (b1 < a1)
    {
        std::cout << " Error !" << std::endl;
    }
    else 
    {
        number = a1;
        for (int i = a1 + 1; i <= b1; ++i)
	{
            number = number * i;
        }
    }    
    std::cout << " Composition = " << number << std::endl;
return 0;
}
