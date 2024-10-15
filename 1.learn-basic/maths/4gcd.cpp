// Given two positive integers a and b, find GCD of a and b. (greatest common factor)

#include <iostream>
using namespace std;
int gcd_brute(int n, int m) {
    for (int i = min(n, m); i >= 1; i--) {   // TC: O(min(n,m))
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
}
int gcd_euclidean(int n, int m) {
    // euclidean algo state that gcd(a , b) = gcd(a-b , b) where a > b.
    while (n && m) {
        if (n > m) {                
            n = n - m;          
        }
        else {
            m = m - n;                 // TC: O(man(n,m))
        }
    }
    if (m > n)
        return m;
    else
        return n;

}
int gcd_euclidean_adv(int n, int m) {
    // euclidean adv algo state that gcd(a , b) = gcd(a%b , b) where a > b.
    while (n && m) {
        if (n > m) {                    // TC: O(log  (min(n , m)))
            n = n % m;
        }
        else {
            m = m % n;
        }
    }
    if (m > n)
        return m;
    else
        return n;

}
int main() {
    cout << "enter two numbers\n";
    int n, m;
    cin >> n >> m;
    // int ans = gcd_brute(n, m);
    // int ans = gcd_euclidean(n, m);
    int ans = gcd_euclidean_adv(n, m);
    cout << "gcd = " << ans << endl;
    return 0;
}


