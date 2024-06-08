#include<stdio.h>

void bubble_sort(int a[],int n){
    int i,round,temp,flag;
    for(round = 1;round <= n-1;round++){
        flag = 0;
        for(i = 0; i <= n-1-round; i++){
            if(a[i]>a[i+1]){
                flag = 1;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        if(flag == 0){
            printf("Round = %d\n",round);
            return;
        }
    }
}

int main(){
    int array [] = {100,23,32,460,580,90,1070};
    int i;
    bubble_sort(array,7);
    for (int i = 0; i <= 6; i++ )
    printf("%d\t",array[i]);
    

    return 0;
}