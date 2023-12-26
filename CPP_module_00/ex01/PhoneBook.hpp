/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:12:54 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:31:34 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{

public:
	PhoneBook();

	~PhoneBook();

	void addContact();
	void displayContacts();
	void searchContact();

private:
	Contact _contacts[8];
	int _contactIndex;
	
	std::string _truncateString(std::string str) const;

};

#endif

