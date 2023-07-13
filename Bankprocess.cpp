#include<iostream>
#include<String>
using namespace std;

string name,type;
int age;

class bankprocess
{
	public:
		  bankprocess()
		  {
		  	cout<<"Enter Your Bank Name:"<<endl;
		  	getline(cin,name);
		  	cout<<"Enter Your curent age:"<<endl;
		  	cin>>age;
		  	cout<<"Enter Your Bank Type:"<<endl;
		  	cin>>type;
		  	
		  	
		  	
		  	cout<<"Welcome" <<name<< "in our bank"<<endl;
		  	cout<<"Your age is"<<age<<endl;
		  	cout<<"Your Bank Account is"<<type<<endl;
		  
	      }
	      		
		dep()
		
		{
			int balance,damount,fbalance;
			
			cout<<"Enter Your Bank Balance:"<<endl;
		  	cin>>balance;
			cout<<"How many amount is Deposited:"<<endl;
			cin>>damount;
			
			cout<<"your Balance is:"<<balance<<endl;
			cout<<"u are deposited:"<<damount<<endl;
			fbalance=balance+damount;
			cout<<"Your after deposite bank balance is:"<<fbalance<<endl;
			
	    }
				
		with()
		
		{
	
		int balance,wamount,fbalance;
			
			cout<<"Enter Your Bank Balance:"<<endl;
		  	cin>>balance;
			cout<<"How many amount is Withdraw:"<<endl;
			cin>>wamount;
			
			cout<<"your Balance is:"<<balance<<endl;
			cout<<"u are withdraw:"<<wamount<<endl;
			fbalance=balance-wamount;
			cout<<"Your after withdraw bank balance is:"<<fbalance<<endl;
		
	    }
			
		
		
				
		
		  
	
};

int main()
{
	
	bankprocess c;
	
	string choice;
	cout<<"Welcome to our bank"<<endl;
	cout<<"Your Choice of Transactions Deposite or withdraw:"<<endl;
	cin>>choice;
	
	if (choice == "dep")
	{
	 c.dep();
    }
	else  
	{
	c.with();
    }
}
	
	
	
	
