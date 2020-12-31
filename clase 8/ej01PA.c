#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 1, 3, 4, 5, 1, 1, 2, 3, 5, 6, 1, 7, 2, 4, 7, 9, 2, 4, 6, 7, 3, 1, 3, 6, 7, 7, 2};
    int n,ctr=0;
    int i, j, k;

    printf("\nThe unique elements found in the array are: \n");

    for(i=0; i<29; i++){
        ctr=0;
        for(j=0,k=29; j<k+1; j++){
            if (i!=j){
		       if(arr1[i]==arr1[j]){
                    ctr++;
               }
            }
        }
       if(ctr==0){
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}
