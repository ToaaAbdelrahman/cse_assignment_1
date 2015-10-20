#include<iostream>
#include<math.h>

using namespace std;
class BankAccount
{
private :
	int ID;
	string clientName;
	float Balance;

public :
	void get_balance(float b)
	{
		Balance =b;
	}
	float set_balance()
	{return Balance;}
	void display()
	{
		cout<<Balance;
	}
	
	void deposite (float money)
	{Balance+=money;}
	void withdraw (float money)
	{ if (money >Balance)
	cout<<"error";
	else
		Balance-=money;
	}
};

void main()
{ 
	BankAccount x;
	float y;
	cin>> y;
	x.get_balance(y);
	x.deposite(5000);
	x.withdraw(10);
	x.display();
  system("PAUSE");
}
