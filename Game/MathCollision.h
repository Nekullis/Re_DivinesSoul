#pragma once
#include"dxlib.h"
#include<cmath>
class MathCollision
{
public:
	MathCollision();
	virtual ~MathCollision();
	//_Æ¼üÌÅZ£
	static float DisPointAndLine(VECTOR& v1, VECTOR& v2s, VECTOR& v2e, VECTOR& mp, float& t);
	//_ÆüªÌÅZ£
	static float DisPointAndSegment(VECTOR& v1, VECTOR& v2s, VECTOR& v2e, VECTOR& mp, float& t);
	//¼üÆ¼üÌÅZ£
	static float DisLineAndLine(VECTOR& v1s, VECTOR& v1e, VECTOR& v1m, float& t1, VECTOR& v2s, VECTOR& v2e, VECTOR& v2m, float& t2);
	//üªÆüªÌÅZ£
	static float DisSegAndSeg(VECTOR& v1s, VECTOR& v1e, VECTOR& v1m, float& t1, VECTOR& v2s, VECTOR& v2e, VECTOR& v2m, float& t2);
	//_ÆOBBÌÅZ£
	static float DisPointAndOBB(VECTOR v1p, VECTOR v2p, VECTOR v2d, float w2, float h2, float d2);
	//_Æî`Ì½è»è
	//v1:ûüxNg, v2:·ªxNg, rad;px
	static bool CollisionPointAndFan(VECTOR v1, VECTOR v2, float rad);
};

