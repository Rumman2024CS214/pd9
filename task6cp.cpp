#include<iostream>
using namespace std;
void transform(int arr[],int size,int times);
main()
{
    int size,times;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter integers:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>times;
    transform(arr,size,times);
}

void transform(int arr[],int size,int times)
{
    for(int i=0;i<times;i++)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]%2==0 || arr[i]==0)
            {
                arr[i]=arr[i]-2;
            }
            else
            {
                arr[i]=arr[i]+2;
            }
        }
    }
    cout<<"Array after transformation: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}