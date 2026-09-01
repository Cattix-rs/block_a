#pragma	once

namespace Tmpl8
{
	class Entity
	{
	public:
		float2 position;
		Sprite* sprite;

		virtual void Draw(Surface* target);
		virtual void Update(float deltaTime);
	};
}