#include<iostream>
using namespace std;

class petrolcar
{
    public :

	void tyre()
	{
		cout<<"tyre"<<endl;
	}
	
		void gear()
	{
		cout<<"gear"<<endl;
	}
	
		void engine()
	{
		cout<<"engine"<<endl;
	}
	
		void staring()
	{
		cout<<"staring"<<endl;
	}
	
};

class evcar : public petrolcar

{

public :
		void battery()
		{
			cout<<"battery"<<endl;
		}
		void charger()
		{
			cout<<"charger"<<endl;
		}
};


int main()
{
	//we always create object of the inherited class or child class
	evcar car;
	car.battery();
	car.charger();
	car.staring();
}