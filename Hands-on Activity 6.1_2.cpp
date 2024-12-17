#include<iostream>
#include<math.h>
using namespace std;

double far(double faren) {
	double celc;
	celc = (faren - 32) * (5.0 / 9.0);
	return celc;
}

double celc(double celci) {
	double far;
	far = (9.0 / 5.0) * celci + 32;
	return far;
}

int main() {
	double faren, celci;
	int choice;
	cout<<"Please choose what you want to convert: "<<endl;
	cout<<"1. Farenheight to Celcius"<<endl<<"2. Celcius to Farenheight "<<endl;
	cout<<"Choice: ";cin>>choice;
	bool loop = true;
	while (loop) {
		switch(choice) {
			case 1:
				cout<<"Please enter the Fahrenheit: ";cin>>faren;
				cout<<faren<<" Fahrenheit to Celcius is: "<<far(faren)<<" Celcius";
				loop = false;
				break;
			case 2:
				cout<<"Please enter the Celcius: ";cin>>celci;
				cout<<celci<<" Celcius to Fahrenheit is: "<<celc(celci)<<" Fahrenheit";
				loop = false;
				break;
			default:
				cout<<"Invalid input! Try again: ";cin>>choice;
		}
	}
}
