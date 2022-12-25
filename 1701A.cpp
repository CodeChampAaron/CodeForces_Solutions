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
        int array[4];
        int count = 0;
        for (int i = 0; i < 4 ; i ++){
            int a ;
            cin >> a;
            if (a == 1){
                count +=1;
            }

        }
        if (count == 0 ){
            cout << "0" << endl;
        }
        else if (count < 4){
            cout << "1" << endl;
        }

        else {
            cout << "2" << endl;
        }
        
        // end here
    }
    return 0;
}