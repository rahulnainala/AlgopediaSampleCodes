#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6}; //Sorted array
    int search = 5;
    _Bool flag = 0;
        for (int i = 0; i < 5; i++) //Time Complexity: O(n)
        {
            if (arr[i] == search)
            {
                flag = 1;
            }
        }
    if (flag == 1)
    {
        printf("found");
    }
    else 
        printf("not found");
    return 0;
}