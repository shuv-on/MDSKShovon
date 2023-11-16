#include<stdio.h>
#include<math.h>
int main ()
{
    int start_time,end_time,game_lasted,due_time;
    scanf("%d %d",&start_time,&end_time);
    due_time=start_time-end_time;
    game_lasted=(24-due_time);

    if (due_time<0) {
        {
            game_lasted=game_lasted-24;
        }
        printf("O JOGO DUROU %d HORA(S)\n",game_lasted);
    } else {
        printf("O JOGO DUROU %d HORA(S)\n",game_lasted);
    }
    return 0;
}
