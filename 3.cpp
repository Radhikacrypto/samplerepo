#include<iostream>
using namespace std;
int main() {



// CODE 1 USE OF ASCII VALUES !!!!!!!@@@@@




//     char ch;
// cout<<"enter a character";
// cin>>ch;
// if (ch>=97&&ch<=122)
// {
//     cout<<"you have entered a lower case value ";int n, i= 1,sum=0;
// cout<<"enter a number upto which u need to know the sum"<<endl;
// cin>>n;
// while(i<=n){
//     sum=sum+i;
//     i=i+1;
// }
// cout<<"the sum of all numbers upto "<<n<<"is "<<sum;
    
// }
// else if(ch>=65&&ch<=90) {
//     cout<<"You have entered a upper case letter";

// }

// else if(ch>=48&&ch<=57){
//     cout<<"you have entered a number from 0-9";
// }
// else {
//     cout<<"wrong input";
// }



// code 2!!!  TO PRINT SUM !!!!@@@@@@@@  

// int n, i= 1,sum=0;
// cout<<"enter a number upto which u need to know the sum"<<endl;
// cin>>n;
// while(i<=n){
//     sum=sum+i;
//     i=i+1;
// }
// cout<<"the sum of all numbers upto "<<n<<"is "<<sum;




//CODE 3 @@@@@@@@@ PRIME NUMBERS ....
// int n;
// cout<<"Enter the number to be checked ";
// cin>>n;
// int i=2;
// while(i<n){
//     if(n%i==0){
//         cout<<"the number "<<n<<" is not prime for "<<i<<endl;
//     }
//     else{
//         cout<<"number "<<n<<" is prime for "<<i<<endl;
//     }

//     i=i+1;
// }

//CODE 4 PATTERNS 
// int i,n,j;
// cout<<"enter the number of stars u want "<<endl;
// cin>>n;
// i=1;
// while(i<=n){
//     j=0;
//     while(j<n){
//         cout<<"*"//here we write i instead star we will get 111      222   333    4444 type pattern;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }



// CODE 5      4444    333     22     1   TYPE PATTERN     
int i,n,j;
cout<<"enter the number  "<<endl;
cin>>n;
i=n;
while(i>0){
    j=0;
    while(j<i){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i-1;
}
return 0;
}


