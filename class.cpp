#include<iostream>
using namespace std;



int main(){
 int a,b;
 cout<<"enter the number of rows"<<endl;
 cin>>a;
 cout<<"enter the colums"<<endl;
 cin>>b;
 int arr[a][b] , i, j;
 
     //declaration of 2d array ;
   cout<<"enter the elemnts in the array "<<endl;
   for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        cout<<"enter:";
        cin>>arr[i][j];
    }
   }

  cout<<"displaying the array "<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;

    }

    return 0;
}