#include "stdio.h"
int main ()
{
	int mark,i,j; //mark = markah pelajar
	float average,cgpa;
	int totalMark = 0;
	
	for(j=1; j<4; j++)
	{
		printf("\nMASUKKAN MARKAH PELAJAR %d\n", j);
		
	
		for(i=1; i<5; i++)
	{
			printf("\nMinta markah subjek %d, 0-100: ", i);
			scanf("%d",&mark,i);
		
			if((mark>=0)&&(mark<=29))
				printf("Gred anda ialah F, CGPA anda ialah 0.00\n");
			else if((mark>=30)&&(mark<=39))
				printf("Gred anda ialah D, CGPA anda ialah 1.00\n");
			else if((mark>=40)&&(mark<=44))
				printf("Gred anda ialah D+, CGPA anda ialah 1.33\n");
			else if((mark>=45)&&(mark<=49))
				printf("Gred anda ialah C-, CGPA anda ialah 1.67\n");
			else if((mark>=50)&&(mark<=54))
				printf("Gred anda ialah C, CGPA anda ialah 2.00\n");
			else if((mark>=55)&&(mark<=59))
				printf("Gred anda ialah C+, CGPA anda ialah 2.33\n");
			else if((mark>=60)&&(mark<=64))
				printf("Gred anda ialah B-, CGPA anda ialah 2.67\n");
			else if((mark>=65)&&(mark<=69))
				printf("Gred anda ialah B, CGPA anda ialah 3.00\n");
			else if((mark>=70)&&(mark<=74))
				printf("Gred anda ialah B+, CGPA anda ialah 3.33\n");
			else if((mark>=75)&&(mark<=79))
				printf("Gred anda ialah A-, CGPA anda ialah 3.67\n");
			else if((mark>=80)&&(mark<=100))
				printf("Gred anda ialah A, CGPA anda ialah 4.00\n");
			else
				printf("Not Valid/n");
			
			totalMark = totalMark + mark;
		}
		printf("\nJumlah markah anda ialah = %d\n", totalMark);
		average = totalMark/(i-1);
		printf("Markah purata ialah = %.2f", average);
		cgpa = (float)totalMark/400*4;
		printf("\nCGPA anda ialah = %.2f \n", cgpa);
		totalMark = 0;
	}
	return 0;
}
