// To check if a number is an armstrong number


#include<iostream>
#include<math.h>
using namespace std;
int power(int, int);
bool armstrong(int);
int power(int base , int exp){                 // power function
    int result = 1;
    for (int i = 1; i <= exp; i++){
        result = result * base;
    }
    return result;
}
bool armstrong(int n){
    int temp = n;
    int sum = 0;
    int count = 0;
    count = int(log10(temp) + 1); // number of digits
    temp = n;
    while(temp){
        sum = sum + power(temp%10 , count);                 // creating a fn to cal. power as pow returns floating and not int.
        temp /= 10;
    }
    return sum == n ;
}
int main(){
    cout << "enter a number \n";
    int n;
    cin >> n;
    cout << armstrong(n);
}
