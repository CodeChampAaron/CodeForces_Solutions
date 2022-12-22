#include <bits/stdc++.h>

using namespace std;
using ll = long long;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
       //start here
      ll n ;
      cin >> n;
      vector < ll> evenNums;
      vector < ll> oddNums;
      for (ll i = 0 ; i < n; i ++){
        ll a;
        cin >> a;
        if ( a % 2 == 1){
            oddNums.push_back(a);
        }
        if ( a % 2 == 0){
            evenNums.push_back(a);
        }
      }
      if (oddNums.size() % 2 == 0 ){
        cout << "0" << endl;
      }
      else {
        ll mi = 9999999999;
        ll me = 9999999999;

        for (ll i = 0 ; i < oddNums.size(); i ++){
            int count = 0;
           while ( oddNums[i] % 2 > 0) {
            oddNums[i] /= 2;
            count +=1;

           }
           if ( count < mi  ){
            mi = count ;
           }
        }
        for ( ll i = 0; i < evenNums.size(); i ++ ){
            int count = 0;
            while(evenNums[i] % 2 == 0){
                evenNums[i] /= 2;
                count +=1;
            }
            if ( count < me){
                me = count;
            }
        }
        if (mi < me){
            cout << mi <<  endl;
        }
        else {
            cout << me << endl;
        }


        

      }
        
        // end here
    }



    return 0;
}