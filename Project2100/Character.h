#pragma once
#include "Actor.h"

class Character : public Actor
{
protected: 
	i32 m_health = 100;
	i32 m_respawn_timer = 10;
	bool m_player_respawn = false;


public: 
	Character();
	Character(i32 health, i32 position, char* name, bool player_respawn, i32 respawn_timer);

	virtual i32 Player_Dead();;
	virtual i32 Player_Respawn();
	


};
