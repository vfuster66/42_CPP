/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:17:30 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/09 10:48:16 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

AForm::AForm(const std::string& name, int signGrade, int executeGrade)
			: _name(name), _isSigned(false), _signGrade(signGrade),
			_executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw std::range_error("Grade too high");
	if (signGrade > 150 || executeGrade > 150)
		throw std::range_error("Grade too low");
}

AForm::AForm(const AForm& other)
			: _name(other._name), _isSigned(other._isSigned),
			_signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		_isSigned = other._isSigned;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

AForm::~AForm()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

const std::string& AForm::getName() const
{
	return _name;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

int AForm::getSignGrade() const
{
	return _signGrade;
}

int AForm::getExecuteGrade() const
{
	return _executeGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
	{
	throw std::range_error("Bureaucrat grade too low to sign");
	}
	_isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (!_isSigned)
	{
		throw std::runtime_error("Form is not signed");
	}
	if (executor.getGrade() > _executeGrade)
	{
		throw std::range_error("Executor's grade too low to execute the form");
	}
	executeAction();
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << "Form: " << form.getName()
		<< "\nIs Signed: ";
	if (form.getIsSigned())
	{
		os << "Yes";
	}
	else
	{
		os << "No";
	}
	os << "\nSign Grade: " << form.getSignGrade()
		<< "\nExecute Grade: " << form.getExecuteGrade();
	return os;
}