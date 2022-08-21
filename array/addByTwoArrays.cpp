// given two arrays add the numbers 
// by making them in numbers ;
#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define f(x, n) for (int x = 0; x < n; ++x)
int main()
{
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int m,n ;
cin>>m>>n;
int a[m],b[n];
f(i,m)cin>>a[i];
f(i,n)cin>>b[i];
vector<int> ans;
int i = m-1 , j = n-1;
int carry  = 0 ;
while(i >= 0 && j >= 0){
int sum = a[i]+b[j]+carry;
ans.push_back(sum%10);
carry = sum/10;
--i;
--j;
}
while(i >= 0){
int sum = a[i] + carry;
ans.push_back(sum%10);
carry = sum/10;
--i;
}

while(j >= 0){
int sum = b[j] + carry;
ans.push_back(sum%10);
carry = sum/10;
--j;
}
// edge case
// 2 1 5 // here on last digits 8 + 2 = 10 where 0 is pushed 
// 8 0 6 //and 1 carry but i = 0 & j = 0 at this time 
if(carry)ans.push_back(carry);
reverse(ans.begin(),ans.end());
for(auto i : ans)
cout<<i;
    return 0;
}