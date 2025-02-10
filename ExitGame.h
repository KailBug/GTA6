#pragma once
#include <easy2d/easy2d.h>
#include <functional>
#include "LoadScene.h"
#include "resource.h"

using namespace easy2d;

class ExitGame : public Text {
public:
	ExitGame(int size) :Text("Àë¿ªÓÎÏ·") {
		this->setAnchor(0.5, 0.5);
		this->setPosX((Window::getWidth() / 12) * 11);
		this->setPosY((Window::getHeight() / 12) * 11);
		playOnlineFont.size = size;
		this->setFont(playOnlineFont);

		auto lis = gcnew ButtonListener(callback);
		this->addListener(lis);
	}
	void setFamily(String family) {
		playOnlineFont.family = family;
		this->setFont(playOnlineFont);
	}
public:
	Font playOnlineFont = Font();
	float width = this->getWidth();
	float height = this->getHeight();

	Function<void(ButtonEvent)> callback = [&](ButtonEvent evt) {
		if (evt == ButtonEvent::Clicked) {
			Game::quit();
		}
		};
};