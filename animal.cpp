/*
Author: Arman Dadashzadeh
  Date: 09/25/2017
  Description: This program shows what the users favorite animal is
*/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " <<faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}


