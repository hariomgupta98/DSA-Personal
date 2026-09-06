#include<iostream>
using namespace std;

// void sayHello () {
//     cout<<"Hello Gupta:)\n";
// }
// void assistant () {
//     sayHello();
//     cout<<"Work done.\n";
// }

// int main() {
//     assistant();

//...............syntax parameter
// int sum(int a, int b) {
//     int sum = a + b;
//     return sum;
// }
// int main() {
//     int s = sum(2, 4);
//     cout<<"Sum = "<<s<<endl;


//..............product 
// int prod(int a, int b) {
//     return a*b;
// }
// int main() {
//     int p = prod(2, 8);
//     cout<<"Product is: "<<p<<endl;


//..............odd or even
// int prod(int a, int b) {
//     return a*b;
// }
// bool isEven(int n) {
//     if(n%2 == 0) {
//         return true;
//     } else {
//         return false;
//     }
// }
// int main() {
//     cout<<isEven(5)<<endl;

//.............factorial
// int factorial(int n) {
//     int fact = 1;
//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }
//     cout<<"Factorial(" << n << ")= "<<fact<<endl;
//     return fact;
// }
// int main() {
//     factorial(1);
//     factorial(2);
//     factorial(3);
//     factorial(4);

//............local scope
// void sum(int a, int b) {
//     int s = a + b;
//     cout<<s;
// }
// int main() {
//     sum(5, 4);
//     int s = 10;
//     cout<<s;

//......global 
// int num = 25;
// void sum(int a, int b) {
//     cout<<num<<endl;
//     int sum = a + b;
//     cout<<sum<<endl;
// }
// int main() {
//     sum(6, 8);
//     cout<<num;

//............prime number
// bool isPrime(int n) { //n-> true , false
//     if(n==1){
//         return false;
//     }
//     for(int i=2; i<=n-i; i++) { //non prime number
//         if(n%i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     cout<<isPrime(23)<<endl;

//........2nd type of prime number
// bool isPrime2(int n) {
//     if(n==1) {
//         return false;
//     }
//     for(int i=2; i*i<=n-1; i++){
//         if(n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     cout<<isPrime2(3)<<endl;

//............bionamial coefficient
// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
//  int binCoefficient(int n, int r) { //main function
//     int val1 = factorial(n); 
//     int val2 = factorial(r);
//     int val3= factorial(n-r);

//     int result = val1/(val2*val3);
//     return result;
//  } 
 
// int main() {
//     cout<<binCoefficient(4, 2)<<endl;

//..................prime number in range for 2 to n
//     bool isPrime(int n){
//     if(n == 1) {
//         return false;
//     }
//     for(int i=2; i*i<=n-i; i++) {
//         if(n%i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// void allPrime(int n) {
//     //all prime -> from 2 to n
//     for(int i=2; i<=n; i++) {
//         if(isPrime(i)) { //true
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main() {
//     allPrime(50);

//..........palindrom number
// int reverse(int n) {
//     int res = 0;
//     while(n>0) {
//       int lastDigit = n%10;
//       res = res*10 + lastDigit;
//       n = n/10;
//     }
//     return res;
// }
// bool isPalindrom(int num) {
//   int revNum = reverse(num);
//   return num == revNum;
// }
// // ...existing code...
// int main() {
//   int num;
//   cout<<"Enter the number: ";
//   cin>>num;
//   if(isPalindrom(num)) {
//     cout << "Palindrome" << endl;
//   } else {
//     cout << "Not Palindrome" << endl;
//   }

//............(A^2 + B^)
// int abSquare(int a, int b) {
//   return a*a + b*b + 2*a*b;
// }
// int main() {
//   int a, b;
//   cout<<"Enter the number of A: ";
//   cin>>a;
//   cout<<"Enter the number of B: ";
//   cin>>b;
//   cout<<abSquare(a, b)<<endl;

//.......sum of digit of number
// int sumDigit(int n) {
//   int res = 0;
//   while(n>0) {
//     res += n % 10;
//     n /= 10;
//   }
//   return res;
// }
// int main() {
//   int num;
//   cout<<"Enter the number: ";
//   cin>>num;
//   cout<<sumDigit(num)<<endl;

//........3 largest number
// int largestNumber(int a, int b, int c){
//   if(a>=b && a>=c){
//     cout<<"Largest number is ";
//     return a;
//   } else if(b>=c) {
//     cout<<"Largest number is ";
//     return b;
//   } else {
//     cout<<"Largest number is ";
//     return c;
//   }
// }
// int main() {
//   int x, y, z;
//   cout<<"Enter the number of 1st: ";
//   cin>>x;
//   cout<<"Enter the number of 2nd: ";
//   cin>>y;
//   cout<<"Enter the number of 3rd: ";
//   cin>>z;
//   cout<<largestNumber(x, y, z)<<endl;

//............next character
// char getNextCharacter(char ch){
//   if(ch == 'z') {
//     return 'a';
//   } else {
//     cout<<"After the character is: ";
//     return ch + 1;
//   }
// }
// int main() {
//   char next;
//   cout<<"Enter the character: ";
//   cin>>next;
//   cout<<getNextCharacter(next)<<endl;

int main() {
for(int i=1; i<=5; i++) {
  for(int j=i; j<=5; j++) {
    cout<<i<<" ";
  }
  cout<<"\n"<<endl;
}

  return 0;
}