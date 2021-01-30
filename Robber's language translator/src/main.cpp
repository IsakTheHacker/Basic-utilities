#include <iostream>
#include <string>
#include <locale>

const std::string vowels = "aeiouyåäö";

std::string encode(std::string input) {
	std::string output;
	for (char letter : input) {
		if (std::find(vowels.begin(), vowels.end(), letter) != vowels.end()) {
			output += letter + "o" + letter;
			std::cout << letter + "o" + letter;
		} else {
			output += letter + "";
			std::cout << letter;
		}
	}
	std::cout << std::endl << output << std::endl;
	return "";
}

int main() {
	setlocale(LC_ALL, "");
	//char* l = setlocale(LC_ALL, NULL);
	//std::cout << "Current Locale: " << l << std::endl;
	printf("åäö");
	encode("Hej på dig");
	return 0;
}