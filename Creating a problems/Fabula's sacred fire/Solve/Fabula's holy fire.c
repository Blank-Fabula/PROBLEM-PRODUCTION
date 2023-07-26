//EOF 구현 해야함.
//Fabula's torch

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ALPHA 'A'
int main(void) { int T;
int N, flr, alpha;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		flr = 2*N-1;
		for (int i = 0; i < flr; i++) { alpha = ALPHA+N;
			for (int j = 0; j < flr; j++) {
				printf("%c",
					j >= abs(N - 1 - i) && j < flr - abs(N - 1 - i)
						? (j < N ? --alpha : ++alpha)
					: ' ');
			} printf("\n");
		}
		for (int i = 0; i < flr; i++) { alpha = ALPHA+N;
			for (int j = 0; j < flr; j++) {
				printf("%c",
					j <= abs(N-1-abs(N-1-i))
						? --alpha : (j >= flr-abs(N-1-abs(N-1-i))
							? ++alpha : alpha));
			} printf("\n");
		}
		if(T) printf("\n");
	}
return 0;}
