#include<stdio.h>

#define min(x,y)(x<y?x:y)

struct point{
    int x;
    int y;
};

int main(int argc,char** argv){
    int x=4,y=5;
    printf("%d\n",min(x,y));
    struct point o={0,0};
    struct point final = {5,6};
    
    printf("original is (%d,%d)\n",o.x,o.y);
    printf("final is (%d,%d)\n",final.x,final.y);
    
    struct point *po = &o;
    struct point *pf = &final;
    
    printf("original is (%d,%d)\n",po->x,po->y);
    printf("final is (%d,%d)\n",pf->x,pf->y);
    return 0;
}
