#include <precomp.h>
#include <player.hpp>

#include "input.hpp"

namespace Tmpl8
{
	Player::Player()
		:player_1(new Sprite(new Surface("assets/metalslug_main_torso_walk.png"), 1))
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
		
		const float speedx = 0.2f;

		if (Input::IsDown(GLFW_KEY_A))
		{
			v.x = -speedx;
		}

	}

	void Player::Draw(Surface* target)
	{
		player_1->Draw(target, 200, 200);
	}
	

	void Player::ClamToScreen() noexcept
	{
	}
}
