#include <stdio.h>
#include <string.h>

void bubbleSort(void *base, size_t n, size_t elementSize, int (*comparator)(const void *, const void *)) {
    size_t i = 0, j;
    while (i < n) {
        j = n - 1;
        while (j > i) {
            // increase readability
            void *a = base + j * elementSize;
            void *b = base + (j - 1) * elementSize;

            if (comparator(a, b) < 0) {
                // swap elements
                char temp[elementSize];
                memcpy(temp, a, elementSize);
                memcpy(a, b, elementSize);
                memcpy(b, temp, elementSize);
            }
            --j;
        }
        ++i;
    }
}

int compareInts(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int compareChars(const void *a, const void *b) {
    return *(char *) a - *(char *) b;
}

int compareLongs(const void *a, const void *b) {
    return *(long *) a - *(long *) b;
}

int main() {
    int intTest[] = {6, 3, 8, 1, 9, 2, 4, 5, 0, 7, -1};
    long longTest[] = {6, 3, 8, 1, 9123324, 2, 4, 5, 0, 7, -324532412};
    char charTest[] = {'c', 'f', 'z', 'k', 'a', 'l', 'v', 'a', 'b', 'y', 'z'};

    bubbleSort(intTest, 11, sizeof(int), compareInts);
    for (int i = 0; i < 11; i++) {
        printf("%d\n", intTest[i]);
    }

    printf("\n");
    bubbleSort(longTest, 11, sizeof(long), compareLongs);
    for (int i = 0; i < 11; i++) {
        printf("%ld\n", longTest[i]);
    }

    printf("\n");
    bubbleSort(charTest, 11, sizeof(char), compareChars);
    for (int i = 0; i < 11; i++) {
        printf("%c\n", charTest[i]);
    }

    return 0;
}
