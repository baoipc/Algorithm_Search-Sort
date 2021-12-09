#include <iostream>

const int N=1e5+5;
using namespace std;
int n,a[N];

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    for(int i=2;i<=n;++i)
    {
        int value = a[i];
        int l=1;
        int r=i-1;
        for(int mid=(l+r)>>1;l<=r;mid=(l+r)>>1)
        {
            if(value<a[mid]) r=mid-1;
            else l=mid+1;
        }
        for(int j=i-1;j>=l;--j)
        {
            a[j+1]=a[j];
        }
        a[l]=value;
    }
    for(int i=1;i<=n;++i) cout << a[i] << ' '; cout << '\n';
    return 0;
}
