/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:01:04 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 08:23:17 by vfuster-         ###   ########.fr       */
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
#include <map>

class Intern
{

public:
	Intern();
	Intern(const Intern& other);

	Intern& operator=(const Intern& other);
	
	~Intern();

	AForm* makeForm(const std::string& formName, const std::string& target) const;

private:
	static std::map<std::string, AForm* (*)(const std::string&)> formCreators;

};

#endif
