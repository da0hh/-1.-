#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int inPassangers = 0;
	int outPassengers = 0;
	int totalPassengers = 0;
	int priceTicket = 20;
	int totalPriceTicket = 0;

	std::string streetProgrammistov = "Улица программистов";
	std::cout << "Прибываем на остановку «" << streetProgrammistov << "». В салоне пассажиров: " << inPassangers << std::endl;
	std::cout << "Сколько пассажиров вышло на остановке? " << outPassengers << std::endl;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> inPassangers;
	totalPriceTicket = priceTicket * inPassangers;
	totalPassengers = inPassangers - outPassengers;
	std::cout << "Отправляемся с остановки «" << streetProgrammistov << "». В салоне пассажиров: " << inPassangers << "\n" << std::endl;

	std::cout << "-------Едем---------\n" << std::endl;

	std::string algoritmLine = "Проспект алгоритмов";
	std::cout << "Прибываем на остановку «" << algoritmLine << "». В салоне пассажиров: " << inPassangers << std::endl;
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> outPassengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> inPassangers;
	totalPriceTicket = totalPriceTicket + priceTicket * inPassangers;
	totalPassengers = totalPassengers + inPassangers - outPassengers;
	std::cout << "Отправляемся с остановки «" << algoritmLine << "». В салоне пассажиров: " << totalPassengers << "\n" << std::endl;

	std::cout << "-------Едем---------\n" << std::endl;

	std::string chemistryStreet = "Химическая улица";
	std::cout << "Прибываем на остановку «" << chemistryStreet << "». В салоне пассажиров: " << totalPassengers << std::endl;
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> outPassengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> inPassangers;
	totalPriceTicket = totalPriceTicket + priceTicket * inPassangers;
	totalPassengers = totalPassengers + inPassangers - outPassengers;
	std::cout << "Отправляемся с остановки «" << chemistryStreet << "». В салоне пассажиров: " << totalPassengers << "\n" << std::endl;

	std::cout << "-------Едем---------\n" << std::endl;

	std::string englishStreet = "Улица англичанина";
	std::cout << "Прибываем на остановку «" << chemistryStreet << "». В салоне пассажиров: " << totalPassengers << std::endl;
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> outPassengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> inPassangers;
	totalPriceTicket = totalPriceTicket + priceTicket * inPassangers;
	totalPassengers = totalPassengers + inPassangers - outPassengers;
	std::cout << "Отправляемся с остановки «" << englishStreet << "». В салоне пассажиров: " << totalPassengers << "\n" << std::endl;

	std::cout << "-------Едем---------\n" << std::endl;

	std::string literatureStreet = "Улица Литературы";
	std::cout << "Прибываем на остановку «" << literatureStreet << "». В салоне пассажиров: " << totalPassengers << std::endl;
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> outPassengers;
	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> inPassangers;
	totalPriceTicket = totalPriceTicket + priceTicket * inPassangers;
	totalPassengers = totalPassengers + inPassangers - outPassengers;
	std::cout << "Отправляемся с остановки «" << literatureStreet << "». В салоне пассажиров: " << totalPassengers << "\n" << std::endl;

	std::cout << "Подсчет доходов и расходов: \n";

	int taxes = totalPriceTicket / 5;
	int fuel = totalPriceTicket / 5;
	int repairCar = totalPriceTicket / 5;
	int payForDriver = totalPriceTicket / 4;
	int income = totalPriceTicket - taxes - fuel - repairCar - payForDriver;
	std::cout << "Всего заработали: " << totalPriceTicket << std::endl;
	std::cout << "Зарплата водителя: " << payForDriver << std::endl;
	std::cout << "Расходы на топливо: " << fuel << std::endl;
	std::cout << "Налоги: " << taxes << std::endl;
	std::cout << "Расходы на ремонт машины: " << repairCar << std::endl;
	std::cout << "Итого доход: " << income << std::endl;
}