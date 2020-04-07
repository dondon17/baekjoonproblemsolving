#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2) return -1;
    if(num1 > num2) return 1;
    else return 0;
}
int main(void){
    int n, temp;
    scanf("%d", &n);

    // 길이가 n인 정수형 배열 생성
    int* arr = (int*)malloc(sizeof(int)*n);
    // 배열 요소 입력
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    // 배열 정렬
    qsort(arr, n, sizeof(int), compare);
    // 정렬된 배열 출력
    for(int i=0; i<n; i++) printf("%d\n", arr[i]);
    // 메모리 해제
    free(arr);
    return 0;
}

// void qsort(void *base, size_t NumOfElements, size_t SizeOfElements, int compare)
// qsort(정렬할 배열, 요소 개수, 요소 사이즈, 비교함수)
// compare만 작성해주면 끝