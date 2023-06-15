#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Ru");

    std::vector<int> Vector = { 4, 7, 9, 14, 12 };

    std::cout << "Входные данные: ";

    auto func = [](int a) {
        std::cout << a << " ";
    };

    std::for_each(Vector.begin(), Vector.end(), func);

    
    std::cout << std::endl;
    std::cout << "Выходные данные: ";

    std::for_each(Vector.begin(), Vector.end(), [&Vector](int& i) {
        if (i % 2 != 0) {
            (i) *= 3;
        }
    });

    std::for_each(Vector.begin(), Vector.end(), func);
    std::cout << std::endl;
}