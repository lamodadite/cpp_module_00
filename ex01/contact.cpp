#include "contact.hpp"

Contact::Contact()
{
}

void	Contact::setFirstName(std::string input)
{
	this->f_name = input;
}

void	Contact::setLastName(std::string input)
{
	this->l_name = input;
}

void	Contact::setNickName(std::string input)
{
	this->n_name = input;
}

void	Contact::setPhoneNumber(std::string input)
{
	this->p_number = input;
}

void	Contact::setSecret(std::string input)
{
	this->secret = input;
}

std::string Contact::getShortStr(std::string str)
{
	if (static_cast<int>(str.size()) > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - static_cast<int>(str.size()), ' ') + str);
}

void	Contact::printShortContact(int idx)
{
	std::cout << "|         " << idx
				<< "|" << getShortStr(this->f_name)
				<< "|" << getShortStr(this->l_name)
				<< "|" << getShortStr(this->n_name)
				<< "|" << std::endl;
}

void	Contact::printAllContact(void)
{
	std::cout << "first name : " << this->f_name << std::endl;
	std::cout << "last name : " << this->l_name << std::endl;
	std::cout << "nickname : " << this->n_name << std::endl;
	std::cout << "phone number : " << this->p_number << std::endl;
	std::cout << "darkest secret : " << this->secret << std::endl;
}
