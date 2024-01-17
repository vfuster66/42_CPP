/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:58:03 by virginie          #+#    #+#             */
/*   Updated: 2024/01/16 14:49:42 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN& other) : stack(other.stack)
{
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		stack = other.stack;
	}
	return *this;
}

RPN::~RPN()
{
}

int RPN::evaluate(const std::string& expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (!processToken(token))
		{
			std::cerr << "Error" << std::endl;
			return -1;
		}
	}

	if (stack.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return -1;
	}

	return stack.top();
}

bool RPN::processToken(const std::string& token)
{
	if (isdigit(token[0]))
	{
		stack.push(atoi(token.c_str()));
		return true;
	}
	else if (token.size() == 1 && std::string("+-*/").find(token[0]) != std::string::npos)
	{
		return performOperation(token[0]);
	}
	return false;
}

bool RPN::performOperation(const char operation)
{
	if (stack.size() < 2) return false;

	int val2 = stack.top();
	stack.pop();
	int val1 = stack.top();
	stack.pop();

	switch (operation)
	{
		case '+':
			stack.push(val1 + val2);
			break ;
		case '-':
			stack.push(val1 - val2);
			break;
		case '*':
			stack.push(val1 * val2);
			break;
		case '/': 
			if (val2 == 0)
				return false;
			stack.push(val1 / val2); 
			break;
		default:
			return false;
	}

	return true;
}
