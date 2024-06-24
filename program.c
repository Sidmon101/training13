// Programs to perform basic array operations
#include <stdio.h>

int main() {
    int arr[] = {5, 3, 9, 23, 21, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_num = arr[0];
    int second_max_num = arr[0];
    int min_num = arr[0];
    int sum = 0;
    float average;
    int find = 9;
    int ind;

   
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max_num) {
            second_max_num = max_num;  
            max_num = arr[i];          // max
        } else if (arr[i] > second_max_num && arr[i] != max_num) {
            second_max_num = arr[i]; // second max
        }

        if (arr[i] < min_num) {
            min_num = arr[i];
        }
        
        sum += arr[i];   //sum

	if (arr[i]==find){
		ind=i;     //index find
    }
    }

    //  average
    average = (float)sum / size;

    // Output results
    printf("Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Maximum element: %d\n", max_num);
    printf("Second largest element: %d\n", second_max_num);
    printf("Minimum element: %d\n", min_num);
    printf("Sum of array: %d\n", sum);
    printf("Average of array: %.2f\n", average);
    printf("Index of the element : %d\n",ind);
    return 0;
}


