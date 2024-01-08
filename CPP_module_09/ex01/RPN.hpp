/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:57:51 by virginie          #+#    #+#             */
/*   Updated: 2024/01/08 21:00:18 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

class RPN
{

public:
	RPN();
	RPN(const RPN& other);

	RPN& operator=(const RPN& other);

	~RPN();

	int evaluate(const std::string& expression);

private:
	std::stack<int> stack;

	bool processToken(const std::string& token);
	bool performOperation(const char operation);

};

#endif
