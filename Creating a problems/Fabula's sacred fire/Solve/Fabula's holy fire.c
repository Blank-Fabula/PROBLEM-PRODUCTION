//Fabula's torch
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ALPHA 'A'
int main(int argc, char** argv) {
		int N;
		while (scanf("%d", &N) != EOF) {
			int flr; flr = 2 * N - 1;
			for (int i = 0; i < flr; i++) {
				int alpha; alpha = ALPHA + N;
				for (int j = 0; j < flr; j++) {
					printf("%c",
						j >= abs(N - 1 - i) && j < flr - abs(N - 1 - i)
						? (j < N ? --alpha : ++alpha)
						: ' ');
				} printf("\n");
			}
			for (int i = 0; i < flr; i++) {
				int alpha; alpha = ALPHA + N;
				for (int j = 0; j < flr; j++) {
					printf("%c",
						j <= abs(N - 1 - abs(N - 1 - i))
						? --alpha : (j >= flr - abs(N - 1 - abs(N - 1 - i))
							? ++alpha : alpha));
				} printf("\n");
			}
			printf("\n");
		}
		printf("END.");
return 0;}
