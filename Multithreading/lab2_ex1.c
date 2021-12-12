//pthread_create, pthread_join, pthread_exit and pthread_mutex
#include<stdio.h>
#include<pthread.h>

int num = 0;
pthread_mutex_t lock;
void square()
{
 while(1)
 {
 	pthread_mutex_lock(&lock);
    printf("Thread 1 - %d\n",num);
    num++;
    pthread_mutex_unlock(&lock);
    sleep(3);
 }
}
void inc()
{
 while(1)
 {
 	sleep(1);
	pthread_mutex_lock(&lock);
	printf("Thread 2 - %d\n",num);
	num++;
	pthread_mutex_unlock(&lock);
	sleep(2);
 }
}

void main()
{
 pthread_t t1,t2;
 pthread_mutex_init(&lock, NULL);
 pthread_create(&t1,NULL,square,NULL);
 pthread_create(&t2,NULL,inc,NULL);
 pthread_join(t1,NULL);
 pthread_join(t2,NULL);

}
