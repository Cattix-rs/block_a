#pragma once


namespace Tmpl8
{
	class Input
	{
	public:
		
		bool IsDown(int key);
		bool IsPressed(int key);
		void KeyDown(int key);
		void KeyUp(int key);
		void Update();
	private:
		static const int totalkeys = 512;
		 bool PrevKeys[totalkeys];
		 bool CurrentKeys[totalkeys];
		 
	};
}
