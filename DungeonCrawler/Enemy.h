#pragma once

#include "GameObject.h"
#include <vector>


class Enemy : public CombatObject
{
public:
	Enemy()
	{
		type = ENEMY;
	};

private:

};

class Skeleton : public Enemy
{
public:
	Skeleton()
	{
		commands.push_back(new AttackCommand(100));
		hp = { 2,2 };
		str = { 1,1 };
		def = { 0,0 };
		mp = { 0,0 };
		spd = { 25, 25 };
		acc = { 70, 70 };
		eva = { 15, 15 };
		name = "Skeleton";

	}
	void CombatThink()
	{
		commands.front()->ExecuteMonster(this, opponent);
	}

};