#include <precomp.h>
#include <player.hpp>

namespace Tmpl8
{
	
	
	void Player::Init(int px, int py)
	{
		pos.x = static_cast<float>(px);
		pos.y = static_cast<float>(py);
		 Sprite player_1(new Surface("assets/ctankbase.tga"), 16);
	}

	void Player::Update(float deltaTime)
	{
		Entity::Update(deltaTime);
		
	}

	void Player::Draw(Surface* target)
	{
		player_1->Draw(target, 200, 200);
	}
	

	void Player::ClamToScreen() noexcept
	{
	}
}
