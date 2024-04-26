#include<iostream>
using namespace std;
int main()
{
	int saving;
	cout<<"saving\n";
	cin>>saving;
	if(saving>5000)
	{
		cout<<"multiplex theatre\n";
		if(saving>10000)
		{
			cout<<"popcorn with pepsi\n";
		}
		else
		{
			cout<<"2 samosa with pepsi \n";
		}
	}
	  
	else
	{
		cout<<"Normal theatre\n";
		if(saving>2000)
		{
			cout<<"chips,vadapav and waterbottle \n";
			
		}
		else
		{
			cout<<"water bottle only\n";
		}
		
	}
}
