/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:59:34 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 21:50:01 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>

class Span
{

public:
	Span(unsigned int N);
	Span(const Span& other);

	Span& operator=(const Span& other);

	~Span();

	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;
	template <typename Iterator>
	void addRange(Iterator begin, Iterator end);

private:
	std::vector<int> _numbers;
	unsigned int _maxSize;

};

#include "Span.tpp"

#endif
