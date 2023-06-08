#include <iostream>
#include <variant>
#include <vector>
#include <algorithm>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

int main() {
	if (std::holds_alternative<int>(get_variant()) == 1) {
		std::cout << std::get<int>(get_variant()) * 2 << std::endl;
	}
	if (std::holds_alternative<std::string>(get_variant()) == 1) {
		std::cout << std::get<std::string>(get_variant()) << std::endl;
	}
	if (std::holds_alternative<std::vector<int>>(get_variant()) == 1) {
		std::vector<int> Vector = std::get<std::vector<int>>(get_variant());
		for (const auto& n : Vector) {
			std::cout << n << " ";
		}
	}
}