#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,R;
    printf("saisir le nombre a multipluer:");
    scanf("%d",&N);

   while (N>10) {
    printf("saisir le nombre a multipluer");
    scanf("%d",&N);
   }



    for (i=0;i<10;i++)
    { R=N*i;
        printf("%d*%d=%d\n",N,i,R);
    }


    return 0;
}
