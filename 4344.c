#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void){
    int c, n, sum = 0, count = 0;
    scanf("%d", &c); // testcase 입력

    for(int i=0; i<c; i++){
        scanf("%d", &n); // 점수의 개수 입력
        int *arr = (int*)malloc(sizeof(int)*n); // 점수를 저장할 배열 생성
        // 점수 입력 받고 총점 계산
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        // 평균을 넘는 점수 count
        for(int k=0; k<n; k++){
            if(arr[k] > (double)sum/n) count++;
        }
        // 평균을 넘는 점수의 비율 출력
        printf("%.3lf%%\n", (double)count/n*100);
        // 다음 테스트 케이스를 위해 count와 sum 초기화
        sum = 0;
        count = 0; 
        // malloc으로 할당한 메모리 해제
        free(arr);
    }
    return 0;
}