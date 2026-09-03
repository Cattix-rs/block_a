#pragma once


namespace Tmpl8
{
	class Input
	{
	public:
		enum state { right = 0, left = 1, jump = 2, shoot = 3 };
		static int KeyIdentifier(state action);
		void Update();
	private:
		static bool PrevKeys[512];
		
	};
}
