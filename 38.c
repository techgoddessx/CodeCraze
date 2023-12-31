#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    	struct point *poly;
    // Fill in your main function here
    	int n;
	scanf("%d",&n);
	poly = (struct point *)malloc(n*(sizeof(struct point)));
	initializePoly(poly,n);
    // ALWAYS FREE the memory allocatedddd
    	free(poly);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point *polygon, int n){
	for(int i=0;i<n;i++){
		printf("(%d, %d)\n",-i,i*i);
	}
}
