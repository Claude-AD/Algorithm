#include <iostream>
#include <string>
using namespace std;

int main()
{
	string romio, juliet;

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n";
	cout << "�ι̿�>>";
	cin >> romio;
	cout << "�ٸ���>>";
	cin >> juliet;

	if ((romio == "����" && juliet == "��") || (romio == "����" && juliet == "����") || (romio == "��" && juliet == "����"))
	{
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if ((juliet == "����" && romio == "��") || (juliet == "����" && romio == "����") || (juliet == "��" && romio == "����"))
	{
		cout << "�ٸ����� �̰���ϴ�." << endl;
	}
	else
	{
		cout << "�����ϴ�." << endl;
	}
	return 0;
}