#include<iostream>
using namespace std;

int main()
{
    int n,data;

    cout<<"Enter the number of Element: ";
    cin >> n;

    int arr[n];
    cout<<"Enter"<<n<<"elements: ";
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the data to be search:";
    cin>>data;

    //linear search
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == data)
        {
            cout<<"Element found at index :"<< i <<endl;
            return 0;
        }
    }
    cout<<"Element not Found";
    return 0;
    
}