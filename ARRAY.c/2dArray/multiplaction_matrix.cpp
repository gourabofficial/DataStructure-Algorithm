#include<stdio.h>
int main(){
	int A[3][3],B[3][3],C[3][3],i,j,k,sum;
	printf("Enter 9 number for the first matrix:\n ");
	for( i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&A[i][j]);
	
	printf("Enter 9 number for the second matrix:\n ");
	for( i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&B[i][j]);
	
	//matrix multiplaction
	
	for( i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		sum=0;
		for(k=0;k<3;k++)
		sum=sum+A[i][k]*B[k][j];
		C[i][j]=sum;
		
	   }
	
      }   
      
      // result print 
      
	 printf("Resultant matrix is:\n");
	for( i=0;i<3;i++){
	
	for(j=0;j<3;j++){
	
	printf("%d ",C[i][j]);
    }
	printf("\n");
}
	return 0;
}
