#include <stdio.h>
int map[105][105];
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &map[i][j]);
            if(map[i][j] == 2) cnt++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
        }
    }
    return 0;
}