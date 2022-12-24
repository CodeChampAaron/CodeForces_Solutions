#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    char  command[100];

    ll NumOfPeople = 0;
    ll summate = 0 ;
    int iteration = 0;
    while ( cin.getline(command , 100 )){
        
        if( command[0] == '+'){
            NumOfPeople ++;
        }
        if (command[0] == '-'){
            NumOfPeople --;
        }
        if (command[0] != '+' && command[0] != '-'){
            int i = 0 ; 
            while (command[i] != ':'){
                i ++;
            }
            ll count = 0 ;
            i ++;
           unsigned int lengthe = strlen(command);
            for (i ; i < lengthe; i ++ ){
                count ++;
            }

            summate += count * NumOfPeople;
            

        }
        
    }

    std:: cout << summate << endl;








    return 0;
}