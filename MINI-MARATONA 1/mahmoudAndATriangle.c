//https://codeforces.com/contest/766/problem/B


#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {

    int numberOfLines;
    int lengths[100000];

    scanf("%d", &numberOfLines);

    if(numberOfLines < 3) {
        printf("NO");
        return 0;
    }

    for(int i = 0; i < numberOfLines; i++) {
        scanf("%d", &lengths[i]);
    }

    qsort(lengths, numberOfLines, sizeof(int), compare);

    for(int i = 0; i < numberOfLines - 2; i++) {
        if((lengths[i] + lengths[i + 1] > lengths[i + 2]) &&
            (lengths[i] + lengths[i + 2] >lengths[i +1]) &&
            lengths[i + 1] + lengths[i + 2] > lengths[i]) {
                printf("YES");
                return 0;
            }
    }

    printf("NO");

    return 0;
}