#include <stdio.h>

int fahr(int m);

int main(void)
{
	printf("%d\n", fahr(0));
}

int fahr(int m)
{

	float fahr, celsius; //温度の基準

	fahr = m;							   //代入
	celsius = (5.0 / 9.0) * (fahr - 32.0); //計算方式

	return celsius;
}