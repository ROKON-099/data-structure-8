#include<iostream>
using namespace std;
int main (){
int n;
cout << "Enter the size of an array:";
cin>>n ;
 cout << "Enter " <<n <<" Number of an array:";
 int arr[n];
 for (int i=0; i<n; i++)
 {
     cin>>arr[i];
 }
 int max=arr[0];
 for (int i=1; i<n; i++)
 {
     if (arr[i]>max)
     {
          max=arr[i];
     }

 }
 cout << "Maximum number is:" <<max <<endl;
 return 0;






}


