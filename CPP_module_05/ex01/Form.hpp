/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:27:05 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/10 09:24:17 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <stdexcept>
#include <ostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form(const std::string& name, int signGrade, int executeGrade);
	Form(const Form& other);

	Form& operator=(const Form& other);

	~Form();

	const std::string& getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void beSigned(const Bureaucrat& bureaucrat);

private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _executeGrade;

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
