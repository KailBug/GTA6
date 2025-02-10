#pragma once
#include <easy2d/easy2d.h>
#include <functional>
#include "LoadScene.h"
#include "resource.h"

using namespace easy2d;

class PlayOnline : public Text {
public:
	PlayOnline(int size) :Text("线上模式"){
		this->setAnchor(0.5, 0.5);
		this->setPosX(Window::getWidth() / 2);
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

	//Sprite* mainActor = gcnew Sprite("./res/main_actor.png");
	//Text* text2 = gcnew Text("测试");
	//LoadScene* scene2 = gcnew LoadScene();

	Function<void(ButtonEvent)> callback = [&](ButtonEvent evt) {
		if (evt == ButtonEvent::Clicked) {
			MusicPlayer::play("love_is_long_road.mp3");
			SceneManager::enter(gcnew LoadScene());
		}
	};
};