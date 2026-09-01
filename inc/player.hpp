#pragma once
#include "entity.hpp"

namespace Tmpl8
{
	class Player : Entity
	{
	public:
		Player() = default;
		
		~Player() = default;

		float2 GetVelocity() const { return v; }
		float2 GetPosition() const { return pos; }
		
		void SetHealth(const int& healthpoints) { hp = healthpoints; }
		void SetPositon(const float2& p) { pos = p; }
		void SetVelocity(const float2& vel) { v = vel; }
		void ClamToScreen() noexcept;

	private:
		float2 v{ 0.0f,0.0f };
		float2 pos{ 0.0f,0.0f };
		int hp = 100;
	};
}
