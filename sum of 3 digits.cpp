#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	int sum;
	
	cout<<"type ur first digit :\n";
	cin>>a;
	
	cout<<"type ur second digit :\n";
	cin>>b;
	
	cout<<"type ur third digit :\n";
	cin>>c;
	
	cout<<"your digit is :"<<a<<b<<c<<endl;
	
	sum = a + b + c; //Summation of digits.
	
	cout<<"The sum of the digits :"<<sum;
	
	return 0;
	   
}
