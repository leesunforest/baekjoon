#include <stdio.h>

int main()
{
    int n, m;
    int i, j, temp, a, b;
    int arr[101];

    scanf("%d %d", &n, &m); //바구니 개수n, 바구니 위치 바꾸는 횟수m

    for (a = 1; a <= n; ++a)
    {
        arr[a] = a; //각 바구니에는 바구니 번호랑 맞는 번호가 들어감.
    }
    for (a = 0; a < m; ++a) //m번 위치교환
    {
        scanf("%d %d", &i, &j); //위치를 바꿀 두 바구니의 번호

        //swap을 이용해 임시변수 temp에 담아서 두 바구니 위치 교환
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    //최종적으로 바구니에 담긴 번호 출력
    for (a = 1; a <= n; ++a)
    {
        printf("%d ", arr[a]);
    }
}
