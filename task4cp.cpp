#include<iostream>
using namespace std;
void checkseven(int arr[],int size);
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter numbers: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    checkseven(arr,size);
}

void checkseven(int arr[],int size)
{
    int check=7;
    string output="there is no 7 in the array";
    for(int i=0;i<size;i++)
    {
        if((arr[i]==check)||((arr[i]/10)==check)||((arr[i]%10)==check))
        {
            output="Boom!";
        }
    }
    cout<<output;
}