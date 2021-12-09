#include <iostream>

const int N=1e5+5;
using namespace std;
int n,x,a[N];

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    cin >> x;
    int pos = -1; // index found x
    int i=1;
    while(i<=n && a[i]!=x)
    {
        ++i;
    }
    if(pos == -1) cout << "Not found!";
    else{
        cout << "Value: " << x << " found in array!";
    }//
    return 0;
}
