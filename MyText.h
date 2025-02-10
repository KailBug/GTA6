#pragma once
#include <easy2d/easy2d.h>
#include "resource.h"

using namespace easy2d;

class MyText : public Text {
public:
	MyText(String a) : Text(a){
		
		this->setAnchor(0.5, 0.5);
		this->setPosX(1200);
		this->setPosY((Window::getHeight() / 12) * 11);
		loadingFont.size = 30;
		this->setFont(loadingFont);
	}
public:
	Font loadingFont = Font();
};