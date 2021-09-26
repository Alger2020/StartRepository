#include"TicketMachine.h"  
#include<iostream>
using namespace std;  
TicketMachine::TicketMachine():PRICE(0)
{
	cout<<"我开始定义对象分配内存拉!"<<endl;
	balance=0;
	total=0;
	
}

TicketMachine::~TicketMachine()
{

}

void TicketMachine::showPrompt()
{

	cout<<"something";

}

void TicketMachine::insertMoney(int money)  
{
	balance +=money;
}

void TicketMachine::showBalance()
{
	cout<<balance;
}
