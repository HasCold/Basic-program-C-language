#include <stdio.h>
#include <math.h>
int main()
{
    //  Q4 Explain step by step evaluation of 3 * x / y - z + k
    int x = 2, y = 3, z = 3, k = 1;
    int answer = 3 * x / y - z + k;
    // 6 / 3 - 3 + 1 // according to operator precedence
    // 2 - 2 + 1
    // 0
    printf("The value of answer %d ", 3 * x / y - z + k);
    

    return 0;
}