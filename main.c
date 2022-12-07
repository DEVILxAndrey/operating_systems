#include <stdio.h>

int main(){
    int x, y, d;
    float z;
    printf("vvedite x:");
    scanf("%d", &x);
    printf("vvedite y:");
    scanf("%d", &y);

    printf("vibirete deistvie:\n ");
    printf("1-slojenie\n");
    printf("2-vichitanie\n");
    printf("3-umnojhenit\n");
    printf("4-delenie\n");
    scanf("%d", &d);
    if (d == 1) {
        z = x + y;
        printf("%d + %d = %d", x,y,z);
    }
    else if (d == 2) {
        z = x - y;
        printf("%d - %d = %d", x,y,z);
    }
    else if (d == 3) {
        z = x * y;
        printf("%d * %d = %d", x,y,z);
    }
    else if (d == 4) {
        if (y == 0){
            printf("vi eblan, delit na 0 nelzya!");
        }
    else {
        z = (float) x / y;
        printf("%d / %d = %f", x,y,z);
    }
    }    
    else {
        printf("nevernoe deistvie");
    }

    return 0;
}