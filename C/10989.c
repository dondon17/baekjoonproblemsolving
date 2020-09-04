#include<stdio.h>
#pragma warning(disable:4996)
int count[10001]={0, };
int main(void){
    int n, num;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        count[num]++;
        // count 배열은 수를 저장하는 배열이 아닌,
        // 입력한 수에 해당하는 index의 요소를 1 증가시켜
        // 같은 수가 몇번 입력 되었는지 저장하는 배열
        // 즉, count배열의 index는 이미 정렬된 상태이므로
        // 0이 아닌 index의 수들을 해당 count만큼 출력하면 됨
    }

    for(int i=1; i<10001; i++){
        if(count[i]){
            for(int j=0; j<count[i]; j++) printf("%d\n", i);
        }
    }
    return 0;
}