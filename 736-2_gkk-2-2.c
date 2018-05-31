#include <stdio.h>
float main ()
{
 float N;
 float a;
 float P;
 int i;
 P=1;
 scanf("%f", &N);
 for(i=1;i<=N;i++)
 {
  scanf("%f", &a);
  P=P*(a-i);
 }
 if (N==0){P=0;}
 printf ("%f\n",P);
 return 0;
}
