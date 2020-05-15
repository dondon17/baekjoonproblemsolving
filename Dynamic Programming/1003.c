#include<stdio.h>
#include<stdlib.h>

int count_0[100] = {1, 0};
int count_1[100]= {0, 1};

int main(void){
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        if(n<2) printf("%d %d\n", count_0[n], count_1[n]);
        else{
            for(int j=2; j<=n; j++){
                count_0[j] = count_0[j-2]+count_0[j-1];
                count_1[j] = count_1[j-2]+count_1[j-1];
            }
            printf("%d %d\n", count_0[n], count_1[n]);
        }
    }
    return 0;
}

/*
fibo(0)������ 0�� ȣ��ǰ� fibo(1)������ 1�� ȣ��ȴ�.
fibo(0)�� fibo(1)�� ȣ��� Ƚ���� ���� count_0, count_1 �迭�� �����Ѵ�.
fibo(2)���� ȣ��Ǵ� fibo(0), fibo(1)�� Ƚ���� fibo(0), fibo(1)������ ȣ��� 0�� 1�� Ƚ���� �հ� ����
�� fibo(n)���� ȣ��� 0�� 1�� Ƚ���� fibo(n-1)������ 0,1 ȣ��Ƚ���� fibo(n-2)������ 0,1 ȣ��Ƚ���� �հ� ����.

���� �ڵ忡�� �Է°��� 2�̸��� ��� ����Ǿ� �ִ� ���� ����ϰ�
2 �̻��� ��� ���ο� ���� ���� �� �迭�� �����ϵ��� �Ͽ���.
*/