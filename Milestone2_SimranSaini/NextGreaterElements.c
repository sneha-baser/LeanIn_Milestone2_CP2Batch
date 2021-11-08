// C program to print next greater elements
// in a given array
#include <stdio.h>
 
// Find the next greater element for every element in an array
void findNextGreaterElements(int array[], int n)
{
    // do for each element
    for (int i = 0; i < n; i++)
    {
        // keep track of the next greater element for element `array[i]`
        int next = -1;
 
        // process elements on the right of element `array[i]`
        for (int j = i + 1; j < n; j++)
        {
            // break the inner loop at the first larger element on the
            // right of element `array[i]`
            if (array[j] > array[i])
            {
                next = array[j];
                break;
            }
        }
 
        printf("%d ", next);
    }
}
 
int main(void)
{
    int array[] = { 2, 5, 7, 4, 10, 8, 1, 14 };
    int n = sizeof(array) / sizeof(array[0]);
 
    findNextGreaterElements(array, n);
 
    return 0;
}

/*OUTPUT
5 7 10 10 14 14 14 -1
*/
