#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m); //바구니 개수n, 공을 넣는 횟수m
	int i, j, k;
	int arr[101] = {0}; //각 바구니에 들어있는 공의 갯수를 저장할 배열 초기화

	for (int a = 0; a < m; ++a) //m번 반복하여 각 공을 바구니에 넣음
	{
		scanf("%d %d %d", &i, &j, &k); //i부터 j까지의 바구니에 k번 공을 넣음
		for (int b= i; b <= j; ++b) //b라는 변수를 만들어서 i~j바구니까지 넣기
			arr[b - 1] = k; //인덱스(0부터 시작) 바구니 번호(1부터 시작) 불일치 보정
	}
	for (int a = 0; a < n; ++a)
		printf("%d ", arr[a]); //각 바구니에 들어있는 공의 최종 갯수를 출력
}
