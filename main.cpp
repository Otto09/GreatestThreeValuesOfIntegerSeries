#include <iostream>

using namespace std;

int main()
{
    int i, aux1, aux2, aux3;

    int a[] = {2, 14, 1, 4, 9, 11, 7};

    int max1 = a[0];
    int max2 = a[1];
    int max3 = a[2];

    if(max1 < max2)
    {
        aux1 = max1;
        max1 = max2;
        max2 = aux1;
    }

    if(max1 < max3 && max2 < max3)
    {
        aux2 = max1;
        max1 = max3;
        max3 = aux2;
    }

    if(max2 < max3 && max3 < max1)
    {
        aux3 = max2;
        max2 = max3;
        max3 = aux3;
    }

    for(i = 3; i < 7; i++)
    {
        if(max1 < a[i])
        {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }

        if(max2 < a[i] && a[i] < max1)
        {
            max3 = max2;
            max2 = a[i];
        }

        if(max3 < a[i] && a[i] < max2)
        {
            max3 = a[i];
        }
    }

    cout << "Cele mai trei valori din sir sunt: " << max1 << ", " << max2 << ", " << max3 << endl;
    return 0;
}
