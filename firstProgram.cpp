#include "iostream"
#include "stdio.h"

int IntAddition(int Anna, int Bogdan)
{  
	int R = Anna + Bogdan;
	//printf("", &s, &Anna);
	printf("start");
	printf("\n");
	printf("Anna");
	printf("\n");

	return R;
}

float FloatAddition(float A, float B)
{  
	float R = A + B;
	//printf("", &s, &Anna);
	printf("start");
	printf("\n");
	printf("Anna");
	printf("\n");

	return R;
}  

 int Multiplication(int figure1, int figure2, int figure3)
{  
	int mR = figure1 * figure2 * figure3;
	//printf("", &s, &Anna);
	printf("start");
	printf("\n");
	printf("Anna");
	printf("\n");
	showResult(r, variableR, figureR);

	return mR;
}
void showResult(int sR, float vR, int mR)
{
	printf("Result1 = %i\n", sR);
	printf("Result2 = %f\n", vR);
	printf("Result3 = %i\n", mR);
}  

void showEnd(void)
{ 
	printf("End\n");

} 


int main()
{  
	int anna = 28; 
	int bogdan = 0;
	float variable1 = 2.3;
	float variable2 = 4.8;
	float variableR = 0;
	int figureR = 0;
	int figure1 = 5;
	int figure2 = 3;
	int figure3 = 2;
	int r;  
	


	r = IntAddition(anna, bogdan);
	variableR = FloatAddition(variable1, variable2);
    figureR = Multiplication(figure1, figure2, figure3);

	showEnd();
}  




