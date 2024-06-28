#include <stdio.h>
#include<string.h>
struct Product {
    char product_id[10];
    int quantity;
};

int main() {
    struct Product inventory[1000];
    int count = 0;

   printf("Enter the product id and its quantity for all the entries:\n");
    while (1) {
        int  quantity;
	char product_id[10];
        if (scanf("%s %d", &product_id, &quantity) != 2) {
            break; // Exit loop if input format incorrect 
        }
        
        // Check if product_id already exists 
        int found = 0;
        for (int i = 0; i < count; ++i) {
            if (strcmp((inventory[i].product_id),product_id)==0) {
                // If product_id exists, add quantity to existing total
                inventory[i].quantity += quantity;
                found = 1;
                break;
            }
        }
        
        if (!found) {
            
            strcpy((inventory[count].product_id),product_id);
            inventory[count].quantity = quantity;
            count++;
        }
    }
    
    // Sort inventory
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (inventory[j].quantity < inventory[j + 1].quantity) {
                // Swap elements
                struct Product temp = inventory[j];
                inventory[j] = inventory[j + 1];
                inventory[j + 1] = temp;
            }
        }
    }
    printf("The summarized entrys are as follows:\n");
    // sorted inventory
    for (int i = 0; i < count; ++i) {
        printf("%s %d\n", inventory[i].product_id, inventory[i].quantity);
    }
    
    return 0;
}

