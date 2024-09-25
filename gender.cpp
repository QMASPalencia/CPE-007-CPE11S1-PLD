#include<iostream>
using namespace std;

int main()
{
	
	char gender;
	
	cout<<"Hello"<<endl;
	cout<<"Please input your gender"<<endl;
	cout<<"M for male, F for female, O for Other, P if prefer not to say"<<endl;
	cout<<"Input here: ";cin>>gender;
	
	//create a c++ program that let's you choose your gender
	switch(gender)
	{
		case'm':
			cout<<"You're Male";
		break;
		case'M':
			cout<<"You're Male";
		break;
		case'f':
			cout<<"You're Female";
		break;
		case'F':
			cout<<"You're Female";
		break;
		case'o':
			cout<<"You're part of LGBTQ+";
		break;
		case'O':
			cout<<"You're part of LGBTQ+";
		break;
		case'p':
			cout<<"We respect your choice";
		break;
		case'P':
			cout<<"We respect your choice";
		break;
		default:
			cout<<"Invalid";
		break;
	}
	
	return 0;
}
