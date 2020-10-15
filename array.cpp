#include<iostream>
using namespace std;
int main()   //mainfunction
{
int marks[]={100,200,300,350};
int mathsmarks[4];

cout<<marks[0];
cout<<marks[1];
cout<<marks[2];
cout<<marks[3];

for(int i=0; i<4; i++)  //loop execution
{
    cout<<i<<marks[i];
}
   
    return 0;
}

