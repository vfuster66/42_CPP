/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:17:30 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/10 09:54:14 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
			: AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
			: AForm(other), _target(other._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream outputFile((_target + "_shrubbery").c_str());
	if (!outputFile)
	{
		std::cerr << "Failed to create the shrubbery file" << std::endl;
		return;
	}

    const std::string asciiArt = 
"                                                         .     	\n"
"                                              .         ;  		\n"
"                 .              .              ;%     ;;   		\n"
"                   ,           ,                :;%  %;   			\n"
"                    :         ;                   :;%;'     .,   	\n"
"           ,.        %;     %;            ;        %;'    ,;		\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'		\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' 		\n"
"               ;%;      %;        ;%;        % ;%;  ,%;'			\n"
"                `%;.     ;%;     %;'         `;%%;.%;'				\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'				\n"
"                    `:%;.  :;bd%;          %;@%;'					\n"
"                      `@%:.  :;%.         ;@@%;'   				\n"
"                        `@%.  `;@%.      ;@@%;         			\n"
"                          `@%%. `@%%    ;@@%;        				\n"
"                            ;@%. :@%%  %@@%;       				\n"
"                              %@bd%%%bd%%:;     					\n"
"                                #@%%%%%:;;							\n"
"                                %@@%%%::;							\n"
"                                %@@@%(o);  . '         			\n"
"                                %@@@o%;:(.,'         				\n"
"                            `.. %@@@o%::;         					\n"
"                               `)@@@o%::;         					\n"
"                                %@@(o)::;        					\n"
"                               .%@@@@%::;         					\n"
"                               ;%@@@@%::;.          				\n"
"                              ;%@@@@%%:;;;. 						\n"
"                          ...;%@@@@@%%:;;;;,..						\n";

	outputFile << asciiArt;
	outputFile.close();

	std::cout << "Shrubbery Form created for " << _target << "\n" << std::endl;
}