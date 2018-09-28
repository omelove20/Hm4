#include <stdio.h>
int main()
{
	int number;
	number = 1;
	do{
		printf("%d : ",number);
		if(number%28==0 || number%29==0){
			printf(" We are TechnicCom ");
		}if(number%30==0){
			printf(" 30 Years Anniversary Undelete ");
		}if(number==number){
			int i , j ;
			for(i=1;i<=100;i++){
				for(j=2;j<=i;j++){
					if(i%j == 0)
						break ;
				}
				if (i==j && i==number)
					printf(" Prime Number ");
			}
		}if(number==23){
			printf(" Weerapong Nanta Ome ");
		}if(number==2){
			printf(" Jitapa porsom fernsri");
		}if(number==7){
			printf("Chonlawit Penwijit Print ");
		}
	number++;
	printf("\n");
	}while(number<=100);
}
