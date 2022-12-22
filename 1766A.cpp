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
      string n;
      cin >> n;
      ll lengthe = n.length();
      ll totalRound = n[0] - 48;
      totalRound += 9 * (lengthe - 1);
      cout << totalRound << endl;
        
                  // end here
    }
    return 0;
}