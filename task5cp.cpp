#include<iostream>
using namespace std;
string checkslot(string arr[]);
main()
{
    string arr[4];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    string output;
    output=checkslot(arr);
    cout<<output;
}

string checkslot(string arr[])
{
    int count=0;
    string check=arr[0],status;
    for(int i=1;i<4;i++)
    {
        if(check==arr[i])
        {
            count=count+1;
        }
    }
    if(count==3)
    {
        status="true";
    }
    else
    {
        status="false";
    }
    return status;
}