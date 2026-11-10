//202610305133
//尹忠泉
#include <stdio.h>
struct Player {
    char name[16];
    int score;
};
void sort_players(struct Player arr[] , int n) {
    for (int i=0; i< n-1; i++) {
        for (int j=0; j< n-i-1; j++) {
            if (arr[j].score < arr[j+1].score) {
                struct Player temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

    }
}

    
}

int main(void) {
    // 输入人数
    int n;
    scanf("%d", &n);

    // 输入玩家信息
    struct Player players[n];
    for (int i = 0; i < n; i++) {
    scanf("%s %d", players[i].name, &players[i].score);
    }

    sort_players(players, n);
    for (int j = 0; j < n; j++) {
        printf("%d %s %d\n", j + 1, players[j].name, players[j].score);
    }
    return 0;
}