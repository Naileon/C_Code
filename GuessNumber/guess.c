#include <stdio.h>
int main()
{
	int arry[] = { 1,2,3,4,5,6,7 };
	int L = 0, R = 6; //R = ���鳤�� - 1
	int mid, target = 2;
	while (L <= R) {
		//����д�������ҵ�ʱ L�ǵ���R �ģ����Բ��ܺ���'='
			mid = (L + R) / 2;
		if (target < arry[mid])		//����
			R = mid - 1;
		else if (target > arry[mid])//����
			L = mid + 1;
		else {
			printf("�ҵ�%d�� λ����%d", arry[mid], mid);
			break;
		}
	}
	if (L > R) {
		printf("û�ҵ�");
	}
	return 0;
}