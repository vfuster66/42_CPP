/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:59:43 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/10 09:23:37 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <ostream>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);

	Bureaucrat& operator=(const Bureaucrat& other);

	~Bureaucrat();

	const std::string& getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form& form);

private:
	std::string _name;
	int _grade;

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
