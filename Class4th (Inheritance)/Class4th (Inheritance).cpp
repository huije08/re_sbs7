#include <iostream>
using namespace std;

class Consumable
{
private:

public:
	Consumable()
	{
		cout << "Cretated Consumable" << endl;
	}
	~Consumable()
	{
		cout << "Destoryed Consumable" << endl;
	}


};

class Potion : public Consumable
{
private:
	int stamina;
public:
	Potion()
	{
		cout << "Cretated Potion" << endl;
	}

	~Potion()
	{
		cout << "Destoryed Potion" << endl;
	}
};
int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 
	Consumable consumable;
	Potion potion;

	cout << "Consumable : " << sizeof(consumable) << endl;
#pragma endregion

	return 0;
}
