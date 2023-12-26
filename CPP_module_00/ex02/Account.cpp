/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:37:03 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:38:13 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/************************************************************************
* bibliotheque <ctime>							*
* std::time()		-> utilise pour obtenir l'heure actuelle	* 
* du systeme								*
* std::localtime()	-> utilise pour obtenir une representation plus	*
* 					detaille de l'heure		*
************************************************************************/

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/************************************************************************
*				CONSTRUCTEUR				*
************************************************************************/

Account::Account(int initial_deposit) 
			: _accountIndex(_nbAccounts),
			_amount(initial_deposit),
			_nbDeposits(0),
			_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";created" << std::endl;
}

/************************************************************************
*				DESTRUCTEUR				*
************************************************************************/

Account::~Account()
{
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";closed" << std::endl;
}

/************************************************************************
*			METHODES D'HORODATAGE				*
************************************************************************/

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
	std::tm *tm = std::localtime(&t);

	std::cout << "[" << (tm->tm_year + 1900)
						<< (tm->tm_mon + 1)
						<< tm->tm_mday << "_"
						<< tm->tm_hour
						<< tm->tm_min
						<< tm->tm_sec << "] ";
}

/************************************************************************
*			METHODES D'INSTANCE				*
************************************************************************/

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	_amount += deposit;
	_nbDeposits++;

	_displayTimestamp();
	
	std::cout << "index:" << _accountIndex << ";p_amount:"
				<< _amount - deposit
				<< ";deposit:" << deposit << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	
	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		std::cout << "index:" << _accountIndex << ";p_amount:"
					<< _amount + withdrawal << ";withdrawal:"
					<< withdrawal << ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return true;
	}
	else
	{
		std::cout << "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount() const
{
	return _amount;
}

void	Account::displayStatus() const
{
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:"
				<< _nbWithdrawals << std::endl;
}

/************************************************************************
*			METHODES STATIQUES				*
************************************************************************/

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;	
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();

	std::cout << "accounts:" << getNbAccounts()
			<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits() 
			<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}
