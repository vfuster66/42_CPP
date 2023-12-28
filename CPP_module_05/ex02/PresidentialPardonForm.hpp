/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:16:07 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 17:31:51 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

	~PresidentialPardonForm();

	void executeAction() const;

private:
	const std::string _target;

};

#endif

