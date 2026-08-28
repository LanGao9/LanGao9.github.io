#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double s, v;
int main() {
	scanf("%lf%lf", &s, &v);
	int sum = int(std::ceil(s / v)) + 10;
//	cout << sum;		总分钟数
	int hour = std::ceil(double(sum / 60)) + 1;
	int minute = sum % 60;
	//特判边界：minute = 60 的倍数；
//	cout << hour << endl << minute;
	if (minute == 0) hour--;
	if ((8-hour) >= 0 && minute != 0)
		printf("%02d:%02d", 8-hour, 60 - minute);
	if ((8-hour) >= 0 && minute == 0)
		printf("%02d:%02d", 8-hour, minute);
	if ((8-hour) < 0 && minute != 0)
		printf("%02d:%02d", 24 - (hour - 8), 60 - minute);
	if ((8-hour) < 0 && minute == 0)
		printf("%02d:%02d", 24 - (hour - 8), minute);
	return 0;
}
