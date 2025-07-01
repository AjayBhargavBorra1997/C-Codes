// Print a Array

#include <stdio.h>

int main() {
    // Write C code here
    int arr[5]={1,2,3,4,5};
    int i;
    int loop = (sizeof(arr)/sizeof(arr[0])); // 20/4=5
    for(i=0;i<loop;i++)
    {
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    
    return 0;
}



/*

Output:

arr[0] = 1 
arr[1] = 2 
arr[2] = 3 
arr[3] = 4 
arr[4] = 5 

*/
