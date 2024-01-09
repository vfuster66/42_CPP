/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:59:39 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/09 08:44:01 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Form::Form(const std::string& _name, int signGrade, int executeGrade) : _name(_name),
				_isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw std::range_error("Grade too high");
	if (signGrade > 150 || executeGrade > 150)
		throw std::range_error("Grade too low");
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), 
				_signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Form::~Form()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

const std::string& Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

int Form::getExecuteGrade() const
{
	return _executeGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
	{
		throw std::range_error("Bureaucrat grade too low to sign");
	}
	_isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << " " << form.getName() 
		<< "\nIs Signed: ";
	if (form.getIsSigned())
	{
		os << "Yes\n";
	}
	else
	{
		os << "No\n";
	}
	os << "Sign Grade: " << form.getSignGrade()
		<< "\nExecute Grade: " << form.getExecuteGrade();
	return os;
}

