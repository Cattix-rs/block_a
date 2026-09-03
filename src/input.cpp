#include <precomp.h>
#include <input.hpp>
#include <iostream>
extern bool IsKeyDown(unsigned int key);
namespace Tmpl8
{
	int Input::KeyIdentifier(state action)
	{
		switch (action)
		{
		case state::right:
		{
			return GLFW_KEY_D;
		}
		case state::left:
			{
			return GLFW_KEY_A;
			}
		case state::jump:
			{
			return GLFW_KEY_SPACE;
			}
		case state::shoot:
			{
			cout << "shoot is being pressed" << endl;
			return GLFW_KEY_F;
			}
			
		}
	}

	void Input::Update()
	{
	}
}
