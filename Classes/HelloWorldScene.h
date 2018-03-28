#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
	virtual void visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags) override;

	void onDraw();



    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

private:
	CustomCommand _command;
	uint32_t vao;
	uint32_t vertexVBO;
	uint32_t colorVBO;
};

#endif // __HELLOWORLD_SCENE_H__
