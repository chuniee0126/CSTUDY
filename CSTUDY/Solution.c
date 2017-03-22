#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void Swap(Point * pnt1, Point * pnt2) {
	
	Point temp = *pnt1;
	
	*pnt1 = *pnt2;
	*pnt2 = temp;

}

int main(void)
{	
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	
	printf("%d, %d /// %d, %d\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

	Swap(&pos1, &pos2);

	printf("%d, %d /// %d, %d\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

	return 0;	
}
