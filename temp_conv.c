#include <stdio.h>
float farh, cels;
float upper, lower, step;

int farh_cels() {
    lower =0;
    upper = 300;
    step = 20;
    farh = lower;
    printf("The table of conversion:(Farh to Cels:)\n");
    while(farh<=upper){
        cels = (5*(farh-32))/9;
        printf("%f\t%f\t\n", farh, cels);
        farh = farh + step;
    }
}

int cels_farh(){
    lower = 0;
    upper = 100;
    step = 10;
    cels = lower;
    printf("The table of conversion:(Cels to Farh:)\n");
    while(cels<=upper){
        farh = (9*(cels)/5)+32;
        printf("%f\t%f\t\n", cels, farh);
        cels = cels + step;
    }
}

int farh_cels_rev(){
    lower = 300;
    upper = 0;
    step = 20;
    farh = lower;
    printf("The table of conversion: (Farh to Cels Reverse Order:)\n");
    while(farh>=upper){
        cels = (5*(farh-32))/9;
        printf("%f\t%f\t\n", farh, cels);
        farh = farh - step;
    }
}

int cels_farh_rev(){
    lower = 100;
    upper = 0;
    step = 10;
    cels = lower;
    printf("The table of conversion: (Cels to Farh Reverse Order:)\n");
    while(cels>=upper){
        farh = (9*(cels)/5)+32;
        printf("%f\t%f\t\n", cels, farh);
        cels = cels - step;
    }
}

int main(){
    farh_cels();
    cels_farh();
    farh_cels_rev();
    cels_farh_rev();
    return 0;
}