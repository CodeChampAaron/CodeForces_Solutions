#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 


bool primeFactors(int n) 
{ 
    set <int > distinctNumbers;
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        distinctNumbers.insert(2);
        n = n/2; 
    } 
     
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (n%i == 0) 
        { 
            distinctNumbers.insert(i);
            n = n/i; 
        } 
    } 
     
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) {
        distinctNumbers.insert(n);
    }
    if (distinctNumbers.size() == 2){
        return true;
    }
    else {
        return false;
    }
} 
int main(){
    int n;
    cin >> n;
    ll count = 0 ;
    for (ll j = 1; j <= n; j = j+1 ){
        if (primeFactors(j)){
            count +=1;
        }
    }
    cout << count << endl;

    return 0;
}