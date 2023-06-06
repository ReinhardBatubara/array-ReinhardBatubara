// 12S22012 - Reinhard Batubara
// 12S22001 - Winfrey Nainggolan

#include <stdio.h>

int main(int _argc, char **_argv)
{
  unsigned int total;
  signed int min, max;
  float hasil, low;
  max=-1000;
  min=1000;
  low=1000;
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
  for (int i = 0; i < (total-1); i++)
  {
    hasil=(float)(data[i]+data[i+1])/2;
    if (hasil<low)
    {
      low=hasil;
    }
  }
  printf("%d\n",min);
  printf("%d\n",max);
  printf("%.2f",low);


  return 0;
}