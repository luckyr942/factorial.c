#include<stdio.h>

# to print the factorial of the no
int main() {
    int fact=1 , n,i;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
        printf("fact=%d",fact);
    
    
    return 0;
}