#include <iostream>
#include<any>
#include<vector>
typedef long long ll;
using namespace std;
int main() {
    ll n;
    cin>>n;
    vector<ll> A(n);

    for(int i = 0; i < n;i++) {
        cin>>A[i];
    }

    for(ll i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}