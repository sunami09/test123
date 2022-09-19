#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, count = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int l;
        cin >> l;

        if(l % k == 0){
            count++;
        }

    }

    cout << count;
    return 0;
}