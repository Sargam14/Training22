#include<stdio.h>
#include<math.h>

int main()
{
	int n , lower_sq , upper_sq , lower_root , upper_root;

	printf("Enter a positive number : ");
	scanf("%d",&n);

	if (n<=0){
		printf("Enter a valid number. \n");
		return 0;
	}

	lower_root = (int)sqrt(n);
	upper_root = lower_root +1;

	lower_sq = lower_root * lower_root;
	upper_sq = upper_root * upper_root;

	if ((n-lower_sq)<=(upper_sq-n)){
		printf("the nearest is: %d\n",(lower_sq));
		}
	else{
		printf("the nearest is: %d\n",(upper_sq));
		}

		return 0;

	
	}
	
