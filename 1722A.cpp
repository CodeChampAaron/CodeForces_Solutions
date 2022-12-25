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
      ll n;
      cin >> n;
      string name;
        cin >> name;
      if (n != 5){
        cout << "NO" << endl;
      }
      else {
       set <char> letters;
        int j = 0;
        
        for (int i = 0; i < n; i ++){
            if (name[i] == 'T' || name[i] == 'i' || name[i] == 'm' || name[i] == 'u' || name[i] == 'r'){
                letters.insert(name[i]);
            }
        }

        if (letters.size() == 5){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

      }
        
        // end here
    }
    return 0;
}