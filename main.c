#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10]={32,0,23,112,-6,34,10,56,76,-66};
    int N,i,j,swap;


for (i=0;i<=10;i++){
   for (j=i+1;j<=10;j++){

   if (T[i]>T[j]) {
     swap=T[i];
   T[i]=T[j];
   T[j]=swap;
   }
}
}
for (i=0;i<=10;i++) {
printf("T[%d]=%d\n",i,T[i]);




}

    return 0;
}
