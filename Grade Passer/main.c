#include <stdio.h>


	int homework,midtermexam,lab,finalproject,quiz,choose,selection;
	float result1,result2,result3,result4,finalkat,final;
	float harfnotu[]={90,85,70,65,60,55,50}; //min value to pass(AA,BB,CC etc....)

	int main()
{

	printf("Welcome to Grade Passer Calculator\n");
	printf("\n\n");
	printf("1-MATH\n2-PHYSIC\n3-COMPUTER PROGRAMMING\n4-INTRODUCTON TO COMPUTER ENGINEERING\n");
	printf("\n\n");


	printf("Which lesson do you want to calculate:");
	scanf("%d",&choose);
			if(choose<1 || choose>4)
            {
			printf("Invalid choice! Please choose a lesson between 1 to 4!");
			return 0;
			}


	printf("Which grade letter do you want to pass with:(1-AA,2-BA,3-BB,4-CB,5-CC,6-DC,7-DD):");
	scanf(" %d",&selection);
 			if(selection < 1 || selection > 7) // || means "OR"
            {
			printf("Invalid choice! Please choose a valid grade between 1 to 7!");
			return 0;
			}




	switch(choose){
		case 1:
				printf("Math Midterm Exam Result: ");
				scanf("%d",&midtermexam);

				printf("Math Quiz Result: ");
				scanf("%d",&quiz);

				printf("Math Homework Result: ");
				scanf("%d",&homework);

			result1=midtermexam *30.0/100.0;
			result2=quiz *10.0/100.0;
			result3=homework *10.0/100.0;
			finalkat= 50.0/100.0;

			final=(harfnotu[selection-1]-(result1+result2+result3))/finalkat;

			if(final>100)
            {
				printf("Impossible to pass.");
			}

			else if(final < 0)
            {
                printf("Final can not get negative numbers. \n ");
            }
            else
			{
				printf("The Minimum Final Exam Grade To Pass With: %.2f\n",final);
			}
			break;

		case 2:
			printf("Physic Midterm result : ");
			scanf("%d",&midtermexam);

			printf("Physic Quiz Result : ");
			scanf("%d",&quiz);

			printf("Physic Homework Result : ");
			scanf("%d",&homework);

			printf("Physic Lab Result: ");
			scanf("%d",&lab);

			result1	= midtermexam * 30.0 / 100.0;
    		result2 = quiz * 5.0 / 100.0;
    		result3 = lab * 5.0 / 100.0;
    		result4 = homework *5.0 /100.0;
    		finalkat = 50.0 /100.0;
    		final=(harfnotu[selection-1]-(result1+result2+result3+result4))/finalkat;
    		if (final>100)
            {
				printf("Impossible to pass.");
			}
			else if(final < 0)
            {
                printf("Final can not get negative numbers.\n");
            }
			else
			{
				printf("The Minimum Final Exam Grade To Pass With: %.2f\n", final);
			}
			break;
		case 3 :
			printf("Computer Programming Midterm Exam Result : ");
			scanf("%d",&midtermexam);

			printf("Computer Programming Quiz Result : ");
			scanf("%d",&quiz);

			printf("Computer Programming Homework Result : ");
			scanf("%d",&homework);

			printf("Final Project Result: ");
			scanf("%d",&finalproject);


			result1	= midtermexam * 30.0 / 100.0;
    		result2 = quiz * 10.0 / 100.0;
    		result3 = homework * 10.0 /100.0;
    		result4 = finalproject * 25.0/100.0;
    		finalkat = 25.0 /100.0;

    		final=(harfnotu[selection-1]-(result1+result2+result3+result4))/finalkat;
    		if (final>100)
            {
				printf("Impossible to pass.");
			}
			else if(final < 0)
            {
                printf("Final can not get negative numbers.\n");
            }
			else
			{
				printf("The Minimum Final Exam Grade To Pass With: %.2f\n", final);
			}
			break;
    	case 4 :
			printf("Introduction to Computer Engineering Midterm Exam Result : ");
			scanf("%d",&midtermexam);

			printf("Quiz Result : ");
			scanf("%d",&quiz);

			printf("Homework Result : ");
			scanf("%d",&homework);


			result1	= midtermexam * 30.0 / 100.0;
    		result2 = quiz * 10.0 / 100.0;
    		result3 = homework *10.0 /100.0;
    		finalkat = 50.0 /100.0;

    		final=(harfnotu[selection-1]-(result1+result2+result3))/finalkat;
    		if (final>100)
            {
				printf("Impossible to pass.");
			}
			else if(final < 0)
            {
                printf("Final can not get negative numbers.\n");
            }
			else
			{
				printf("The Minimum Final Exam Grade To Pass With : %.2f\n", final);
			}
			break;


}
	return 0;


}
