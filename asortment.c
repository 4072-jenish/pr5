/*Q.1 Write a Program to find all the negative elements from a given 1D array.
For example,
Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5

Output:
Negative elements from an Array: -4, -3, -5
*/
#include<stdio.h>

main(){
	
	int i,n;
	int a[1000];
	
	
	printf("Enter size of Array :-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter Elements :- ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
		
		printf("%d",a[i]);
	}
	}
	
}
 /*Enter size of Array :-5
Enter Elements :- 3
Enter Elements :- 1
Enter Elements :- 5
Enter Elements :- -4
Enter Elements :- -5
-4-5
*/
