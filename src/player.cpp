#include <precomp.h>
#include <player.hpp>

namespace Tmpl8
{
	Player::Player()
		:player_1(new Sprite(new Surface("assets/ctankbase.tga"), 16))
	{
		
	}

	void Player::Init(int px, int py)
	{
		pos.x = static_cast<float>(px);
		pos.y = static_cast<float>(py);

		 width = static_cast<float>(player_1->GetWidth());
		 height = static_cast<float>(player_1->GetHeight());
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
