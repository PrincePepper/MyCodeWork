#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n, i, j;
    cin >> n;

    vector<int> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (i = 2; i * i <= n; i++)
        if (prime[i] && i * i <= n)
            for (j = i * i; j <= n; j += i)
                prime[j] = 0;
    for(i=0;i<=n;i++)
        if(prime[i]==1)
            cout<<i<<" ";
}