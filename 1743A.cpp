#include <bits/stdc++.h>
using namespace std;
using ll = long long;


 long Factorial( long n){
    if (n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
       //start here
        ll n;
        cin >> n;

    ll possibleNumbers = 10;
    possibleNumbers -= n;
    for (int i = 0; i < n ; i ++){
        ll a;
        cin >> a;
    }
 ll TotalPoss = Factorial(possibleNumbers) / (Factorial(2) * Factorial(possibleNumbers - 2));
 TotalPoss = TotalPoss * (6);

 if (possibleNumbers < 2){
    cout << "0" << endl;
 }
 else {
 cout << TotalPoss << endl;}




        
        // end here
    }
    return 0;
};