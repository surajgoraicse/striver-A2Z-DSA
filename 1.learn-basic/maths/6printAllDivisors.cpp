
// Print all Divisors of a given Number and print the answer in increaing order

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
// approach 1 brute force   time Complexity O(n)
// void divisors(int n){
//     for (int i = 1; i <= n; i++){
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }

// }

// approach 2 efficient brute force
void divisors(int n) {
    vector<int> ls;
    for (int i = 1; i * i <= n; i++) // checking upto sqrt(n) TC: O(sqrt(n))
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (i != n / i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end()); // O(nlogn)
    for (auto it : ls)
    { // O(n)
        cout << it << " ";
    }
    // overall time complexity = O(sqrt(n)) + O(nlogn)  + O(n)
}

int main() {
    divisors(36);
    return 0;
}