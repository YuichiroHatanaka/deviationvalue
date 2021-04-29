#include<stdio.h>
#include<math.h>

int n;
int i;
double ave;
double a, b;
double dis;
double root;
double dev;

int main(void){
  printf("母数を入力してください。\n");
  scanf("%d", &n); 
  ave = 100 / n;
  a = (100 - ave) * (100 - ave);
  b = (0 - ave) * (0 - ave);
  
  for(i = 1;i < n;i++){
    a = a + b;
  }
  
  dis = a / n;
  root = sqrt(dis);
  dev = (100 - ave) / root;
  dev = 10 * dev + 50;
  printf("偏差値は%lfです。\n", dev);
  return 0;
}
