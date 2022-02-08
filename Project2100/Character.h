#pragma once
#include "Actor.h"

class Character : public Actor
{
protected:
	i32 m_max_health = 100;
	i32 m_health = m_max_health;
	i32 m_respawn_timer = 10;
	bool m_player_respawn = false;

public:
	Character();
	Character(i32 max_health, i32 position, const char* name);
	Character(i32 max_health, i32 position, const char* name, bool player_respawn, i32 respawn_timer);

	virtual void die();
	virtual void Pick_Up_Weapon();
	virtual void spawn();

	void print() override;
};
