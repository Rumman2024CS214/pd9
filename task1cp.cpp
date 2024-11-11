#include<iostream>
using namespace std;
int calculateprice(string fruit,int quantity);
main()
{
    int quantity;
    string fruit;
    cout<<"Enter fruit name: ";
    cin>>fruit;
    cout<<"Enter quantity(in kgs): ";
    cin>>quantity;
    int output;
    output=calculateprice(fruit,quantity);
    cout<<"Total price: "<<output;
}

int calculateprice(string fruit,int quantity)
{
    string fruits[4]={"peach","apple","guava","watermelon"};
    int prices[4]={60,70,40,30};
    int count;
    int price,total;
    for(int i=0;i<4;i++)
    {
        if(fruits[i]==fruit)
        {
            count=i;
        }
    }
    price=prices[count];
    total=price*quantity;
    return total;
}