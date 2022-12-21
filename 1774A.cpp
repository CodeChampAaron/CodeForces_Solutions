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
       int length;
       cin >> length;
       string sequence;
       cin >> sequence;
       int smallestTotal;
       smallestTotal = int (sequence[0]) - 48;
        for (int i = 1; i < length; i ++){
            if (int (sequence[i]) - 48 ==  0){
                cout << "+";
            }
            else if (smallestTotal == 0){
                cout << "+";
                smallestTotal +=1;
            }

            else {
                cout << "-";
                smallestTotal -= 1;
            }

        }
        cout << endl;


        // end here
    }
    return 0;
}