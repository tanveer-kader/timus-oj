#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    m++;
    cout<<n*m<<endl;
    return 0;
}
/// explanation
//  For each integer from 0 to M the function would calculate how many times this number appears in the N-element array.
//  that's why there exists M+1 numbers as it's starting from 0.
//  to find one number in that array the comparison for one number is n.
//  for a 3 size array to find number 1 the comparison is 3. find 1 in a[0] / a[1] / a[2].
//  so the comparison for 10 number is 10*n.
//  so that it requires n*(m+1) comparisons which are n*(m+1) lines of code.
//  Petechkin needs one second to write a line of the code
//  so required time is n*(m+1).
