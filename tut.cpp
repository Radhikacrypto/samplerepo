#include<iostream> 

using namespace std;

int uniques(int arr[], int size){
     int ans=0;
    for(int i=0;i<size;i++){
      ans=ans^arr[i];
    }
   
    return ans;
}

int main(){

    int size;
    cout<<"enter the size of array and it should be odd"<<endl ;
    cin>>size;
    int arr[size];
    if(size%2==1){
        cout<<"enter the elemnts of array such a way that only one is no repeated"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

       int ans= uniques(arr,size);
       cout<<ans;

    }
    else{
        cout<<"you have entered a even number"<<endl;
    }
    
    return 0;
}