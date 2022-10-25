#include <stdio.h>
int main()
{
	int mark, subjectCode;
	
	printf("\t\tSMK CEMERLANG");
	printf("\nSubject Code\t\t\tSubject Name");
	printf("\n============\t\t\t============");
	printf("\n     900\t\t\tPengajian Am");
	printf("\n     910\t\t\tBahasa Melayu");
	printf("\n     940\t\t\tSejarah");
	printf("\n     942\t\t\tGeografi");
	printf("\n     950\t\t\tMathematics M");
	printf("\n     958\t\t\tICT");
	printf("\n     960\t\t\tPhysics");
	printf("\n     962\t\t\tChemistry");
	printf("\n     964\t\t\tBiology");
	
	printf("\n\nEnter subject code: ");
	scanf("%d",&subjectCode);
	printf("\nEnter mark: ");
	scanf("%d",&mark);
	
	printf("\n\nResults");
	printf("\n========");
	printf("\n\nSubject code: %d",subjectCode);
	printf("\nMarks: %d",mark);
	if ((mark<=0)&&(mark<=24))
		printf("\nGrade: F");
	else if ((mark>=25)&&(mark<=29))
		printf("\nGrade: D");
	else if ((mark>=30)&&(mark<=34))
		printf("\nGrade: D+");
	else if ((mark>=35)&&(mark<=39))
		printf("\nGrade: C-");
	else if ((mark>=40)&&(mark<=44))
		printf("\nGrade: C");
	else if ((mark>=45)&&(mark<=54))
		printf("\nGrade: C+");
	else if ((mark>=55)&&(mark<=59))
		printf("\nGrade: B-");
	else if ((mark>=60)&&(mark<=64))
		printf("\nGrade: B");
	else if ((mark>=65)&&(mark<=69))
		printf("\nGrade: B+");
	else if ((mark>=70)&&(mark<=79))
		printf("\nGrade: A-");
	else if ((mark>=80)&&(mark<=100))
		printf("\nGrade: A");
		
		
	
	
	
	
	
	
	return 0;
}

