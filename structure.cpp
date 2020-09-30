#include<iostream>
using namespace std;
struct item
{
    int price; // price
    char quality; // quality
    int weight; //weight
};

int main()
{
    struct item obj1; //object 1
    struct item obj2; //object 2
    obj1.price=200000;  
    obj1.quality='q';
    obj1.weight=70;
    cout<<obj1.price;
    cout<<obj1.quality;
    cout<<obj1.weight;
    obj2.price=300000000;
    obj2.quality='b';
    obj2.weight=65;
    cout<<obj2.price;
    cout<<obj2.quality;
    cout<<obj2.weight;
return 0; 
}

