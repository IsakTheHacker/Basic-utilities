//Disable strange warnings
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <ctime>
#include <thread>

std::array<std::string, 7> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
std::array<std::string, 12> months = { "January", "February", "Marsch", "April", "May", "June", "July", "August", "September", "October", "November", "December" };


int main() {
	
	std::time_t birthday = time(0);
	std::tm* localTime = std::localtime(&birthday);

	//Enter year
	std::cout << "Enter year (" << localTime->tm_year+1900 << "): ";
	std::cin >> localTime->tm_year;

	//Enter month
	std::cout << "Enter month (" << localTime->tm_mon+1 << "): ";
	std::cin >> localTime->tm_mon;

	//Enter date
	std::cout << "Enter date (" << localTime->tm_mday << "): ";
	std::cin >> localTime->tm_mday;

	//Enter hour
	std::cout << "Enter hour (" << localTime->tm_hour << "): ";
	std::cin >> localTime->tm_hour;

	//Enter minute
	std::cout << "Enter minute (" << localTime->tm_min << "): ";
	std::cin >> localTime->tm_min;

	//Enter second
	std::cout << "Enter second (" << localTime->tm_sec << "): ";
	std::cin >> localTime->tm_sec;

	localTime->tm_year -= 1900;
	localTime->tm_mon -= 1;
	birthday = std::mktime(localTime);




	while (true) {
		std::time_t now = time(0);
		time_t diff = std::difftime(birthday, now);
		//std::cout << std::ctime(&diff) << std::endl;

		
		using namespace std::chrono_literals;
		std::this_thread::sleep_for(1s);

		localTime = std::localtime(&diff);
		localTime->tm_year -= 70;

		char buffer[30];
		std::strftime(buffer, sizeof(buffer), "%y", localTime);
		std::cout << buffer << std::endl;

		/*std::cout << std::asctime(localTime);
		std::cout << "Years: " << localTime->tm_year << std::endl;
		std::cout << "Months: " << localTime->tm_mon << std::endl;
		std::cout << "Days: " << localTime->tm_mday << std::endl;
		std::cout << "Hours: " << localTime->tm_hour << std::endl;
		std::cout << "Minutes: " << localTime->tm_min << std::endl;
		std::cout << "Seconds: " << localTime->tm_sec << std::endl;*/
	}

	return 0;
}