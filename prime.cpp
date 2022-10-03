
#include <bits/stdc++.h> 
using namespace std; 
bool isPrime(int n) 
{ 

    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
}
int main() 
{ 
    isPrime(9) ? cout << " true\n" : cout << " false\n"; 
    isPrime(17) ? cout << " true\n" : cout << " false\n"; 
    isPrime(2) ? cout << " true\n" : cout << " false\n"; 
    isPrime(10) ? cout << " true\n" : cout << " false\n"; 
    isPrime(11) ? cout << " true\n" : cout << " false\n"; 
    isPrime(12) ? cout << " true\n" : cout << " false\n"; 
    return 0; 
} 
