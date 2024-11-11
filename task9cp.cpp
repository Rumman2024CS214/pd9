#include<iostream>
using namespace std;
string checkinput(int pin[]);
void moves(int pin[]);
int main()
{
    int pin[4];
    bool check=false;
    cout<<"Enter pin:"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>pin[i];
        if(isdigit('a'))
        {
            cout << "Invalid Input";
            return 0;
        }
    }
    moves(pin);
}

void moves(int pin[])
{
    int check;
    string moves[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
    for(int i=0;i<4;i++)
    {
        check=pin[i]+i;
        for(int i=0;i<10;i++)
        {
            if(check>=10)
            {
                check=check%10;
            }
            if(check==i)
            {
                cout<<moves[i]<<",";
            }
        }
    }
}