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

void kth(int arr[],int k){
    int a=arr[5-k];
    cout<<a;
}

int main()
{
    int arr[]={20,30,10,60,40};
    sort(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }
    int k;
    cout<<"Enter the kth number : ";
    cin>>k;
    kth(arr,k);

    return 0;

}