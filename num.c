//本程序是关于变量的，定义变量，赋值，打印赋值后的变量
//c标准库
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //int定义整数变量
  int dog,cat,cow;
  dog = 1;
  cat = 2;
  cow = 3;
  //%d用于整数类型
  printf("There is %d dog,%d cats and %d cows\n",dog,cat,cow);
  return 0;
}
