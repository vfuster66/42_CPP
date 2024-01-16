/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:00:40 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 21:53:46 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int N) : _maxSize(N)
{
	if (N == 0)
	{
		throw std::invalid_argument("La capacité de Span ne peut pas être zéro.");
	}
}

Span::Span(const Span& other) : _numbers(other._numbers), _maxSize(other._maxSize)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_numbers = other._numbers;
		_maxSize = other._maxSize;
	}

	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
	{
		throw std::length_error("Span is full");
	}

	_numbers.push_back(number);
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
	{
		throw std::range_error("Not enough numbers for span");
	}

	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());
	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 0; i < tmp.size() - 1; i++)
	{
		int span = tmp[i + 1] - tmp[i];
		if (span < minSpan) 
		{
			minSpan = span;
		}
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
	{
		throw std::range_error("Not enough numbers for span");
	}

	return *std::max_element(_numbers.begin(), _numbers.end()) - 
			*std::min_element(_numbers.begin(), _numbers.end());
}

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end) {
    if (std::distance(begin, end) + _numbers.size() > _maxSize) {
        throw std::length_error("Ajout de trop d'éléments");
    }
    _numbers.insert(_numbers.end(), begin, end);
}




