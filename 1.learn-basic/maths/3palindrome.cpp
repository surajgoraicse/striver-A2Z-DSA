#include <iostream>
using namespace std;
bool palindrome(int);
bool palindrome(int x)
{
      if(x < 0) return 0;
     int temp = x;
     long long int rev = 0;
     while(temp){
        rev = rev * 10 + temp % 10;
        temp /= 10;
     }
     bool ans = rev == x;
     return ans;
}
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    if(n < 0){
        cout << "it is not a palindrome number" << endl;
        return 0;
    }
    bool ans = palindrome(n);
    if (ans == 1)
    {
        cout << "it is a palindrome number" << endl;
    }
    else
    {
        cout << "it is not a palindrome number" << endl;
    }

    return 0;
}

