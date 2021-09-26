#include<iostream> 
#include"TicketMachine.h"
using namespace std;

int main()  
{

	TicketMachine tm;
	tm.insertMoney(100);
	tm.showBalance();

	return 0;
}  

