#include<iostream>
#include<math.h>
using namespace std;

double add(double num1, double num2) {
	double sum;
	sum = num1 + num2;
	return sum;
}

double sub(double num1, double num2) {
	double diff;
	diff = num1 - num2;
	return diff;
}

double div(double num1, double num2) {
	double quot;
	quot = num1 / num2;
	return quot;
}

double mul(double num1, double num2) {
	double prod;
	prod = num1 * num2;
	return prod;
}
 
int main() {
	double num1, num2;
	
	cout<<"Please input two integers: "<<endl;
	cout<<"First integer: ";cin>>num1;
	cout<<"Second integer: ";cin>>num2;
	cout<<"\n\nThe sum of the two integers is: "<<add(num1,num2)<<endl;
	cout<<"\nThe difference of the two integers is: "<<sub(num1,num2)<<endl;
	cout<<"\nThe quotient of the two integers is: "<<div(num1,num2)<<endl;
	cout<<"\nThe product of the two integers is: "<<mul(num1,num2)<<endl;
	
}
