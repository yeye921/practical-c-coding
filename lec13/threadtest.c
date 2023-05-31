#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int bbb = 0; 

void fn_s()
{
	char bufff[10];
	static int a = 0; 
    	printf("== %d %d ==\n",a++, bbb++);
}


void *run (void *arg)
{
    printf("Hello world of POSXI threads.%d\n", (int) (0));
	for (int i = 0; i < 10; i++)
	{
		sleep(1); 
		fn_s(); 
	}
    return 0;

}

int main()
{
	//pthread_t thread1;
	//pthread_t thread2;
	//pthread_t thread3;
	int result1;
	setvbuf(stdout,bufff, _IONBF,10);
	run((void *) 0);
	sleep(10);

	run((void *)0);
	//int result2;
	//pthread_create(&thread1, NULL, run, NULL );
	//pthread_create(&thread2, NULL, run, NULL );
	//pthread_create(&thread3, NULL, run, NULL );
	//pthread_join(thread1, (void **) &result1);
	//pthread_join(thread2, &result2);
	printf("Thread return %d at the end\n",result1);
	//printf("Thread return %d at the end\n", result2);
}

