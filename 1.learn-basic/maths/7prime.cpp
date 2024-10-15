// A number that has exactly 2 divisors i.e, 1 and itself

#include <iostream>
using namespace std;
bool check(int n)
{
    int count = 0;
    if(n < 2){            // edge case handeling
        return false;
    }
    for (int i = 1; i * i <= n; i++){         // O(sqrt(n))
        if(n % i == 0){
            count++;
            if(i != n/i)
                count++;
        }
        if(count >2)
            return false;
    }
    return true;
}
int main()
{
    // int n;
    // cout << "enter a number \n";
    // cin >> n;
    // bool ans = check(n);
    // ans ? cout << "Prime" : cout << "not a prime";
    int arr[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 1, 4, 6, 8, 9, 10, 12, 14, 15, 16 };
    for(auto it : arr){
        check(it)? cout << "prime\n" : cout<<"not a prime\n";
    }
}