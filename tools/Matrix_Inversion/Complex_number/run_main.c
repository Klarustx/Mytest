#include "MatrixLib.h"
#include "ComplexLib.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

COMPLEX a[4];
int m;

a[0]= first_set_value(1,1);
a[1]= first_set_value(2,3);
a[2]= first_set_value(4,5);
a[3]= first_set_value(6,7);

int i,j;
for (i=0;i<2;i++)
 {
  for (j=0;j<2;j++)
     {
        printf("%lf",a[i*2+j].re );
        printf("+");
        printf("%lf",a[i*2+j].im );
        printf("*i\t");
     }
  printf("\n");

}

//double b[9];


m = MatInv(a,2);

//�жϾ����Ƿ���棬������棬���ӡ������󣬷��򱨴�
if(m)
{
    //MatInv1(b,a,3);
    printf("\n");

    for (i=0;i<2;i++)
    {
       for (j=0;j<2;j++)
        {
            printf("%lf",a[i*2+j].re );
            printf("+");
            printf("%lf",a[i*2+j].im );
            printf("*i\t");
        }
       printf("\n");
    }
}
else
{
 printf("matrix doesn't exist inverse!\n");

}

return 0;
}