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
      int max = 0;
      int maxIndex = 1;
      for (int i = 1; i <= n; i ++){
        int a; cin >> a;
        if (a > max){
            max = a;
            maxIndex = i;
        }
      }
      cout << maxIndex << endl;
        
        // end here
    }
    return 0;
}