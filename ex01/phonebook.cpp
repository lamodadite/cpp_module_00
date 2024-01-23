#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
}

void	PhoneBook::saveNewContact(void)
{
	//first name, last name, nickname, phone number and darkest secret
	std::string input;

	std::cout << "first name : ";
	std::cin >> input;
	contacts[index % 8].setFirstName(input); 
	std::cout << "last name : ";
	std::cin >> input;
	contacts[index % 8].setLastName(input); 
	std::cout << "nickname : ";
	std::cin >> input;
	contacts[index % 8].setNickName(input); 
	std::cout << "phone number : ";
	std::cin >> input;
	contacts[index % 8].setPhoneNumber(input); 
	std::cout << "darkest secret : ";
	std::cin >> input;
	contacts[index % 8].setSecret(input);
	index++;
}

void	PhoneBook::search(void)
{
	int cnt = (index > 7) ? 7 : index - 1;
	for (int i = 0; i <= cnt; i++) {
		contacts[i].printShortContact(i);
	}
	std::cout << "put index : ";
	std::cin >> cnt;
	if (std::cin.fail()) {
		std::cout << "wrong index" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} else if (cnt < 0 || cnt > 7) {
		std::cout << "wrong index" << std::endl;
		return ;
	} else {
		contacts[cnt].printAllContact();
	}
}
