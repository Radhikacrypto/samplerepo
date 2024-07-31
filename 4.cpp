#include <iostream>
using namespace std;

int main()
{   

    int n;
    cout<<"enter the number";
    cin>>n;

   // Print 1234    1234   1234   1234
   //    int n,j,i;
   //    cout<<"enter n"<<endl;
   //    cin>>n;
   //    i=1;
   //    while (i<=n)
   //    {
   //     j=1;
   //     while (j<=n)
   //     {
   //         cout<<" "<<j;
   //         j=j+1;
   //     }
   //     cout<<endl;
   //     i=i+1;

   //    }

   // PRINT 1 2 3    4 5 6    7 8 9

   //     int count=1;int n,j,i;
   //     cout<<"enter n"<<endl;
   //    cin>>n;
   //    i=1;
   //     while( i<=n){
   //         j=1;
   //         while(j<=n) {
   //             cout<<count<<" ";
   //             count=count +1;
   //             j=j+1;
   //         }

   //         cout<<endl;
   //         i=i+1;
   //     }

   //    PROBLEM 3   * ** *** **** PRINT THIS

   //   int n,j,i;
   //     cout<<"enter n"<<endl;
   //    cin>>n;
   //    i=1;
   //    while(i<=n){
   //     j=0;
   //     while(j<i) {
   //         cout<<"*";
   //         j=j+1;
   //     }

   //     cout<<endl;
   //     i=i+1;
   //    }

   // PROMBLE 3.0   1    2 3   4 5 6   7 8 9 10
   //  int i,n,j,value;
   //  cout<<"enter the value";
   //  cin>>n;
   //  i=1;
   //  value=1;
   //  while(i<=n){
   //     j=1;
   //     while(j<=i){
   //        cout<<value<<" ";
   //        value =value +1;
   //        j=j+1;
   //     }
   //     cout<<endl;
   //     i=i+1;
   //  }

   // PROBLEM 4  1    2 3     3 4 5
   //    int n,j,value;
   //   cout<<"enter the number";
   //   cin>>n;
   //   int i=1;

   //  while(i<=n){
   //    value=i;
   //    j=0;
   //    while(j<i){
   //       cout<<value<<" ";
   //       value=value+1;
   //       j=j+1;
   //    }
   //    cout<<endl;
   //    i=i+1;

   //  }

   // PROBLEM 5  1   2 1     3 2 1     4 3 2 1
   //  int n;
   //  cout<<"enter the value";
   //  cin>>n;
   //  int i=1;
   //  while(i<=n){
   //     int j=0;
   //     int val =i;
   //     while(j<i){
   //        cout<<val<<" ";
   //        val=val-1;
   //        j=j+1;
   //     }
   //     cout<<endl;
   //     i=i+1; 
   //  }

   // PROBLEM 5   A A A    B B B   C C C
   // int n, j, i;

   // cout << "enter n" << endl;
   // cin >> n;
   // i = 0;
   // while (i < n)
   // {
   //    j = 0;
   //    while (j < n)
   //    {
   //       cout << (char)(65 + j) << " ";
   //       j = j + 1;
   //    }

   //  cout<< endl;
   //    i = i + 1;
   // }   


   //PROBLEM 6    A B C    D E F   G H I 

   // int n,i,j,value;
   // cout<<"enter the number";
   // cin>>n;
   // i=1;
   // value=65;
   // while(i<=n){
   //    j=1;
   //    while (j<=n)
   //    {
   //       cout<<(char)(value)<<" ";
   //       value=value+1;
   //       j=j+1;
   //    }
   //    cout<<endl;
   //    i=i+1;
      
   // }


   //PROBLEM 7    A B C     B C D    C D E   D E F
   // int n;
   // cout<<"enter the number";
   // cin>>n;
   // int i=0;
   // while (i<n)
   // {
   //    int value=65+i;
   //    int j=0;
   //    while (j<n )
   //    {
   //       cout<<(char)(value+j)<<" ";
   //       j+=1;
   //    }
   //    cout<<endl;
   //    i+=1;

   // }
   

   //PROBLEM 8   A   B B   C C C
   // int i=0;
   // while (i<n)
   // {
   //    int value=65+i;
   //    int j=0;
   //    while (j<=i)
   //    {
   //       cout<<(char)(value)<<" ";
   //       j=j+1;
   //    }
   //   cout<<endl;
   //   i=i+1; 
   // }
   
   //problem   9   A    B C   D E F    
   // int i=0;
   //  int value=65;
   // while (i<n)
   // {
   //    int j=0;
     
   //    while (j<=i)
   //    {
   //      cout<<(char)(value)<<" ";
   //      j+=1;
   //      value+=1; 
   //    }
   //    cout<<endl;
   //    i+=1;
   // }
   


   // PROBLEM 10  A    B C   C D E     D E F G 
//    int i=0;
//    while (i<n)
//    {
//     int value=i;
//     int j=0;
//     while (j<=i)
//     {
//         cout<<(char)(65+value)<<" ";
//         value+=1;
//         j+=1;
//      }
//      cout<<endl;
//      i+=1;
    
//    }
   




   // PROBLEM   11   D  C D   B C D    A B C D

   int i=0;
   while (i<n)
   {
    int value=i;
    int j=0;
    while (j<=i)
    {
        cout<<(char)(65+value)<<" ";
        value+=1;
        j+=1;
     }
     cout<<endl;
     i+=1;
    
   }
   
   


   return 0;
}