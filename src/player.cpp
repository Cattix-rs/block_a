#include <precomp.h>
#include <player.hpp>

namespace Tmpl8
{
	Sprite player_1(new Surface("assets/ctankbase.tga"), 16);
	Surface* screen;
	void Player::Init(int px, int py)
	{
		pos.x = static_cast<float>(px);
		pos.y = static_cast<float>(py);
	}

	void Player::Update(float deltaTime)
	{
		Entity::Update(deltaTime);
	player_1.Draw(screen, 50, 50);
	}

	
}
