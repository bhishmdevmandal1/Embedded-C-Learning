

#include <stdio.h>

int main()
{
    unsigned char distanceAtoB = 160;
    unsigned char distanceBtoC = 40;
    unsigned char distanceAtoC;
    
    distanceAtoC = distanceAtoB + distanceBtoC;
    printf("Total Distance From A to C = %d Km\n", distanceAtoC);
    
    return 0;
}