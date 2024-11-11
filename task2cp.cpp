#include<iostream>
using namespace std;
float ticketprice(string movie);
main()
{
    string movie;
    cout<<"Enter a movie you want to watch: ";
    cin>>movie;
    float output;
    output=ticketprice(movie);
    cout<<"Total Price after discount: "<<output;

}

float ticketprice(string movie)
{
    string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    int count;
    float discount;
    int price=500,tprice;
    for(int i=0;i<5;i++)
    {
        if(movies[i]==movie)
        {
            count=i;
        }
    }
    if(count%2==1)
    {
        discount=(price*5)/100;
    }
    else
    {
        discount=(price*10)/100;
    }
    tprice=price-discount;
    return tprice;

}