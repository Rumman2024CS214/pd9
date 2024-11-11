#include<iostream>
using namespace std;
string checkletters(string word);
main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    string output;
    output=checkletters(word);
    cout<<output;
}

string checkletters(string word)
{
    string status;
    int count=0;
    for(int i=0;word[i]!='\0';i++)
    {
        count=count+1;
    }
    if(count%2==0)
    {
        status="true";
    }
    else
    {
        status="false";
    }
    return status;
}