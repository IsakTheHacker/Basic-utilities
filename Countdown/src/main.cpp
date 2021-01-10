//Disable strange warnings
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <array>
#include <ctime>


std::array<std::string, 7> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };


int main() {
	std::time_t current_time = time(0);
	std::tm* tm_local = std::localtime(&current_time);

	std::string convertedDateTime =
		std::to_string(tm_local->tm_year + 1900) +
		"-" + std::to_string(tm_local->tm_mon + 1) +
		"-" + std::to_string(tm_local->tm_mday) +
		" " + std::to_string(tm_local->tm_hour) +
		"." + std::to_string(tm_local->tm_min) +
		"." + std::to_string(tm_local->tm_sec)
	;

	std::cout << days[tm_local->tm_wday] << std::endl;

	return 0;
}