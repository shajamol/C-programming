/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


#define MAXSIZE 5

int queue[MAX_IZE];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == MAXSIZE - 1) {
        printf("Queue is full. Cannot enqueue %d\n", data);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("%d enqueued to queue\n", data);
    }
}

int dequeue() {
    int data;
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    } else {
        data = queue[front];
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
        printf("%d dequeued from queue\n", data);
        return data;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
