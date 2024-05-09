/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:52:21 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:24:57 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>

#include "../includes/Account.hpp"

// static variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// constructor
Account::Account(int initial_deposit)
{
    // increment n of accounts
    _nbAccounts += 1;
    // set the account index
    this->_accountIndex = _nbAccounts - 1;
    // set the initial deposit amount
    this->_amount = initial_deposit;
    // initialize number of deposits to 1
    this->_nbDeposits = 1;
    // initialize number of withdrawals to 0
    this->_nbWithdrawals = 0;
    // update total amount across all accounts
    this->_totalAmount += initial_deposit;

    // display timestamp and account creation information
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
         << "amount:" << this->_amount << ";"
         << "created" << std::endl;
    return ;
}

// getters retrieve the variable value for the class
int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

// display information about all accounts
void Account::displayAccountsInfos() {
    // display timestamp and account information
    _displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
         << "total:" << getTotalAmount() << ";"
         << "deposits:" << getNbDeposits() << ";"
         << "withdrawals:" << getNbWithdrawals() << std::endl;
}

// destructor
Account::~Account()
{
    // display timestamp and account closure information
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
         << "amount:" << this->_amount << ";"
         << "closed" << std::endl;
}

// deposit money into the account
void Account::makeDeposit(int deposit)
{
    // display timestamp and account deposit information
    _displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
         << "p_amount:" << this->_amount << ";";

    // update account balance and number of deposits
    this->_amount += deposit;
    this->_nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits += 1;

    // display deposit details
    std::cout << "deposit:" << deposit << ";"
         << "amount:" << this->_amount << ";"
         << "nb_deposits:" << this->_nbDeposits << std::endl;
}

// function to withdraw money from the account
bool Account::makeWithdrawal(int withdrawal)
{
    // display timestamp and account withdrawal information
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
         << "p_amount:" << this->_amount << ";";

    // update account balance and number of withdrawals
    this->_amount -= withdrawal;
    if (checkAmount()) // check if withdrawal is valid
    {
        this->_amount += withdrawal; // rollback the withdrawal
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    _totalAmount -= withdrawal;
    this->_nbWithdrawals += 1;

    // display withdrawal details
    std::cout << "withdrawal:" << withdrawal << ";"
         << "amount:" << this->_amount << ";"
         << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

// check if the account balance is negative
int Account::checkAmount(void) const
{
    if (this->_amount < 0)
        return 1;
    return 0;
}

// display the current status of the account
void Account::displayStatus(void) const
{
    // display timestamp and account status
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
         << "amount:" << this->_amount << ";"
         << "deposits:" << this->_nbDeposits << ";"
         << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

// display the timestamp in the required format
void Account::_displayTimestamp(void)
{
    // get current time and format it
    time_t      t_stmp_ptr;
    struct tm   *t_stmp;

    std::time(&t_stmp_ptr);
    t_stmp = localtime(&t_stmp_ptr);
	std::cout << "[";
    std::cout << t_stmp->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << t_stmp->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << t_stmp->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << t_stmp->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << t_stmp->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << t_stmp->tm_sec << "] ";
}
