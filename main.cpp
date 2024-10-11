#include <iostream>

int main()
{
    // Task 1

    int a,b,c;
    std::cout << "enter n-n a,b,c: ";
    std::cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a+b) % c == 0 && c % b == 0) std::cout << (a+b)/c-c/b << std::endl;
        else if ((a+b) % c == 0 && c % b != 0) std::cout << (a+b)/c+b*c << std::endl;
        else std::cout << a-b+c << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }

    // Task 2

    int n;
    std::cout << "enter product code 1-5 ";
    std::cin >> n;
    switch(n)
    {
        case 1:
            std::cout << "Apple" << std::endl;
            break;
        case 2:
            std::cout << "Pen" << std::endl;
            break;
        case 3:
            std::cout << "Pineapple" << std::endl;
            break;
        case 4:
            std::cout << "Greenpeace" << std::endl;
            break;
        case 5:
            std::cout << "7eleven" << std::endl;
            break;
        default:
            std::cout << "n is undefined" << std::endl;
    }
    
    // Task 3

    int x;
    std::cout << "enter 1 or -1: ";
    std::cin >> x;
    std::cout << (x>0? "positive number" : "negative number");

    return 0;
}