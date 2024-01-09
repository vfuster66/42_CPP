/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:01:04 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/09 11:45:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <string>
#include <iostream>

class Intern
{

public:
	Intern();
	Intern(const Intern& other);

	Intern& operator=(const Intern& other);
	
	~Intern();

	AForm* makeForm(const std::string& formName, const std::string& target) const;

private:
	typedef AForm* (*FormCreator)(const std::string&);

	static const FormCreator formCreators[];
	static const std::string formNames[];
	static const int formCount;

};

#endif
