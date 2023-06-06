// 12S22012 - Reinhard Batubara
// 12S22001 - Winfrey Nainggolan

#include <stdio.h>

int main(int _argc, char **_argv)
{
  unsigned int total;
  signed int min, max;
  max=-1000;
  min=1000;
  scanf("%d", &total);
  signed int data[total];
  for (int i = 0; i < total; i++)
  {
    scanf("%d", &data[i]);
    if (data[i]<min)
    {
      min=data[i];
    }
    if (data[i]>max)
    {
      max=data[i];
    }
    
  }
  printf("%d\n",min);
  printf("%d",max);


  return 0;
}

if (/* condition */)
{
  /* code */
}

