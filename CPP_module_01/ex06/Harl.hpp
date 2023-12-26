/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:55:58 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 15:17:42 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string BLUE = "\033[34m";

class Harl
{

public:
	Harl();

	~Harl();

	void filterComplaints(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};

#endif
