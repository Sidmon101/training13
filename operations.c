#include<stdio.h>
#include<math.h>

int main(){
	int num;
	printf("Enter the Number:\n");
	scanf("%d", &num);
	int sq=num*num;
	int dig=0;
	int tem=num;
	int s,sum=0;
	printf("The Square of the Number:%d\n",sq);
	while(tem!=0){
		s=tem%10;
		tem=tem/10;
		dig++;
		sum+=s;
	}
	printf("Sum of Digits: %d\n",sum);
	printf("Number of Digits:%d\n",dig);
        int check=1;
        for(int i=0;i<dig;i++){
		check*=10;
          }
	printf("Modulus Number(10 to the power of %d) : %d\n",dig,check);
	if(sq%check==num)
		printf("Its an Automorphic number\n");
	else
		printf("No,Not an Automorphic number\n");

	return 0;
}
	

