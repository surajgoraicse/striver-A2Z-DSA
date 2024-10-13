#include <iostream>
using namespace std;
bool palindrome(int);
bool palindrome(int num)
{
    int temp = num;
    int digit, rev = 0;

    while (temp)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (num == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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

