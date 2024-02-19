#include<iostream>
using namespace std;

int main()
{
    int arr[5]= {10,20,30,40,50};  //Declare
    int key,n=5,i;
    cout<<"Enter the element to search: ";
    cin>>key; //User input
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==key)   //If element is found then print position and break loop
        {
            cout << "Element Found at Position : " << i+1 ;
            break;
        }
      
    }
  if (i==n) cout << "Element Not Found";
return 0;
}
