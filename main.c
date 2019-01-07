#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ST(int standard);
 void chengcheng(int a,int b);

int main()
{
  srand(time(0));
    int i;
    int A[11],B[11],C[11];
    int standard=0;

    for(i=0;i<9;i=i+1)
    {
        printf("hihi!\n");
        chengcheng(i,i+5);
    }



    for(i=1;i<=10;i++)
    {
     A[i]=rand()%101;
     B[i]=rand()%101;
     C[i]=rand()%101;
    }


    printf("   學生                           成績                                             總和平均\n");
    printf("    A");
    for(i=1;i<=10;i++)
    {
    printf("     %d",A[i]);
    standard+=A[i];
    }
   standard=ST(standard);
    printf("    B");
    for(i=1;i<=10;i++)
    {
    printf("     %d",B[i]);
    standard+=B[i];
    }
    standard=ST(standard);
    printf("    C");
    for(i=1;i<=10;i++)
    {
    printf("     %d",C[i]);
    standard+=C[i];
    }
    standard=ST(standard);
    printf("\n");
    printf("*********************\n");
    for(i=1;i<=10;i++)
    {
    printf("   %p",&A[i]);
    }
     printf("\n");
    for(i=1;i<=10;i++)
    {
    printf("   %p",&B[i]);
    }
    printf("\n");
    for(i=1;i<=10;i++)
    {
    printf("   %p",&C[i]);
    }
    printf("\n");
    printf("*********************\n");
    printf("\n");
    printf("main()      %p\n",&main);
    printf("printf    %p\n",&printf);
    printf("ST()        %p\n",&ST);
    printf("standard   %p\n",&standard);
}


int ST(int standard)
 {
    standard=standard/10;
    printf("            %d\n",standard);
  return 0;
 }

 void chengcheng(int a,int b)
 {
     int z,i;
     z=a*a+2*a*b+b*b;
     printf("(%d+%d)(%d+%d)=%d\n\n",a,b,a,b,z);
     for(i=0;i<9;i=i+1)
     {
         printf("%d%d\n\n",i,i);
     }
 }



