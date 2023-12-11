/*
Q.2 Write a Program to find the largest element from a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
The largest element is: 9
*/
#include<stdio.h>

main(){
	
	int i,j,n,k,t=0;
	int a[n][k];
	
	
	printf("Enter size of Array :-");
	scanf("%d",&n);
	printf("Enter size of Array :-");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
		printf("Enter Elements :- ");
		scanf("%d",&a[i][j]);
	}
}
	t=a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
	  
	  if(t<a[i][j]){
	  	  t=a[i][j];
	   }	
	}
}
	printf("the largest number is %d ",t);
}
