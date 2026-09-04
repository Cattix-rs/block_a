#include <precomp.h>
#include <input.hpp>


namespace Tmpl8
{
	bool Input::IsDown(int key)
	{
		return CurrentKeys[key];
	}

	bool Input::IsPressed(int key)
	{
		return CurrentKeys[key] && PrevKeys[key] == false;
	}

	void Input::KeyDown(int key)
	{
		CurrentKeys[key] = true;
	}

	void Input::KeyUp(int key)
	{
		CurrentKeys[key] = false;
	}

	
	void Input::Update()
	{
		for (int i = 0; i < totalkeys; i++)
		{
			PrevKeys[i] = CurrentKeys[i];
		}
	}
}
