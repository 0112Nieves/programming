#include <stdio.h>
#include <stdint.h>

int main()
{
	int32_t kase, drug, need;
	scanf("%d", &kase);
	for(int32_t i = 0 ; i < kase ; i++){
		char name[3005][20];
		int32_t times[3005], min;
		scanf("%d%d", &drug, &need);
		for(int32_t j = 0 ; j < drug ; j++){
			scanf("%s%d", name[j], &times[j]);
		}
		// find the interval
		min = times[0];
		for(int32_t j = 0 ; j < drug ; j++){
			if(times[j] < min) min = times[j];
		}
		int32_t count=0;
		while(count < need){
			for(int32_t j = min ; j < 100000000 ; j++){
				for(int32_t k = 0 ; k < drug ; k++){
					if(j % times[k] == 0 && count < need){
						printf("%d %s\n", j, name[k]);
						count++;
					}
				}
				min = j;
			}
		}
	}
	return 0;
}
