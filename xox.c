#include<stdio.h>
char a[3][3],sym;
int i,j,flag=1,pos;
void display()
{
    for(i=0;i<3;i++)
    {   printf("--------\n|");
        for(j=0;j<3;j++)
        {
            printf("%c|",a[i][j]);
        }
        printf("\n");
    }
}
void main()
{   int b[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {   printf("--------\n|");
        for(j=0;j<3;j++)
        {
            printf("%d|",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        a[i][j]=' ';
    }

    printf("Player 1 symbol is X\nPlayer 2 symbol is O\n Player 1 and Player 2 must take chances alternately");
    do
    {
        printf("\nEnter position to insert:");
        scanf("%d",&pos);
        if(pos==1){
        i=0;j=0;
}
if(pos==2){
        i=0;j=1;
}
if(pos==3){
        i=0;j=2;
}
if(pos==4){
        i=1;j=0;
}
if(pos==5){
        i=1;j=1;
}
if(pos==6){
        i=1;j=2;
}
if(pos==7){
        i=2;j=0;
}
if(pos==8){
        i=2;j=1;
}
if(pos==9){
        i=2;j=2;
}

        printf("\nPlayer 1 press X or Player 2 press O:\n ");scanf("%s",&sym);
        a[i][j]=sym;
        display();
        if((a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'))
             printf("PLAYER 1 is winner\n press 0");
        else if((a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')||(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O')||(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')||(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')||(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')||(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')||(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'))
             printf("PLAYER 2 is winner\n press 0");
        printf("\n");
         for(i=0;i<3;i++)
    {   printf("--------\n|");
        for(j=0;j<3;j++)
        {
            printf("%d|",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }
    while (pos<=9);
}
