#include <stdio.h>
#include <math.h>

void task1(){
    int yeas;
    printf("Приглашение к вводу года:\n");
    scanf("%i",&yeas);
    float ost = yeas%4;
    if (((ost == 0) && (yeas%100!=0)) || (yeas%400==0)){
        printf("Год %i високосный\n",yeas);
    }else{
        printf("Год %i не високосный\n",yeas);
    }
}

void task2(){
    //x*x+4*x+5
    //1/(x*x+4*x+5)
    float x;
    scanf("%f",&x);
    if (x<=2){
        printf("%0.2f",x*x+4*x+5);
    }else{
        printf("%0.2f",1/(x*x+4*x+5));
    }
    
}

int task3d(int x,int y) {
    if (((0<=x && x<=6) && (0<=y && y<=6) && (x+y<=6)) || ((0>=x && x>=-6) && (0>=y && y>=-6) && (0>=x+y && x+y>=-6))){
        return 1;
    }else{
        return 0;
    }
}

void sxema(int x1,int y1){
    int x, y, ROW, COL;
    ROW = 7;
    COL = -7;
    printf("\n");
    for (x = -7; x <= ROW; ++x)
    {
        for (y = 7; y >= COL; y--)
//            printf("%5s", "x");
            if (task3d(x,y)==1){
                if (x==-x1 && y==-y1){
                    printf("%2s", "o");
                }else{
                printf("%2s", "+");
                }
            }else{
                printf("%2s", " ");
                }
        printf("\n");
    }
}



int main(int argc, const char * argv[]) {
    float x,y;
    printf("Введите x:\n");
    scanf("%f",&x);
    printf("Введите y:\n");
    scanf("%f",&y);
    sxema(x,y);
    if (task3d(x,y)){
        printf("%0.2f и %0.2f - принадлежат\n",x,y);
    }else{
        printf("%0.2f и %0.2f - не принадлежат\n",x,y);
    }
    
}
