#include<iostream>
using namespace std;

void sort(int arr[])
{
    int min=0;
    int temp;
    for(int i=0;i<5;i++)
    {
        min=i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }

}

int main()
{
    int arr[]={0,1,0,2,1};
    sort(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }
    
    return 0;

}