#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout << "Reg Id:\nName:Masab Ali"<<endl;	
	
	string name = "Ali";
	cout << name<<endl;
	cout << setw(10) <<name <<endl;	
	cout << left << setw(10) << name; //variable on let and space on right 
	cout <<right << setw(10) << name <<endl; //variable on right and spaces on left
	
	double num = 3.1456489;
	cout<< fixed << setprecision(3) <<"num="<<num;
	
	return 0;
}

