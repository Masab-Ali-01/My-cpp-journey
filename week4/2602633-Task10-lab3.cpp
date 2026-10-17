#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter marks of subject 1:";
	cin>>a;
	cout<<"Enter marks of subject 2:";
	cin>>b;
	
	cout<<"Both subjects passed : "<<(a>=50 and b>=50)<<endl;
	cout<<"Marks in atleast ine subject greater than 80 : "<<(a>=80 or b>=80)<<endl;
	cout<<"Marks of subject 1 not less than 40 : "<<(a>=40)<<endl;
	return 0;
}
