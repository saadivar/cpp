#include "Bureaucrat.hpp"


int main(void)
{
	Bureaucrat tooHigh("tooHigh", 0);
	Bureaucrat tooLow("tooLow", 160);

	// test grade change (within range)
	std::cout << "----" << std::endl;
	Bureaucrat okay("okay", 100);
	std::cout << okay << std::endl;
	okay.increment();
	std::cout << okay << std::endl;
	okay.decrement();
	std::cout << okay << std::endl;

	// test grade change (out of range)
	std::cout << "----" << std::endl;
	okay.increment();
	std::cout << okay << std::endl;
	okay.decrement();
	std::cout << okay << std::endl;

	// test copy & assignation operator
	std::cout << "----" << std::endl;
	Bureaucrat copy = Bureaucrat(tooHigh);
	std::cout << copy << std::endl;

	// objects are destructed automatically
	std::cout << "----" << std::endl;

	return 0;
}