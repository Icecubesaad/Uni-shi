#include <iostream>
using namespace std;
class Creature {
protected:
	char* CreatureName;
public:
	Creature(char CreatureName[100]);
	virtual void DoAction(char Action[100])=0;
	virtual void DrawOnScreen() = 0;
};
class Player :public Creature {
	char* Action;
public:
	Player(char CreatureName[100]);
	void DoAction(char Action[100]) override;
	void DrawOnScreen() override;
};
class Monster:public Creature {
protected:
	char* CreatureName;
	char* Action;
public:
	Monster(char CreatureName[100]);
	void DoAction(char Action[100]) override;
	virtual void DrawOnScreen() override;
};
class WildPig:public Monster {
	char* Action;
public:
	WildPig(char CreatureName[100]);
	void DoAction(char Action[100]);
	void DrawOnScreen() override;
};
class Dragon:public Monster {
	char* Action;
public:
	Dragon(char CreatureName[100]);
	void DoAction(char Action[100]);
	void DrawOnScreen() override;
};
Creature::Creature(char CreatureName[100])
{
	this->CreatureName = CreatureName;
}

Player::Player(char CreatureName[100]):Creature(CreatureName)
{
	this->Action = nullptr;
}

void Player::DoAction(char Action[100])
{
	this->Action = Action;
}

void Player::DrawOnScreen()
{
	cout << "Player <" << Creature::CreatureName << "> is " << this->Action << "!!\n";
}

Monster::Monster(char CreatureName[100]):Creature(CreatureName)
{
	this->Action = nullptr;
	this->CreatureName = CreatureName;
}

void Monster::DoAction(char Action[100])
{
	this->Action = Action;
}
void Monster::DrawOnScreen()
{
	cout << "Monster <" << Creature::CreatureName << "> is " << this->Action << "!!\n";
}

WildPig::WildPig(char CreatureName[100]):Monster(CreatureName)
{
	this->Action = nullptr;
}

void WildPig::DoAction(char Action[100])
{
	this->Action = Action;
}

void WildPig::DrawOnScreen()
{
	cout << "WildPig <" << Monster::CreatureName << "> is " << this->Action << " !!" << endl;
}

Dragon::Dragon(char CreatureName[100]):Monster(CreatureName)
{
	this->Action = nullptr;
}

void Dragon::DoAction(char Action[100])
{
	this->Action = Action;
}

void Dragon::DrawOnScreen()
{
	cout << "Dragon <" << Monster::CreatureName << "> is " << this->Action<<" !!" << endl;
}
int main()
{
	char hero[] = "Kick_Ass", mon[] = "UFO", pig[] = "I'm_hungry", d1[] = "I'm the Boss";
	char action1[] = "is attacking", action2[] = "doing monster stuff", action3[] = "is running", action4[] = "breathing Fire";
	Player hero1(hero);
	Monster mon1(mon);
	WildPig pig1(pig);
	Dragon d11(d1);
	Creature* creatures[4];
	creatures[0] = &hero1;
	creatures[1] = &mon1;
	creatures[2] = &pig1;
	creatures[3] = &d11;
	creatures[0]->DoAction(action1);
	creatures[1]->DoAction(action2);
	creatures[2]->DoAction(action3);
	creatures[3]->DoAction(action4);
	for (int i = 0; i < 4; i++)
	{
		creatures[i]->DrawOnScreen();
	}

}