#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;


    cin >> t;

    while(t--){
        int n, k = 0;

        cin >> n;

        while(n > 0){
            int t = n % 10;

            k = k * 10;
            k += t;

            n = n / 10;
        }

        cout << k << endl;



    }
    return 0;
}