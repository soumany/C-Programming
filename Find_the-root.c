#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, delta, root1, root2;
    printf("Enter the number of  a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;
  // condition for real and different roots
    if (delta > 0) {
        root1 = (-b + sqrt(delta))/ (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("root1 = %lf", root1);
        printf("root2=%lf", root2);
    }

    // condition for real and equal roots
    else if (delta == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %lf;", root1);
    }

    // if roots are not real
    else {
        printf("The quadratic equation has no roots");}
     
    return 0;
} 