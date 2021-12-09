#include <iostream>

const int N=1e5+5;
using namespace std;
int n,a[N];

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            if(a[j]<a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=1;i<=n;++i) cout << a[i] << endl;
    return 0;
}
