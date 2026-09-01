#pragma once
#include "precomp.h"

namespace Tmpl8
{
	class physics
	{
		physics() = default;

		~physics() = default;

		void Applyg(float2& v, float deltaTime) const;

		float2 IntergatePosition(float deltaTime);

	};
}
