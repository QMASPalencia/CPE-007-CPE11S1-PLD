#include<iostream>
using namespace std;

int main()
{
	string in;
	double input=0,total=0;
	cout<<"Please input 4 words : "<<endl;
	for (int i = 0; i < 4; i++)
	{
	cout<<i+1<<": ";cin>>in;
		for (int j = 0; j < in.size(); j++)
    	{
    		input = (int)in[j];
    		total = total + input;
    	}
	}
	
	cout<<"The sum of the words is: "<<total;
	return 0;
}
