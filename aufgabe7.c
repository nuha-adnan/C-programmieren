#include <stdio.h>
void teil(int x){
for(int i=2;i<=x/2;i++)
    if(x%i==0)
    printf(",%d",i);
    else
    continue;
}
int main()
{ int x;
printf("Zahl eingeben\n");
scanf("%d",&x);
printf("(1");
teil(x);
printf(")");
    return 0;
}
