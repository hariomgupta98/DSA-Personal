#include<iostream>
using namespace std;

int main() {
// int n;
// cout<<"Enter the number: ";
// cin>>n;
   
// for(int i=1; i<=n; i++) { 
//     for(int j=1; j<=n; j++) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


//..........inverted stat pattern
// int n;
// cout<<"Enter the number:   ";
// cin>>n;
// for(int i=1; i<=n; i++) {
//     for(int j=1; j<=(n-i+1); j++) {
//         cout<<" * ";
//     }
//     cout<<endl;
// }




//...........hollo rectangle'
// int n;
// cout<<"Enter the number: ";
// cin>>n;

// for(int i=1; i<=n; i++) {
//     cout<<"*"; //first 
//     for(int j=1; j<=n-1; j++) {
//         if(i == 1 || i == n) {
//             cout<<"*";
//         } else {
//             cout<<" ";
//         }
//     }
//     cout<<"*"<<endl; //last
// }





//..........inverted and rotated half pyramid
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=1; i<=n; i++) {
//     //space
//     for(int j=1; j<=n-i; j++) {
//         cout<<" ";
//     }
//     //stars
//     for(int j=1; j<=i; j++) {
//         cout<<"*"; //for triangle  <<" ";
//     }
//     cout<<endl;
// }



//..............floyd's triangle
int n;
int num = 1;
cout<<"Enter the number: ";
cin>>n;
for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
        cout<<num++;
    }
    cout<<endl;
}


//..............assignment qs
// int n;
// cout<<("Enter the number: ");
// cin>>n;
// for(int i=0; i<n; i++) {
//     bool val = (i%2 == 0); //start with 1
//     for(int j=0; j<=i; j++) {
//         cout<<val<<" ";
//         val = !val;
//     }
//     cout<<"\n";
// }

//...............2 Qs;
// int n;
// cout<<("Enter the number: ");
// cin>>n;
// for(int i=1; i<=n; i++) {
//     //space
//     for(int j=1; j<=n-i; j++) {
//         cout<<" ";
//     }
//     //star
//     for(int j=1; j<=n; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//..............3 Qs
// int n;
// int num = 1;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=1; i<=n; i++) {
//     //space
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     //backword
//     for(int j=i; j>=1; j--) {
//         cout<<j;
//     }
//     //forword
//     for(int j=2; j<=i; j++) {
//         cout<<j;
//     }
//     cout<<endl;
// }
 return 0;
}