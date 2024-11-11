#include<iostream>
using namespace std;
int coloringtime(string arr[],int size);
main()
{
    int size;
    cout<<"Enter the number of colors: ";
    cin>>size; 
    string arr[size];
    cout<<"Enter colors:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int output;
    output=coloringtime(arr,size);
    cout<<"Time required to color pattern: "<<output<<" seconds";
}

int coloringtime(string arr[],int size)
{
    int colortime;
    int count=0;
    colortime=size*2;
    string firstcolor=arr[0];
    for(int i=1;i<size;i++)
    {
        if(firstcolor!=arr[i])
        {
            firstcolor=arr[i];
            count=count+1;
        }
    }
    int penciltime,total;
    penciltime=count*1;
    total=colortime+penciltime;
    return total;
}