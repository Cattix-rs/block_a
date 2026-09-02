// Template, 2024 IGAD Edition
// Get the latest version from: https://github.com/jbikker/tmpl8
// IGAD/NHTV/BUAS/UU - Jacco Bikker - 2006-2024

#include "precomp.h"
#include "game.h"

#include "player.hpp"
namespace Tmpl8
{
	
	
	// -----------------------------------------------------------
	// Initialize the application
	// -----------------------------------------------------------
	void Game::Init()
	{
		
		player.Init();
	}

	// -----------------------------------------------------------
	// Main application tick function - Executed once per frame
	// -----------------------------------------------------------
	void Game::Tick(float  deltaTime)
	{
		deltaTime = min(deltaTime, 33.3333f);
		screen->Clear(0);
		player.Update(deltaTime);
		player.Draw(screen);
		
	}
}