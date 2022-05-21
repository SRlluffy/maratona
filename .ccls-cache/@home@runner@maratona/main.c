#include<stdio.h>
#include<stdlib.h>

int main(){

  float x, y;
  scanf("%f %f",&x,&y);

  if (x==0.0 || y==0.0){
    if(x== 0.0 && y== 0.0){
      printf("Origem\n");
    
  }
    if(x==0.0 && y!=0.0){
      printf("Eixo Y");
    }
    if(y==0.0 && x!=0.0){
      printf("Eixo X");
    }
    
  }else{
    if(x>0.0){
      if(y>0.0){
        printf("Q1");
      }else{
        printf("Q4");
          
      }
    }else{
      if(y>0.0){
        printf("Q2");
      }else{
        printf("Q3");
      }
    }
  }
  
  return 0;
}