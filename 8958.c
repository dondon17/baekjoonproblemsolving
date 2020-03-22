#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void){
    int n, count = 0, score = 0;
    char arr[80];

    scanf("%d", &n);
    // 테스트 케이스 개수 입력
    for(int i=0; i<n; i++){
        scanf("%s", arr);
        // ox 입력
        for(int j=0; j<strlen(arr); j++){
            //대, 소문자 모두 포함
            if(arr[j] == 'o' || arr[j] =='O') {
                // o가 연속 되는 경우 count의 값을 증가시키고 점수에 +
                count += 1;
                score += count;
            }
            if(arr[j] == 'x' || arr[j] == 'X'){
                // x가 나온 경우 count를 0으로 초기화
                count = 0;
            }
        }
        printf("%d\n", score);
        // 다음 테스트 케이스를 위해 score와 count 초기화
        score = 0;
        count = 0;   
    }
    return 0;
}
