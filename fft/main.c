#include "fft.h"
#include <stdio.h>
#include <math.h>

#define N 64

int main()
{
    complex f[N];
    for(int i = 0; i != N; ++i)
    {
        f[i].real = sin(PI * (i+1) / 6.0f); 

        f[i].imag = 0.0f;
    }

    fft(N, f);

    for(int i = 0; i != N; ++i)
    {
        printf("%f,%f\n",f[i].real,f[i].imag);
    }
    return 0;
}
