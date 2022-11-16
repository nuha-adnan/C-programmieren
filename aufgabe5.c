#include <stdio.h>
#define N 3
#define M 4
 void get_element(int Mat[N][M],int *x,int m,int n){ // die Funktion mit 4 paramter  
                                                     // ein Paramter ist Pointer durch                                                     // duech 
     int i,j;
    for(i=0;i<N;i++){
          for(j=0;j<M;j++){
         if(i==m && j==n)
         *x=Mat[i][j];
     }}
    
 }


int main()
{   int matrix[N][M]={{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12}};
int i,j,x;
printf("i= ");
scanf("%d",&i);
printf("j= ");
scanf("%d",&j);
get_element(matrix,&x,i,j);

    printf("x= %d",x);

    return 0;
}


