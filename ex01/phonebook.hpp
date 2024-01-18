#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	index;

	public:
		PhoneBook();
		void	saveNewContact();
		void	search(void);
};

#endif