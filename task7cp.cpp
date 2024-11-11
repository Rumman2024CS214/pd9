#include<iostream>
using namespace std;
int common(string word1,string word2);
main()
{
    string word1,word2;
    cout<<"Enter first string: ";
    cin>>word1;
    cout<<"Enter second string: ";
    cin>>word2;
    int output;
    output=common(word1,word2);
    if(output==1)
    {
        cout<<"There is only "<<output<<" common character";
    }
    else
    {
        cout<<"There are "<<output<<" common characters";
    }
}

int common(string word1,string word2)
{
    int count=0;
    for(int i=0;word1[i]!='\0';i++)
    {
        for(int j=0;word2[j]!='\0';j++)
        {
            if(word1[i]==word2[j])
            {
                count++;
                word2[j]='0';
                break;
                
            }
        }
    }
    return count;
}