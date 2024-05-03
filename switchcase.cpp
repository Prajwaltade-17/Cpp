#include<iostream>
using namespace std;
int main(){

char button;
cout<<"enter a character:\n";
cin>>button;

switch(button)
{
	case'a':
		cout<<"hello"<<endl;
		break;
		case'b':
		cout<<"hi"<<endl;
		break;
		case'c':
		cout<<"namaskar"<<endl;
		break;
		case'd':
		cout<<"ram ram"<<endl;
		break;
		case'e':
		cout<<"namaste"<<endl;
		break;
		default:
			cout<<"i am still learning";
			break;
}
}
