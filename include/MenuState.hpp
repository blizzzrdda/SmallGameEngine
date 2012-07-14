#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP

#include <memory>
#include <SFML/Graphics.hpp>
#include "GameState.hpp"

class GameEngine;

class MenuState : public GameState
{
public:
	MenuState();
	~MenuState();

	void Pause();
	void Resume();

	void HandleEvents(GameEngine& game);
	void Update(GameEngine& game);
	void Draw(GameEngine& game);

	static std::unique_ptr<MenuState> Instance()
	{
		return std::move(std::unique_ptr<MenuState>(new MenuState));
	}

private:

	sf::Texture bgTex;
	sf::Sprite bg;
};

#endif // MENUSTATE_HPP