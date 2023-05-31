 8   15 --> 8, 7
#include "fx_head.h"
#include "fx_s15_16.h"

//변환함수도 만들어야함
//extern fixed fxAdd_float(), fxAdd_precision(), fxAdd_fair(), fxAdd_performance(); 
//extern fixed fxSub_float(), fxSub_precision(), fxSub_fair(), fxSub_performance(); 
//extern fixed fxMul_float(), fxMul_precision(), fxMul_fair(), fxMul_performance(); 
//extern fixed fxDiv_float(), fxDiv_precision(), fxDiv_fair(), fxDiv_performance(); 

#define fxADD(a,b)  ((a)+(b))

// Add
fixed fxAdd_float(fixed a, fixed b)
{
	return fxADD(a,b);
}
fixed fxAdd_precision(fixed a, fixed b)
{
	return fxADD(a,b);
}
fixed fxAdd_fair(fixed a, fixed b)
{
	return fxADD(a,b);
}
fixed fxAdd_performance(fixed a, fixed b)
{
	return fxADD(a,b);
}

// Sub
fixed fxSub_float(fixed a, fixed b)
{
	return fxSUB(a,b);
}
fixed fxSub_precision(fixed a, fixed b)
{
	return fxSUB(a,b);
}
fixed fxSub_fair(fixed a, fixed b)
{
	return fxSUB(a,b);
}
fixed fxSub_performance(fixed a, fixed b)
{
	return fxSUB(a,b);
}

// Mul
fixed fxMul_float(fixed a, fixed b) 
{
	return fromFloat(toFloat(a) * toFloat(b)); 
}

fixed fxMul_precision(fixed a, fixed b) 
{
	long long la=a, lb=b, lc; 
	lc = la*lb; 
	lc >>= FX_Q_NUM; 
	return (fixed) lc; 
}

# 16 --> 8 , 8   15 --> 8, 7
#define FX_Q_NUM_A  (FX_Q_NUM-FX_Q_NUM/2)
#define FX_Q_NUM_B  (FX_Q_NUM/2) 

fixed fxMul_fair(fixed a, fixed b)
{
	return ((a>>4)*(b>>4))>>8; 
}

fixed fxMul_performance(fixed a, fixed b)
{
	return (a>>8)*(b>>8); 
	return (a*b)>>16; 	// 1.0 x 1.0 is overflow 
}

// Div
fixed fxDiv_float(fixed a, fixed b)
{
	return fxDIV(a,b);
}

fixed fxDiv_prefcision(fixed a, fixed b)
{
	return fxDIV(a,b);
}
fixed fxDiv_fair(fixed a, fixed b)
{
	return fxDIV(a,b);
}
fixed fxDiv_performance(fixed a, fixed b)
{
	return fxDIV(a,b);
}

