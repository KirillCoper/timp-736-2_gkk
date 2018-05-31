#include <stdio.h>
float main()
{
 float N;
 float a;
 float k;
 k=0;
 int i;
 scanf("%f", &N);
 for(i=1;i<=N;i++)
 {
  scanf("%f", &a);
  if (a<0){k=k+1;}
 };
 printf ("%f\n",k);
 return 0;
}
