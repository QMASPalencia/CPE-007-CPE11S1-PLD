#include <iostream>

using namespace std;

int main()
{
	
	float grade;
	
	cout<<"Please input the students grade: ";cin>>grade;
	
	if(grade>=94&&grade<=100)
	{
		
		cout<<"The grade is Excellent";
		
	}
	else if(grade>=88.5&&grade<=93.99)
	{
		
		cout<<"The grade is Superior";
		
	}
	else if(grade>=83&&grade<88.49)
	{
		
		cout<<"The grade is Meritorious";
		
	}
	else if(grade>=77.5&&grade<=82.99)
	{
		
		cout<<"The grade is Very Good";
		
	}
	else if(grade>=72&&grade<=77.5)
	{
		
		cout<<"The grade is Good";
		
	}
	else if(grade>=65.5&&grade<=71.99)
	{
		
		cout<<"The grade is Very Satisfactory";
		
	}
	else if(grade>=61&&grade<=65.49)
	{
		
		cout<<"The grade is Satisfactory";
		
	}
	else if(grade>=55.5&&grade<=60.99)
	{
		
		cout<<"The grade is Fair";
		
	}
	else if(grade>=50&&grade<=55.49)
	{
		
		cout<<"The grade is Passing"<<endl;
		
	}
	else if(grade>=0&&grade<=49.99)
	{
		
		cout<<"The grade is Failed";
		
	}
	else
	{
		
		cout<<"The inputed grade is not appropriate"<<endl;
		
		return main();
		
	}
	return 0;
}
