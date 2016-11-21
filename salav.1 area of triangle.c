/*
  Student Name: Salav Thapa
  Subject:Programing Fundamental
  Roll:
  Program:To print area of triangle
  Lab Sheet No:20
  Date: 21th Nov,2016
  */

  #include <stdio.h>
  #include <math.h>
  int main(){
      int a,b,c;
      float side,area,E;
      printf("enter the first side of triangle ");
      scanf("%d",&a);
      printf("enter the second side of triangle");
      scanf("%d",&b);
      printf("enter the third side of triangle ");
      scanf("%d",&c);
      side=(a+b+c)/2;
      E=side*(side-a)*(side-b)*(side-c);
      area=pow(E,0.5);
      printf("area of triangle is %f ", E);
      return(0);

  }
