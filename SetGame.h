#pragma once
#include <easy2d/easy2d.h>
#include <functional>
#include "LoadScene.h"
#include "resource.h"

using namespace easy2d;

class SetGame : public Text {
public:
	SetGame(int size) :Text("ÓÎÏ·ÉèÖÃ") {
		this->setAnchor(0.5, 0.5);
		this->setPosX((Window::getWidth() / 12) * 9.4);
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
			auto rotate = gcnew RotateBy(1, 720);
			auto action = gcnew Loop(rotate);
			this->runAction(action);
			MusicPlayer::play("./res/button.mp3");
		}
		};
};