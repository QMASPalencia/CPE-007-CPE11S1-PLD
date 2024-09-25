#include<iostream>
using namespace std;

int main()
{
	//create a c++ program that applies MDAS calculator
	char symbol;
	double num1,num2,ans;
	
	cout<<"You're using a MDAS calculator";
	cout<<"Please input 2 integers"<<endl;
	cout<<"First input: ";cin>>num1;
	cout<<"Second input: ";cin>>num2;
	cout<<"Please input your symbol(+,-,*,/): ";cin>>symbol;
	
	
	
	switch(symbol)
	{
		case'+':
			cout<<"Addition has been selected";
			ans=num1+num2;
			cout<<"Here is the answer: "<<ans;
			cout<<"Thank you for using this calculator";
		break;
		case'-':
			cout<<"Subtraction has been selected";
			ans=num1-num2;
			cout<<"Here is the answer: "<<ans;
			cout<<"Thank you for using this calculator";
		break;
		case'*':
			cout<<"Multiplication has been selected";
			ans=num1*num2;
			cout<<"Here is the answer: "<<ans;
			cout<<"Thank you for using this calculator";
		break;
		case'/':
			cout<<"Division has been selected";
			ans=num1/num2;
			cout<<"Here is the answer: "<<ans;
			cout<<"Thank you for using this calculator";
		break;
		default:
			system("CLS");
			cout<<"Invalid";
		break;
		
	}
	
	return 0;
}
