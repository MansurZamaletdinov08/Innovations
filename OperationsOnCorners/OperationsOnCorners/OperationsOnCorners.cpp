#include <iostream>
#include <math.h>
#include <functional>
#include <vector>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Ru");

	int pi = 3.1415926;

	std::vector<double> angles{30, 60, 90};

	std::cout << "[Входные данные]: ";
	std::for_each(angles.begin(), angles.end(), [&angles](double& n) {
		std::cout << n << " * 3.1415926 / 180";
		(n *= 3.1415926 / 180);
	});
	std::cout << std::endl;
	std::cout << "[Выходные данные]: " << std::endl;

	int type = 0;
	std::function<void(double)> funcs = [&type](const double& angle) {
		if (type == 0) {
			std::cout << "sin: " << sin(angle) << " ";
			type++;
		}
		else {
			std::cout << "cos: " << cos(angle) << " ";
			type = 0;
		}
	};


	std::vector<std::function<void(double) >> functions(2, funcs);
	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
}
