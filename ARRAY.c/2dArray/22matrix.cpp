#include<stdio.h>
   int main(){
   	int A[2][2],i,j;
   	printf("Enter matrix element: ");
   	
   	for(i=0;i<2;i++)
   	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
    	printf("matrix element:\n");
   	
   	  for(i=0;i<2;i++)
   	 {
		for(j=0;j<2;j++)
		{
			printf("%d " ,A[i][j]);
		} printf("\n");
	 } 
       return 0;	 
   }
