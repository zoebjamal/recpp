#include <iostream>
#include <string>

int main() {
	std::cout << "Hello, my name is Hal!\nWhat is your name?\n";
	std::string user_name;
	getline(std::cin, user_name);
	std::cout << "Hello, " << user_name << ". I am glad to meet you!" << std::endl;
	return 0;
}