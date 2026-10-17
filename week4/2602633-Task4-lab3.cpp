#include<iostream>
using namespace std;
int main(){
    float totalCapacity,avgMPGTown,avgMPGHighway;
    cout<<"Enter total fuel capacity(gallons):";
    cin>>totalCapacity;
    cout<<"Enter Average miles per gallon(town):";
    cin>>avgMPGTown;
    cout<<"Enter Average miles per gallon(Higway):";
    cin>>avgMPGHighway;

    cout<<"Total ditance in town:"<<totalCapacity*avgMPGTown;
    cout<<"\nTotal ditance in town:"<<totalCapacity*avgMPGHighway;
    return 0;
}