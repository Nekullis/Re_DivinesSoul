#pragma once
#include "appframe.h"

class Camera
{
public:
	Camera();
	virtual ~Camera();
	static Camera* cameraInstance;
	void Process(short stix, short stiy);
	//ゲッター
	static Camera* GetInstance()  { return cameraInstance; }
	VECTOR GetTarget()		const { return mTarget; }
	VECTOR GetDir()			const { return mDir; }
	VECTOR GetPos()			const { return mPos; }
	//セッター
	void SetTarget(VECTOR vec) { mTarget = vec; }
protected:
	//カメラ位置
	VECTOR mPos;
	VECTOR mDir;
	//カメラ注視点
	VECTOR mTarget;
	//最短描画距離
	float mNear;
	//最長描画距離
	float mFar;
	//ばね定数
	float mSpring;
	//減衰定数
	float mDampFactor;
	//位置と速度
	VECTOR mCurrentPos;
	VECTOR mCurrentVelocity;
};

