#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
} compl;


void PrintCompl(compl*num) {
	if ((num->y) >= 0)
	{
		printf_s("max = %d + %di", (num->x), (num->y));
	}
	else {
		printf_s("max = %d%di", (num->x), (num->y));
	}
}

int main()
{
	FILE* f;
	fopen_s(&f, "C:\\Users\\PC\\source\\repos\\¹1audut", "r");
	int size;
	fscanf_s(f, "%d", &size);
	char tmp;
	fscanf_s(f, "%c", &tmp, 1);
	compl*mass = (compl*)malloc(size * sizeof(compl));


	for (int i = 0; i < size; i++) {
		fscanf_s(f, "%d%d", &(mass[i].x), &(mass[i].y));
		fscanf_s(f, "%c", &tmp, 1);
	}

	int max = 0; int k = 0;
	for (int i = 0; i < size; i++) {
		PrintCompl(&(mass[i]));
		printf_s("\n");

		if (((pow(mass[i].x, 2) + pow(mass[i].y, 2))) > max) {
			max = pow(mass[i].x, 2) + pow(mass[i].y, 2);
			k = i;
		}
	}
	printf_s("\n");

	PrintCompl(&(mass[k]));

	free(mass);
	system("pause");
	return 0;
}