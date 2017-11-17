/* Ecological Premium */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int f, sum = 0;
        cin >> f;
        while (f--)
        {
            int size, animal, env;
            cin >> size >> animal >> env;
            sum += size * env;
        } 
        cout << sum << endl;
    }
}
