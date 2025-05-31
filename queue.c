#include "queue.h"
#include <ctype.h>

// Initialize the circular queue with A to Z
void createQueue(CircularQueue *q) {
    q->front = 0;
    q->rear = SIZE - 1;
    for (int i = 0; i < SIZE; i++) {
        q->items[i] = 'A' + i;
    }
}

// Rotate the queue by shift steps (not used directly but helpful conceptually)
void rotateQueue(CircularQueue *q, int shift) {
    q->front = (q->front + shift + SIZE) % SIZE;
}

// Encrypt: shift character forward
char getShiftedChar(CircularQueue *q, char ch, int shift) {
    if (!isalpha(ch)) return ch;

    char base = isupper(ch) ? 'A' : 'a';
    int index = (ch - base + shift + SIZE) % SIZE;
    return base + index;
}

// Decrypt: shift character backward
char getOriginalChar(CircularQueue *q, char ch, int shift) {
    return getShiftedChar(q, ch, -shift);
}
