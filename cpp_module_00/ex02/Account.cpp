/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:17:04 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/02 18:34:33 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructors & Destructor

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "created" << std::endl;
}

Account::~Account()
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "closed" << std::endl;
}

// Displayers

void	Account::_displayTimestamp()
{
	std::chrono::time_point<std::chrono::system_clock>	\
						now = std::chrono::system_clock::now();
	std::time_t			time_now = std::chrono::system_clock::to_time_t(now);
	tm					time_utc = *localtime(&time_now);

	std::cout << std::setfill('0') << '[' << (time_utc.tm_year + 1900)
				<< std::setw(2) << time_utc.tm_mon
				<< std::setw(2) << time_utc.tm_mday << '_'
				<< std::setw(2) << time_utc.tm_hour
				<< std::setw(2) << time_utc.tm_min
				<< std::setw(2) << time_utc.tm_sec << "] ";
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
				<< "total:" << Account::_totalAmount << ";"
				<< "deposits:" << Account::_totalNbDeposits << ";"
				<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "deposits:" << this->_nbDeposits << ';'
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Getters

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

// Account Movemments

int	Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	std::cout << "deposit:" << deposit << ';';
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ';';
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ';';
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal; 
		std::cout << "amount:" << this->_amount << ';';
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}
