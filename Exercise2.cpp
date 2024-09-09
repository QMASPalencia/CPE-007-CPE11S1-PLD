#include <iostream>

using namespace std;


int main()
{
	int x;
	int y;
	int sum,diff,prod,rem;
	float quot; //variables used
	
	cout<<"Input the value of x: ";cin>>x;
	cout<<"Input the value of y: ";cin>>y;
	
	sum = x+y; //operations
	diff = x-y;
	prod = x*y;
	quot = x/(double)y;
	rem = x%y;
	
	
	cout<<"Here are the answers to the different operations"<<endl; //outputs
	cout<<"Sum: "<< sum <<endl;
	cout<<"Difference: "<< diff <<endl;
	cout<<"Product: "<< prod <<endl;
	cout<<"Quotient: "<< quot <<endl;
	cout<<"Remainder: "<< rem <<endl;
	
return 0;
	
}
