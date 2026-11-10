//202610305133
//尹忠泉
#include <stdio.h>
struct Window {
    int buffer[3];
    int count;
};
int get_average(struct Window win) {
    int average;
    int sum = 0;
    if (win.count < 3) {
        
        for (int i = 0; i < win.count; i++) {
        sum += win.buffer[i];
        }
        average = sum / win.count;
        
    } else {
        
        for (int i = 0; i < 3; i++) {
        sum += win.buffer[i];
        }
        average = sum / 3;
    }
    return average;
}
struct Window push_data(struct Window win, int val) {
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}


int main(void) {
    struct Window win = { .buffer = {0}, .count = 0 };
    int val;
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &val);
        win = push_data(win, val);
        int average = get_average(win);
        printf("%d\t", average);
    }

    return 0;
}