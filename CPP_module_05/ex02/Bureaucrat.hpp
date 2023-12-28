/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:59:43 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 17:38:38 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <ostream>

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
	void signForm(AForm& form);
	void executeForm(const AForm& form);

private:
	const std::string _name;
	int _grade;

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
