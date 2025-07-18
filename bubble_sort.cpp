#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[],int n)
{
    for(int i = 0 ;i < n ;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[] = {15,16,6,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted array:";
    printArray(arr,n);

    bubbleSort(arr,n);

    cout<<"Sorted array:";
    printArray(arr,n);

    return 0;
}
