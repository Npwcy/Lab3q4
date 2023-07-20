#include <stdio.h>
int main(){
	int i;
	int sum = 0;
	float count = 0;	
	printf("Enter number : ");
        scanf("%d",&i);
	while (i > 0){
	count++;
	printf("Enter number : ");
        scanf("%d",&i);
		sum+=i;

	}
		printf("Summation = %d\n",sum);
		printf("avg = %f\n",(sum/count));
		
}
