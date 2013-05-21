#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define QUEUE_SIZE 10
#define EMPTY_QUEUE -110218

typedef struct queue{
    int *queue;
    int head;
    int tail;
} queue;

void initialize_queue(queue *q){
    q->queue = (int *)malloc(sizeof(int) * QUEUE_SIZE);
    q->head = -1;
    q->tail = -1;

}

void enqueue(queue *q, int element){
    if (q->head == 0 && q->tail == QUEUE_SIZE-1 || q->tail + 1 == q->head){
        printf("Queue full\n");
        return;
    }
        
    if (q->head == -1)
        q->head = 0;
    q->tail = (q->tail + 1) % QUEUE_SIZE;
    q->queue[q->tail] = element;
}


int dequeue(queue *q){ 
    if (q->head == -1){
        printf("Queue empty\n");
        return EMPTY_QUEUE;
    }
        
    int element = q->queue[q->head];
    if (q->head == q->tail)
        q->head = q-> tail = -1;
    else
        q->head = (q->head + 1) % QUEUE_SIZE;
    return element;
}


void print_queue(queue *q){
    int i = q->head;

    if (q->head == -1){
        printf("Queue empty\n");
        return;
    }

    printf("%d ", q->queue[i]);
    
    while(i != q->tail){
        i = (i + 1) % QUEUE_SIZE;
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

void free_queue(queue *q){
    free(q->queue);
    free(q);
}


int main(){
    queue *q;
    q = (queue *)malloc(sizeof(struct queue));
       
    initialize_queue(q);
    enqueue(q, 10);
    dequeue(q);
    dequeue(q);
    enqueue(q, 10);
    enqueue(q, 10);
    enqueue(q, 10);
    print_queue(q);
}
