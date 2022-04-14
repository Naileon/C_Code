#include <stdio.h>
int main()
{
	int arry[] = { 1,2,3,4,5,6,7 };
	int L = 0, R = 6; //R = 数组长度 - 1
	int mid, target = 2;
	while (L <= R) {
		//这种写法最终找到时 L是等于R 的，所以不能忽略'='
			mid = (L + R) / 2;
		if (target < arry[mid])		//找左
			R = mid - 1;
		else if (target > arry[mid])//找右
			L = mid + 1;
		else {
			printf("找到%d了 位置是%d", arry[mid], mid);
			break;
		}
	}
	if (L > R) {
		printf("没找到");
	}
	return 0;
}