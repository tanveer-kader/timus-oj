#include <bits/stdc++.h>
using namespace std;

int main() {
   int h,l;
   cin>>h>>l;
   int total = h+l-1;
   cout<<total-h<<" "<<total-l<<endl;
   return 0;
}
/// explanation
// they both had a common shot
// which is subtracted from total shots
// not shot by Harry = total - harry's shot
// not shot by Larry = total - larry's shot

