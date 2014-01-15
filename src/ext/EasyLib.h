#ifndef __EASY_LIB_H__
#define __EASY_LIB_H__

class EasyLib
{
public:

	enum EMethod
	{
		LINEAR, 

		IN_QUAD,
		OUT_QUAD,
		IN_OUT_QUAD,
		OUT_IN_QUAD,
		IN_CUBIC,
		OUT_CUBIC,
		IN_OUT_CUBIC,
		OUT_IN_CUBIC,
		IN_QUART,
		OUT_QUART,
		IN_OUT_QUART,
		OUT_IN_QUART,
		IN_QUINT,
		OUT_QUINT,
		IN_OUT_QUINT,
		OUT_IN_QUINT,
		/*
		IN_SINE,
		OUT_SINE,
		IN_OUT_SINE,
		OUT_IN_SINE,
		*/
		IN_EXPO,
		OUT_EXPO,
		IN_OUT_EXPO,
		OUT_IN_EXPO,
		IN_CIRC,
		OUT_CIRC,
		IN_OUT_CIRC,
		OUT_IN_CIRC,
		/*
		IN_ELASTIC,
		OUT_ELASTIC,
		IN_OUT_ELASTIC,
		OUT_IN_ELASTIC,
		*/
		IN_BACK,
		OUT_BACK,
		IN_OUT_BACK,
		OUT_IN_BACK,
		IN_BOUNCE,
		OUT_BOUNCE,
		IN_OUT_BOUNCE,
		OUT_IN_BOUNCE
	};

	static float Linear(float t, float b, float c, float d);

	static float InQuad(float t, float b, float c, float d);
	static float OutQuad(float t, float b, float c, float d);
	static float InOutQuad(float t, float b, float c, float d);
	static float OutInQuad(float t, float b, float c, float d);
	static float InCubic(float t, float b, float c, float d);
	static float OutCubic(float t, float b, float c, float d);
	static float InOutCubic(float t, float b, float c, float d);
	static float OutInCubic(float t, float b, float c, float d);
	static float InQuart(float t, float b, float c, float d);
	static float OutQuart(float t, float b, float c, float d);
	static float InOutQuart(float t, float b, float c, float d);
	static float OutInQuart(float t, float b, float c, float d);
	static float InQuint(float t, float b, float c, float d);
	static float OutQuint(float t, float b, float c, float d);
	static float InOutQuint(float t, float b, float c, float d);
	static float OutInQuint(float t, float b, float c, float d);
	/*
	static float InSine(float t, float b, float c, float d);
	static float OutSine(float t, float b, float c, float d);
	static float InOutSine(float t, float b, float c, float d);
	static float OutInSine(float t, float b, float c, float d);
	*/
	static float InExpo(float t, float b, float c, float d);
	static float OutExpo(float t, float b, float c, float d);
	static float InOutExpo(float t, float b, float c, float d);
	static float OutInExpo(float t, float b, float c, float d);
	static float InCirc(float t, float b, float c, float d);
	static float OutCirc(float t, float b, float c, float d);
	static float InOutCirc(float t, float b, float c, float d);
	static float OutInCirc(float t, float b, float c, float d);
	/*
	static float InElastic(t, b, c, d, a, p);
	static float OutElastic(t, b, c, d, a, p);
	static float InOutElastic(t, b, c, d, a, p);
	static float OutInElastic(t, b, c, d, a, p);
	*/
	static float InBack(float t, float b, float c, float d, float s = 1.70158f);
	static float OutBack(float t, float b, float c, float d, float s = 1.70158f);
	static float InOutBack(float t, float b, float c, float d, float s = 1.70158f);
	static float OutInBack(float t, float b, float c, float d, float s = 1.70158f);
	static float InBounce(float t, float b, float c, float d);
	static float OutBounce(float t, float b, float c, float d);
	static float InOutBounce(float t, float b, float c, float d);
	static float OutInBounce(float t, float b, float c, float d);

	enum EDirType
	{
		NOTHING,
		FORWARD,
		BACK
	};

	static float Run(EDirType, EMethod, float t, float b, float c, float d, float s = 1.70158f);
	static EMethod ReverseMethod(EMethod);
};

#endif // __EASY_LIB_H__