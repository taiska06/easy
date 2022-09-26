#include"easy.h"
#define PI 3.14;
int itc_skv(int num) {
    if (num <= 0)
        return -1;
    return num * num;
}
int itc_spr(int a,int b) {
    if (a <= 0 || b <= 0 )
        return -1;
    return a * b;
}
int itc_str(int a, int b, int c) {
    int k;
    k=1;
    if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0)
    return -1;
    double p = (a + b + c) / 2;
       while (k *k < ((p * (p - a) * (p - b) * (p - c)))){
           k=k+1;
       }
    if (k * k == ((p * (p - a) * (p - b) * (p - c))))
        return k;
    return -1;
    
}

double itc_scir(int r) {
    if (r < 0)
        return -1;
    return r * r * PI;
}
 bool itc_iseven (int num){
     return (num % 2 == 0);
     
     
 }
