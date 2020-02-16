#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	int sales = 0;

	while (true)
	{
		string coffee;
		int number;
		cout << "주문>>";
		cin >> coffee >> number;

		int price;
		if (coffee.compare("에스프레소") == 0)
			price = 2000 * number;
		else if (coffee.compare("아메리카노") == 0)
			price = 2300 * number;
		else if (coffee.compare("카푸치노") == 0)
			price = 2500 * number;
		else
		{
			cout << "다시 주문하세요!!\n";
			continue;
		}
		
		printf("%d원입니다. 맛있게 드세요\n", price);
		
		sales += price;
		if (sales >= 20000)
		{
			printf("오늘 %d원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n", sales);
			break;
		}
	}
	return 0;
}