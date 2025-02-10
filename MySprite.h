#pragma once
#include <easy2d/easy2d.h>
#include "resource.h"

using namespace easy2d;

class MySprite : public Sprite {
public:
	MySprite(String a):Sprite(a){
		this->setAnchor(0.5, 0.5);
		this->setPosX(Window::getWidth() / 2);
		this->setPosY(Window::getHeight() / 2);
		this->setWidth(Window::getWidth());
		this->setHeight(Window::getHeight());
	}
};