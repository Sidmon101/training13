#include <stdio.h>
#include<string.h>
int main()
{   int str[100];
    int s;
    printf("Input your total elements in array:\n");
    scanf("%d",&s);
    printf("Enter elements:\n");
    for(int i=0;i<s;i++){
        scanf("%d",&str[i]);
    }
    int count[100]={0};
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(str[i]==str[j]){
                count[str[i]]++;
            }
        }
    }
    printf("U: ");
    for(int i=0;i<s;i++){
        if(count[str[i]]==0)
           printf("%d ",str[i]);
      
    }
    printf("\n");
    printf("D: ");
    for(int i=0;i<s;i++){
        if(count[i]>0)
           printf("%d ",i);
    }
   return 0; 
}
