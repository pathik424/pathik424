#include<iostream>
#include <string>
using namespace std;

class mobile
/*
Public : it is like water
Protected : it is like juice
Pivate : it is like a black water
*/
{
	public:
		
		void call()
	    {
	    	cout<<"Called Call Function"<<endl;
		}
		
	
};

int main()
{

mobile m;

m.call();
m.call();
m.call();
m.call();
m.call();

}

