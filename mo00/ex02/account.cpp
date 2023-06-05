#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


int	Account::getNbAccounts( void )
{
    return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return(_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}

Account::Account( int initial_deposit )
{
    _amount = initial_deposit;
     _accountIndex =_nbAccounts ;
     _nbAccounts++;
     _nbDeposits = 0;
	_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";";
    std::cout <<"amount:" << _amount << ";";
    std::cout <<"created"<<std::endl;


}
Account::~Account(void )
{
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";";
    std::cout <<"amount:" << _amount << ";";
    std::cout <<"closed"<<std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t wa9t = time(0);
    tm *time;
    time = localtime(&wa9t);
    std::cout << "[";
    std::cout << time->tm_year + 1900;
    if(time->tm_mon < 9)
        std::cout << "0";
    std::cout << time->tm_mon + 1;
    if(time->tm_mday < 9)
        std::cout << "0";
    std::cout << time->tm_mday ;
    std::cout << "_";
    if(time->tm_hour < 9)
        std::cout << "0";
    std::cout << time->tm_hour;
    if(time->tm_min < 9)
        std::cout << "0";
    std::cout << time->tm_min;
    if(time->tm_sec < 9)
        std::cout << "0";
    std::cout << time->tm_sec;
    std::cout << "] ";


}


void	Account::displayStatus( void ) const{
    
    _displayTimestamp();
    std::cout << "index:" <<  this->_accountIndex << ";";
    std::cout <<"amount:" << this->_amount << ";";
    std::cout <<"deposits:" << _nbDeposits << ";";
    std::cout <<"withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    int dep = this->_amount + deposit;
    _displayTimestamp();
    std::cout << "index:" <<  this->_accountIndex << ";";
    std::cout <<"p_amount:" << this->_amount << ";";
    std::cout <<"deposit:" << deposit << ";";
    std::cout <<"amount:" << dep << ";";
    std::cout <<"nb_deposits:" << ++_nbDeposits << std::endl;
    this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    int drawl = _amount - withdrawal ;
    _displayTimestamp();
    std::cout << "index:" <<  this->_accountIndex << ";";
    std::cout <<"p_amount:" << this->_amount << ";";
    if(drawl < 0)
    {
        std::cout <<"withdrawal:" << "refused" << std::endl;
        return false;
    }
    else
    {
        std::cout <<"withdrawal:" << withdrawal << ";";
        std::cout <<"amount:" << drawl << ";";
        std::cout <<"nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        this->_amount = drawl;
    }
    return true;

}

int		Account::checkAmount( void ) const
{
    if(_amount > 0)
        return 1;
    return 0;
}


void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout <<"accounts:" << _nbAccounts << ";";
    std::cout <<"total:" << _totalAmount << ";";
    std::cout <<"deposits:" << _totalNbDeposits << ";";
    std::cout <<"withdrawals:" << _totalNbWithdrawals << std::endl;
}
