/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:43:30 by virginie          #+#    #+#             */
/*   Updated: 2024/01/10 08:07:18 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>

class BitcoinExchange
{

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);

	BitcoinExchange& operator=(const BitcoinExchange& other);

	~BitcoinExchange();

	void loadExchangeRates(const std::string& filename);
	void processTransactions(const std::string& filename);
	void calculateValue(const std::string& date, double value);

private:
	std::map<std::string, double> _exchangeRates;

	std::string _findClosestDate(const std::string& date);

};

#endif
