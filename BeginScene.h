#pragma once
#include <easy2d/easy2d.h>
#include "resource.h"

using namespace easy2d;

class BeginScene : public Scene {
public:
	BeginScene(){
		auto Background = gcnew Sprite("./res/gta.png");
		Background->setAnchor(0.5, 0.5);
		Background->setPosX(Window::getWidth() / 2);
		Background->setPosY(Window::getHeight() / 2);
		Background->setWidth(Window::getWidth());
		Background->setHeight(Window::getHeight());
		this->addChild(Background);

		auto GTATitle = gcnew Text("GTAVI");
		GTATitle->setAnchor(0.5, 0.5);
		GTATitle->setPosX(Window::getWidth() / 2);
		GTATitle->setPosY(Window::getHeight() / 3);
		GTATitleFont.size = 200;
		GTATitle->setFont(GTATitleFont);
		style.mode = DrawingStyle::Mode::Round;
		style.strokeWidth = 5.0;
		style.strokeColor = Color::Black;
		GTATitle->setDrawingStyle(style);
		this->addChild(GTATitle);
	}
public:
	Font GTATitleFont = Font();
	DrawingStyle style;
};