#include<iostream>
using namespace std;

int main()
{
	int choice;
	int a,b;
	
	cout<<"enter 2 numbers\n";
	cin>>a>>b;
	
	cout<<"enter your choice number:\n";
	cout<<"1 for add\n";
	cout<<"2 for sub\n";
	cout<<"3 for mul\n";
	cout<<"4 for div\n";
	cout<<"5 for mod\n";
	cin>>choice;
	
	if(choice == 1)
    
	{
	cout<<"addition is:\n"<<a+b;	
	}
	
    else if(choice == 2)
    
	{
	cout<<"sub is:\n"<<a-b;	
	}
	
    else if(choice == 3)
    
	{
	cout<<" Multi is:\n"<<a*+b;	
	}
	
     else if(choice == 4)
    
	{
	cout<<"Division is:\n"<<a/b;	
	}
	
	else if(choice == 5)
    
	{
	cout<<"Mod is:\n"<<a%b;	
	}
	
	 else 
    
	{
	cout<<"Enter Valid Number";	
	}	

}