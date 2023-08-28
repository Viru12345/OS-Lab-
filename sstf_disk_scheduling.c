#include <stdio.h>
#include <stdlib.h>

int main() {
    int RQ[100], i, n, TotalHeadMovement = 0, initial, count = 0;
    printf("Enter the number of Requests\n");
    scanf("%d", &n);
    printf("Enter the Requests sequence\n");
    for (i = 0; i < n; i++)
        scanf("%d", &RQ[i]);
    printf("Enter initial head position\n");
    scanf("%d", &initial);

    // Logic for SSTF disk scheduling

    int headSequence[100]; // Array to store the sequence of head movements
    int sequenceIndex = 0;

    /* Loop will execute until all processes are completed */
    while (count != n) {
        int min = 1000, d, index;
        for (i = 0; i < n; i++) {
            d = abs(RQ[i] - initial);
            if (min > d) {
                min = d;
                index = i;
            }
        }
        TotalHeadMovement = TotalHeadMovement + min;
        headSequence[sequenceIndex++] = initial; // Store head movement in the sequence
        initial = RQ[index];
        RQ[index] = 1000;
        count++;
    }

    // Print the head movement sequence
    printf("Head Movement Sequence:\n");
    for (i = 0; i < sequenceIndex; i++) {
        printf("%d -> ", headSequence[i]);
    }
    printf("%d\n", initial); // Print the last position of the head

    printf("Total head movement is %d\n", TotalHeadMovement);
    return 0;
}
