#include<iostream>
using namespace std;

void Min(int arr[])
{
    int min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Minimum is "<<min<<endl;
}
void Max(int arr[])
{
    int max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"Maximum is "<<max<<endl;
}

int main()
{
    int arr[]={10,30,50,9,5};

    cout<<"Find Minimum Element ";
    Min(arr);
    cout<<"Find Maximum Element ";
    Max(arr);
    return 0;
}