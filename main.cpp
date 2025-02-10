#include <Windows.h>
#include <easy2d/easy2d.h>
#include "resource.h"
#include "BeginScene.h"
#include "PlayOnline.h"
#include "ExitGame.h"
#include "Story.h"
#include "SetGame.h"
#include "LoadScene.h"
using namespace easy2d;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
	if (Game::init("GTA6", 1600, 900)) {
		Path::add("res");

		Renderer::showFps(true);

		auto scene1 = gcnew BeginScene();
		auto play = gcnew PlayOnline(40);
		scene1->addChild(play);
		auto exitGame = gcnew ExitGame(40);
		scene1->addChild(exitGame);
		auto story = gcnew Story(40);
		scene1->addChild(story);
		auto set = gcnew SetGame(40);
		scene1->addChild(set);
		SceneManager::enter(scene1);

		Timer::add([]() {Window::info("听完这首歌梦就醒了"); },36);

		Game::start();
	}
	Game::destroy();
	return 0;
}