#include <iostream>
#include "Account.hpp"

int Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout   << "accounts:" << Account::getNbAccounts()
                << ";total:" << Account::getTotalAmount()
                << ";deposits:" << Account::getNbDeposits()
                << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout   << "index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";created" << std::endl;
}