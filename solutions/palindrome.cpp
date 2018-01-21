#include <iostream>
#include <string>
using namespace std;
int main ()
{ 
	string num,copy;
	char temp;
	cout<<"Enter the number:";
	cin>>num;
	
	//copy of first number
	copy=num; 


	// we reverse this variable named 'copy'
	for(int i=0;i<copy.length()/2;i++)
	{
		temp=copy[i];
		copy[i]=copy[copy.length()-i-1];
		copy[copy.length()-i-1]=temp;
	}
	if(num==copy) // compares both numbers
	cout<<"\nThe given number is palindrome"<<endl;

	else
	cout<<"\n"<<"The given number is not a palindrome"<<endl;
	return 0;
}
