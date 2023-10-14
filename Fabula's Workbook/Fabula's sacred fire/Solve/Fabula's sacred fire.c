//Fabula's sacred fire;
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ALPHA 'A'

int main(int argc, char* argv[]) {

	for (int N; scanf("%d", &N) == 1; printf("\n")) {
		int length; length = 2 * N - 1;
		for (int i = 0; i < length; ++i) {
			int alpha; alpha = ALPHA + N;
			for (int j = 0; j < length; ++j) {
				printf("%c", (j >= abs(N - 1 - i) && j < length - abs(N - 1 - i))
					? (j < N ? --alpha : ++alpha) : ' ');
			} printf("\n");
		}

		for (int i = 0; i < length; ++i) {
			int alpha; alpha = ALPHA + N;
			for (int j = 0; j < length; ++j) {
				printf("%c", (j <= abs(N - 1 - abs(N - 1 - i)))
					? --alpha : (j >= length - abs(N - 1 - abs(N - 1 - i))
						? ++alpha : alpha));
			} printf("\n");
		}
	}

	printf("END.");

	return 0;
}
