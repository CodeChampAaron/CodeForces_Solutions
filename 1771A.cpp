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
      int n;
      cin >> n;
      vector <int> numbers;
      for (int i = 0; i < n; i ++){
        int a;
        cin >> a;
        numbers.push_back(a) ;

      }

        int minimum = numbers[0];
        int maximum = numbers[0];
    
        for (int i = 0; i < n ; i ++){
            if (numbers[i] > maximum){
                maximum  = numbers[i];
            }
            else if( numbers [i] < minimum ){
                minimum = numbers[i];
            }
        }
        if (minimum == maximum){
            cout << n * (n-1)<< endl;
        }
        else {
            int countMin = 0;
            int countMax = 0;
            for (int i = 0; i < n ; i ++) {
                if (numbers[i] == minimum){
                    countMin++;
                }
                else if (numbers[i] == maximum){
                    countMax ++;
                }

            }
            cout <<  countMin * countMax * 2 << endl; 
        }
        
         // end here
    }
    return 0;
}