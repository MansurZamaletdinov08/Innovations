#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Ru");

    std::vector<int> Vector = { 4, 7, 9, 14, 12 };

    std::cout << "Входные данные: ";

    auto func = [](int a) {
        std::cout << a << " ";
    };

    for (const int & value : Vector) {
        func(value);
    }

    std::cout << std::endl;
    std::cout << "Выходные данные: ";

    for (int value : Vector) {
        if (value % 2 != 0) {
            (value) *= 3;
        }
        func(value);
    }

    std::cout << std::endl;
}