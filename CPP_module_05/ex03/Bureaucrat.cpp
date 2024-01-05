/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:59:39 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 17:39:26 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
	{
		throw std::range_error("Grade too high");
	}
    if (grade > 150)
	{
		throw std::range_error("Grade too low");
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		const_cast<std::string&>(this->_name) = other._name;
		this->_grade = other._grade;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Bureaucrat::~Bureaucrat()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
	{
		throw std::range_error("Grade too high");
	}
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
	{
		throw std::range_error("Grade too low");
	}
	_grade++;
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}

	catch (const std::exception& e)
	{
		std::cerr << _name << " cannot sign " << form.getName() << " because: " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}

	catch (const std::exception& e)
	{
		std::cerr << _name << " cannot execute " << form.getName() << " because: " << e.what() << std::endl;
	}
}

