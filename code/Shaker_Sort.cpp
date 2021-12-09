#include <iostream>

const int N=1e5+5;
using namespace std;
int n,a[N];

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    int left = 1;
    int right = n;
    //for(int i=1;i<=n;++i) cout << a[i] << " ";cout << '\n';
    for(int k=1;left<right;)
    {
        for(int i=right;i>left;--i)
        {
            if(a[i]<a[i-1])
            {
                int temp = a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
                //for(int i=1;i<=n;++i) cout << a[i] << " ";cout << '\n';
                k=i;
            }
        }
        left=k;
        for(int i=left;i<right;++i)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                //for(int i=1;i<=n;++i) cout << a[i] << " ";cout << '\n';
                k=i;
            }
        }
        right=k;
    }
    for(int i=1;i<=n;++i) cout << a[i] << " ";cout << '\n';
    return 0;
}
