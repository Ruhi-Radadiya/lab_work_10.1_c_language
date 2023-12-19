//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125
#include<stdio.h>

void cube(int n){
	printf("Cube is %d",n*n*n);
}
void main(){
	int a;
	
	printf("Enter any number:");
	scanf("%d",&a);
	
	cube(a);
}