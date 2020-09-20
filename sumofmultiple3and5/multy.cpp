#include<stdio.h>
#include<math.h>
int multi3(int t) {
	int sum3{};
	for (int n = 0; n < t; n++)
		if (n % 3 == 0) sum3 += n;
	return sum3;
}
int multi5(int t) {
	int sum5{};
	for (int n = 0; n < t; n++)
		if (n % 5 == 0) sum5 += n;
	return sum5;
}
int main() {
	int hong;
	scanf_s("%d", &hong);
	printf("%d", multi3(hong) + multi5(hong));
}