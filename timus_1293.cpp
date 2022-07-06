#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, a, b;
   cin>>n>>a>>b;
   cout<<n*a*b*2<<endl;
   return 0;
}

/// explanation
//  1 sqm requires 1ng sulphide.
//  area = required sulphide.
//  there is N rectangular panels, which dimensions are A by B meters.
//  so the area is A*B.
//  required sulphide is A*B
//  the panels need processing of both sides
//  so double the area A*B*2.
