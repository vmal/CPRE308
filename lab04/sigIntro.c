#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
void my_routine();
int main() {
	signal(SIGINT, my_routine);
	printf("Entering infinite loop\n");
	while (1) {
		sleep(10);
	} /* take an infinite number of naps */
	printf("Can't get here\n");
}
/* will be called asynchronously, even during a sleep */
void my_routine() {
	printf("Running my_routine\n");
}
