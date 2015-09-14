#include "MainScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

using namespace cocostudio::timeline;


Scene* MainScene::createScene()
{
	auto scene = Scene::create();
	auto layer = MainScene::create();
	scene->addChild(layer);
	return scene;
}

bool MainScene::init()
{
	if (Layer::create() == false)
	{
		return false;
	}
	auto rootNode = CSLoader::createNode("MainScene.csb");
	addChild(rootNode);
	return true;
}