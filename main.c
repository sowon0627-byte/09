#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
    int grade[SIZE];
    int i;
    int sum = 0;
    
    // 점수 입력 // 
    for(i=0;i<SIZE;i++)
    {
       printf("enter student grade: ");
       scanf("%d", &grade[i]);
       sum = sum+grade[i];
    }
    
    // 점수 출력 // 
    printf("average is %d\n", sum / SIZE);
  
  system("PAUSE");	
  return 0;
}
