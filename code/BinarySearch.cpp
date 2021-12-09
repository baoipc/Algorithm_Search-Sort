#include <iostream>
#include <algorithm>

const int N=1e5+5;
using namespace std;
int n,a[N],x;

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    cin >> x;
    sort(a+1,a+1+n); // same QuickSort
    int l=1;
    int r=n;
    for(int mid=(l+r)>>1;l<=r;mid=(l+r)>>1)
    {
        if(a[mid] == x)
        {
            return cout << "Value: " << x << " found in array!",0;
        }
        if(a[mid] > x) r = mid - 1; else l = mid + 1;
    }
    cout << "Not Found!";
    return 0;
}
