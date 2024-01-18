#include "phonebook.hpp"

int main()
{
	std::string std;
	PhoneBook phonebook;

	while (true)
	{
		std::cout << "ADD | SEARCH | EXIT" << std::endl;
		std::cin >> std;
		if (std == "ADD") {
			phonebook.saveNewContact();
		}
		else if (std == "SEARCH") {
			phonebook.search();
		}
		else if (std == "EXIT") {
			return 0;
		}
	}
	return 0;
}

