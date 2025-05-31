#ifndef QUEUE_H
#define QUEUE_H

#define SIZE 26  // A-Z

typedef struct {
    char items[SIZE];
    int front;
    int rear;
} CircularQueue;

void createQueue(CircularQueue *q);
void rotateQueue(CircularQueue *q, int shift);
char getShiftedChar(CircularQueue *q, char ch, int shift);
char getOriginalChar(CircularQueue *q, char ch, int shift);

#endif
