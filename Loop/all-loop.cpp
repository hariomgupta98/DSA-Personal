#include<iostream>
#include<cmath>
using namespace std;

int main() {

    // Sum of first n natural numbers
    // int n;
    // cout<<"Enter the value of n:";
    // cin>>n;

    // int sum = 0;
    // for(int i=1; i<n; i++) {
    //     sum += i;
    // }
    // cout<<"The sum is: "<<sum<<endl;


    //natural number
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for(int i=0; i<n; i++) {
    //     cout<<i<<endl;

    // }
    //while loop
    // int i = 1;
    // while(i<=50) {
    //     cout<<"Sweet"<<endl;
    //     i++;
    // }

    // cout<<"Done"<<endl;

    // int i;
    // for(i=1; i<=4; i++) {
    //     cout<<"****"<<endl;
    // }

    //reversing a number
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // for(int i=n; i>=1; i--) {
    //     cout<<i<<" ";
    // }

    // cout<<endl;


    //sum of digit of a number
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // int lastDigit;
    // int sum = 0;
    // while(n>0) {
    //     lastDigit = n%10;
    //     sum += lastDigit;
    //     n = n/10;
    // }
    // cout<<"The sum of digit is: "<<sum<<endl;e

    //odd sum add
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // int lastDigit;
    // int sum = 0;
    // while(n>0) {
    //     lastDigit = n%10;
    //     if(lastDigit % 2 != 0) {
    //         sum += lastDigit;
    //     }
    //     n = n/10;
    // }
    // cout<<"The sum of digit is: "<<sum<<endl;


    //..........................reverse a number
    int n = 12345;
    while(n>0) {
        int lastDigit = n%10;
        cout<<lastDigit;
        n /=10;
    }


    //.............................reverse a given number & print the result 
    // int n = 12345;
    // int result = 0;
    // while(n>0) {
    //     int lastDigit = n%10;
    //     result = result*10 + lastDigit;
    //     n /= 10;
    // }
    // cout<<"The reverse number is: "<<result<<endl;


    //do while loop
    // int value = 1;
    // do{
    //     cout<<"Hello DSA for do-while loop"<<endl;
    // } while(value > 5);

    // while(value > 5) {
    //     cout<<"Hello DSA for while loop"<<endl;
    // }


    //break
    // int i = 1;
    // while(i<=10) {
    //     if(i==3) {
    //         break;
    //     }
    //     cout<<i<<endl;
    //     i++;
    // }
    // cout<<"Out of the loop"<<endl;

    // int n;
    
    // do{
    //     cout<<"Enter a number: ";
    //     cin>>n;
    //     if(n%10 == 0) {
    //         break;
    //     }
    //         cout<<"Your are enter wrong number, please try again"<<endl;
      //  } while(true);


    //..................print prime number
    
//     int n;
//     bool isPrime = true;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     //for(int i = 2; i<=n-1; i++) { // i completeltly divides n; n is non - prime
//         for(int i = 2; i<=sqrt(n); i++){
//         if(n%i == 0) {

//         isPrime = false;
//         break;
//     }
// }
//         if(isPrime) {
//             cout<<"The number is prime"<<endl;
//         } else {
//             cout<<"The number is not prime"<<endl;
//         }


//.........................factorial number
// int n;
// cout<<"Enter the number: ";
// cin>>n;

// long long fact = 1;
// for(int i=1; i<=n; i++) {
//     fact *= i;
// }
// cout<<"The factorial number is: "<<fact<<endl;

//......................table
// int n;
// //int table;
// cout<<"Enter the number: ";
// cin>>n;

// for(int i=1; i<=10; i++) {
//     //table = n * i;
// cout<<n<<" x "<<i<< " = "<<n * i<<endl;
// }

//.....................armstrong number 153, 370, 371, 407, 1634, 8208, 9474
// int n, lastDigit, cubesum = 0;
// cout<<"Enter th number: ";
// cin>>n;
// int original = n; // save original number

// while(n>0) {
//     lastDigit = n % 10;
//     cubesum += lastDigit*lastDigit*lastDigit*lastDigit*lastDigit;
//     n /= 10;
// }
// if(cubesum == original) {
//     cout<<"This is an Armstrong number"<<endl;
// } else {
//     cout<<"This is not an Armstrong number"<<endl;
// }


//....................print all prime number from 2 to n
// int n;
// cout<<"Enter the number: ";
// cin>>n;

// for(int i=2; i<=n; i++) {
//     int curr = i;
//     bool isPrime = true;
//     for(int j = 2; j*j<=i; j++) {
//         if(curr % j == 0) {
//             isPrime = false;
//         }
//     }

// if(isPrime) {
//     cout<<curr<< " ";
// }
// }
// cout<<endl;
// }

//..........................fibonacci number
// int n, first = 0, second = 1, third;
// cout<<"Enter the fibanocci number: ";
// cin>>n;

// for(int i=2; i<=n; i++) {
//   third = first+second;
//   first = second;
//   second = third;
// }
// cout<<"The fibonacci number is: "<<second<<endl;
return 0;
}
