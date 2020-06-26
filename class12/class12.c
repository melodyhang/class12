#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count1 = 0;
	do {
		int count2 = 0;
		count++;
		printf("count1=%d\tcount2=%d\n", count1, count2);
		count1++;
		
	} while (++count1 < 5);
	printf("count1=%d\tcount2=%d\n", count1, count2);

	//while(++count1<5) => count++;   while(count1<5);
	//while(count++<5) => while(count<5);count++;
	return 0;
}