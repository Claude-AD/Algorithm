#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	int sales = 0;

	while (true)
	{
		string coffee;
		int number;
		cout << "�ֹ�>>";
		cin >> coffee >> number;

		int price;
		if (coffee.compare("����������") == 0)
			price = 2000 * number;
		else if (coffee.compare("�Ƹ޸�ī��") == 0)
			price = 2300 * number;
		else if (coffee.compare("īǪġ��") == 0)
			price = 2500 * number;
		else
		{
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}
		
		printf("%d���Դϴ�. ���ְ� �弼��\n", price);
		
		sales += price;
		if (sales >= 20000)
		{
			printf("���� %d���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~\n", sales);
			break;
		}
	}
	return 0;
}