#include "test.h"

char    *test_usleep(int time)
{
	printf("รอบการทำงาน 1 วินาที.....\n");
	usleep(time); // 1000000 microseconds = 1 second
	return "ครบถถ้วนการทำงาน 1 วินาที\n"; 
}
