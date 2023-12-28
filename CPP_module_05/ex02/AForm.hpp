/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:16:07 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 17:17:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class AForm
{

public:
	AForm(const std::string& name, int signGrade, int executeGrade);
	AForm(const AForm& other);

	AForm& operator=(const AForm& other);

	virtual ~AForm();

	const std::string& getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void beSigned(const Bureaucrat& bureaucrat);

	virtual void executeAction() const = 0;

	void execute(const Bureaucrat& executor) const;

private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _executeGrade;

};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
