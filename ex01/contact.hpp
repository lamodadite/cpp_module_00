#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_number;
		std::string secret;
	public:
		Contact();
		void	setFirstName(std::string input);
		void	setLastName(std::string input);
		void	setNickName(std::string input);
		void	setPhoneNumber(std::string input);
		void	setSecret(std::string input);
		void	printShortContact(int idx);
		void	printAllContact(void);
		std::string	getShortStr(std::string str);

};

#endif