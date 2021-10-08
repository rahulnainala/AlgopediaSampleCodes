//Searching for an element in a sorted array of elements
#include <stdio.h>
#include <iostream> 

int main(){
    int arr[] = {1,2,3,4,5,6}; //Sorted array
    int search = 5;
    bool flag = false;
        for (int i = 0; i < 5; i++) //Time Complexity: O(n)
        {
            if (arr[i] == search)
            {
                flag = true;
            }
        }
    if (flag == true)
    {
        std::cout<<"found";
    }
    else 
        std::cout<<"not found";
    return 0;
}