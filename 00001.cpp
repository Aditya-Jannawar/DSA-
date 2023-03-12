	#include <stdio.h>
	#include <math.h>
	// Function to multiply two integers using the divide 	long long multiply(long long x, long long y	int size_x = floor(log10(x)) + 1;

    long long multiply(long long x, long long y) {
	int sX = floor(log10(x)) + 1;
	int sY = floor(log10(y)) + 1;
	int n = fmax(sX, sY);

	if (n == 1) {
	return x * y;
	}
	
	long long a = x / pow(10, n / 2);
	long long b = x % (long long)pow(10, n / 2);
	long long c = y / pow(10, n / 2);
	long long d = y % (long long)pow(10, n / 2);
	
	long long ac = multiply(a, c);
	long long bd = multiply(b, d);
	long long abcd = multiply(a + b, c + d);
	return ac * pow(10, n) + (abcd - ac - bd) * pow(10, n / 2) + bd;
	}

	int main() {
	long long a, b;
	printf("Enter two numbers to multiply: ");
	scanf("%lld%lld", &a, &b);
	printf("Result: %lld\n", multiply(a, b));
	return 0;
	}
