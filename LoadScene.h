#pragma once
#include <easy2d/easy2d.h>
#include "resource.h"
#include "MySprite.h"
#include "MyText.h"

using namespace easy2d;

class LoadScene :public Scene {
public:
	LoadScene() {

		auto a5 = gcnew MySprite("./res/woman.png");
		auto b5 = gcnew MyText("无论是谁来到<地下舞厅>，都想完成一笔不错的交易");
		b5->setFillColor(Color::Black);
		this->addChild(a5);
		this->addChild(b5);

		auto a4 = gcnew MySprite("./res/car.png");
		auto b4 = gcnew MyText("飞行载具<朋克汽车>现已上线，驾驶它驰骋罪恶都市吧");
		this->addChild(a4);
		this->addChild(b4);

		auto delay4 = gcnew Delay(22);
		auto opa4 = gcnew OpacityTo(2, 0);
		auto seq4 = gcnew Sequence({ delay4,opa4 });
		auto action4 = gcnew Loop(seq4);
		a4->runAction(action4);
		b4->runAction(action4->clone());

		auto a3 = gcnew MySprite("./res/sea.png");
		auto b3 = gcnew MyText("海滩冒险事件将在午夜凌晨触发，要小心<捣蛋鬼>");
		this->addChild(a3);
		this->addChild(b3);

		auto delay3 = gcnew Delay(16);
		auto opa3 = gcnew OpacityTo(2, 0);
		auto seq3 = gcnew Sequence({ delay3,opa3 });
		auto action3 = gcnew Loop(seq3);
		a3->runAction(action3);
		b3->runAction(action3->clone());

		auto a2 = gcnew MySprite("./res/man_with_glass.png");
		auto b2 = gcnew MyText("<墨镜杀手>周可成登陆迈阿密，增加更多夜间随机事件");
		this->addChild(a2);
		this->addChild(b2);

		auto delay2 = gcnew Delay(10);
		auto opa2 = gcnew OpacityTo(2, 0);
		auto seq2 = gcnew Sequence({ delay2,opa2 });
		auto action2 = gcnew Loop(seq2);
		a2->runAction(action2);
		b2->runAction(action2->clone());

		auto a1 = gcnew MySprite("./res/main_actor.png");
		auto b1 = gcnew MyText("太平洋银行差事<金蛇狂舞>已上线，更加刺激的任务");
		this->addChild(a1);
		this->addChild(b1);
		
		auto delay1 = gcnew Delay(4);
		auto opa1 = gcnew OpacityTo(2, 0);
		auto seq1 = gcnew Sequence({ delay1,opa1 });
		auto action1 = gcnew Loop(seq1);
		a1->runAction(action1);
		b1->runAction(action1->clone());
		

		auto loading = gcnew Text("正在寻找战局");
		loading->setAnchor(0.5, 0.5);
		loading->setPosX(100);
		loading->setPosY((Window::getHeight() / 12) * 11);
		loadingFont.size = 30;
		loading->setFont(loadingFont);
		this->addChild(loading);
	}
public:
	Font loadingFont = Font();
};