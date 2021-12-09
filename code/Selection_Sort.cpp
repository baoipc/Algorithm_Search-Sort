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
        int Min = i;
        for(int j=i+1;j<=n;++j)
        {
            if(a[j] < a[Min])
            {
                Min = j;
            }
        }
        int temp = a[Min];
        a[Min] = a[i];
        a[i] = temp;
    }
    for(int i=1;i<=n;++i) cout << a[i] << endl;
    return 0;
}
