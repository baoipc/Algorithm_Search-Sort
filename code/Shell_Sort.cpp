#include <iostream>

const int N=1e5+5;
using namespace std;
int n,a[N];

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    for(int interval = n/2;interval>0;interval/=2)
    {
        for(int i=interval;i<=n;++i)
        {
            int temp = a[i];
            int j;
            for(j=i;j>=interval && a[j-interval]>temp;j-=interval)
            {
                a[j] = a[j-interval];
                for(int k=1;k<=n;++k) cout << a[k] << " ";cout << '\n';
            }
            a[j]=temp;
            for(int k=1;k<=n;++k) cout << a[k] << " ";cout << '\n';
        }
    }
    for(int i=1;i<=n;++i) cout << a[i] << " ";cout << '\n';
    return 0;
}
