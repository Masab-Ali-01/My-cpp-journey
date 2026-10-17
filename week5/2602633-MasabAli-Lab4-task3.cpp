#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	n = n<<1;
	cout<<"Doubed: "<<n;
	n += 10;
	cout<<"\nAded 10 :"<<n;
	n = n >> 1;
	cout<<"\nHalved :"<<n;
	int subtract = n<<1;
	subtract = subtract -10;
	subtract = subtract>>1;
	n = n- subtract;
	cout<<"\n Subtracted "<< subtract << ": " << n;  
	cout<<"\nFinal number:"<< n;
	
	return 0;
}
