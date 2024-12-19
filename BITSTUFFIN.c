#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int a[20], b[30], stuffed[30], destuffed[30];
    int i, j, k, count, n, stuffedLength, destuffedLength;

    printf("Enter frame length: ");
    scanf("%d", &n);

    printf("Enter input frame (0's & 1's only): ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Bit stuffing
    i = 0; 
    count = 1; 
    j = 0;

    while(i < n) {
        if(a[i] == 1) {
            b[j] = a[i];
            for(k = i + 1; a[k] == 1 && k < n && count < 5; k++) {
                j++;
                b[j] = a[k];
                count++;
                if(count == 5) {
                    j++;
                    b[j] = 0;  // Insert a 0 after five consecutive 1's
                }
                i = k;
            }
        } else {
            b[j] = a[i];
        }
        i++;
        j++;
    }

    stuffedLength = j;

    printf("After stuffing the frame is: ");
    for(i = 0; i < stuffedLength; i++) {
        printf("%d", b[i]);
        stuffed[i] = b[i];  // Copy stuffed frame for destuffing
    }
    printf("\n");

    // Bit destuffing
    i = 0;
    j = 0;
    count = 0;

    while(i < stuffedLength) {
        if(stuffed[i] == 1) {
            destuffed[j] = stuffed[i];
            j++;
            count++;
            if(count == 5) {
                // Skip the next zero (stuffed bit)
                if(stuffed[i + 1] == 0) {
                    i++;
                }
                count = 0;
            }
        } else {
            destuffed[j] = stuffed[i];
            j++;
            count = 0;
        }
        i++;
    }

    destuffedLength = j;

    printf("After destuffing the frame is: ");
    for(i = 0; i < destuffedLength; i++) {
        printf("%d", destuffed[i]);
    }
    printf("\n");

    getch();
}
