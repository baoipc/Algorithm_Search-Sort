#include <iostream>

const int N=1e5+5;
using namespace std;
int n,a[N];

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    int value;
    for(int i=1;i<=n;++i)
    {
        value=a[i];
        int j=i-1;
        for(;j>0 && a[j]>=value;--j)
        {
            a[j+1]=a[j];
        }
        a[j+1]=value;
    }
    for(int i=1;i<=n;++i) cout << a[i] << ' ';cout << endl;
    return 0;
}
