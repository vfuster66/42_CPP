/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:44:16 by virginie          #+#    #+#             */
/*   Updated: 2024/01/08 21:37:38 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

BitcoinExchange::BitcoinExchange()
{
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : exchangeRates(other.exchangeRates)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        exchangeRates = other.exchangeRates;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::loadExchangeRates(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    std::string line, date;
    double rate;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            std::istringstream iss(line);
            if (getline(iss, date, ',') && (iss >> rate))
            {
                exchangeRates[date] = rate;
            }
        }
        file.close();
    }
    else
    {
        std::cerr << "Error: could not open exchange rate file." << std::endl;
    }
}

void BitcoinExchange::processTransactions(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    std::string line, date;
    double value;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            std::istringstream iss(line);
            if (getline(iss, date, '|') && (iss >> value))
            {
                calculateValue(date, value);
            }
        }
        file.close();
    }
    else
    {
        std::cerr << "Error: could not open transaction file." << std::endl;
    }
}

void BitcoinExchange::calculateValue(const std::string& date, double value)
{
    if (value < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return;
    }
    if (value > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return;
    }

    std::string validDate = findClosestDate(date);
    double rate = exchangeRates[validDate];
    std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
}

std::string BitcoinExchange::findClosestDate(const std::string& date)
{
    if (exchangeRates.find(date) != exchangeRates.end())
    {
        return date;
    }

    std::string closestDate = "";
    for (std::map<std::string, double>::const_iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it)
    {
        if (it->first <= date)
        {
            closestDate = it->first;
        }
        else
        {
            break;
        }
    }

    return closestDate;
}
