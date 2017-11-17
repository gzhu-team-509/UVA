/* Hashmat the Brave Warrior */
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long long a, b;
    while (scanf("%lld%lld", &a, &b) == 2)
    {
        /* "or vice versa" */
        printf("%lld\n", abs(a - b));
    }
}
