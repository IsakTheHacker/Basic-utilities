//Disable strange warnings
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <ctime>
#include <chrono>

std::array<std::string, 7> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
std::array<std::string, 12> months = { "January", "February", "Marsch", "April", "May", "June", "July", "August", "September", "October", "November", "December" };


int main() {

	//Now
	std::time_t current_time = time(0);
	std::tm* now = std::localtime(&current_time);
	now->tm_year += 1900;
	now->tm_mon += 1;

	//Birthday
	std::tm* birthday = std::localtime(&current_time);
	birthday->tm_year += 1900;
	birthday->tm_mon += 1;

	int year = birthday->tm_year;
	int month = birthday->tm_mon;
	int date = birthday->tm_mday;
	int hour = birthday->tm_hour;
	int min = birthday->tm_min;
	int sec = birthday->tm_sec;

	//Enter year
	std::cout << "Enter year (" << birthday->tm_year << "): ";
	std::cin >> birthday->tm_year;
	birthday->tm_year -= 1900;

	//Enter month
	std::cout << "Enter month (" << birthday->tm_mon << "): ";
	std::cin >> birthday->tm_mon;
	birthday->tm_year -= 1;

	//Enter date
	std::cout << "Enter date (" << birthday->tm_mday << "): ";
	std::cin >> birthday->tm_mday;

	//Enter hour
	std::cout << "Enter hour (" << birthday->tm_hour << "): ";
	std::cin >> birthday->tm_hour;

	//Enter minute
	std::cout << "Enter minute (" << birthday->tm_min << "): ";
	std::cin >> birthday->tm_min;

	//Enter second
	std::cout << "Enter second (" << birthday->tm_sec << "): ";
	std::cin >> birthday->tm_sec;

	std::cout << std::mktime(now) << std::endl;
	std::cout << std::mktime(birthday) << std::endl;
	std::cout << std::difftime(std::mktime(now), std::mktime(birthday)) << std::endl;

	return 0;
}