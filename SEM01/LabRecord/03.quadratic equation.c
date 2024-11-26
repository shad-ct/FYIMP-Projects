#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    
    printf("enter you a b and c :");
    scanf("%lf%lf%lf",&a,&b,&c);
    
    double bsqr = b*b, ac = 4*(a*c), root = bsqr - ac ,rooty = sqrt(root);
    double twoa = 2*a, posi = (-b+rooty)/twoa, neg = (-b-rooty)/twoa;
    
    printf("the solutions are : %.1lf and %.1lf",posi,neg);
    
}
