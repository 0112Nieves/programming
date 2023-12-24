#include <stdio.h>
int map[9][9];
int check(int x, int y)
{
    int ans = 9, num[10] = {0};
    // 3*3
    for(int i = (x/3)*3; i < (x/3)*3+3; i++){
        for(int j = (y/3)*3; j < (y/3)*3+3; j++){
            if(map[i][j] != 0 && num[map[i][j]] == 0){
                num[map[i][j]] = 1;
                ans--;
            }
        }
    }
    // row && col
    for(int i = 0; i < 9; i++){
        if(map[x][i] != 0 && num[map[x][i]] == 0){
            num[map[x][i]] = 1;
            ans--;
        }
        if(map[i][y] != 0 && num[map[i][y]] == 0){
            num[map[i][y]] = 1;
            ans--;
        }
    }
    if(ans == 1){
        for(int i = 1; i < 10; i++){
            if(num[i] == 0){
                map[x][y] = i;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int min = 1, ans = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++) scanf("%d", &map[i][j]);
    }
    while(min == 1){
        min = 10;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(map[i][j] == 0){
                    ans = check(i, j);
                    if(min > ans){
                        min = ans;
                    }
                } 
            }
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
