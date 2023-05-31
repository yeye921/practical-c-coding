#include <stdio.h>

typedef unsigned int t_rgba;  //rgba = 4byte

#define fromRGBA(r,g,b,a) (((r)&0xff)<<24)+(((g)&0xff)<<16)+(((b)&0xff)<<8)+((a)&0xff); // LSB 8비트만 남기고 나머지에 0을 쓴다
#define F_NUM_1_255 (1.0F/255.0F) // 255분의 1


t_rgba mul(t_rgba c1, t_rgba c2) // 컬러 쌍끼리 곱하는 함수
{
	float r1,g1,b1,a1;
	float r2,g2,b2,a2;
	r1 = (float) ((c1>>24) & 0xff) * F_NUM_1_255;
	g1 = (float) ((c1>>16) & 0xff) * F_NUM_1_255;
	b1 = (float) ((c1>> 8) & 0xff) * F_NUM_1_255;
	a1 = (float) ((c1>> 0) & 0xff) * F_NUM_1_255;

}

int main()
{
	int red, green, blue, alpha;
	// unsigned int rgba_1
	t_rgba rgba_1;
	// input value must be in 0~255 : 0.0~1.0
	// rgba_1 [rrrrrrrr][gggggggg][bbbbbbbb][aaaaaaaa] :32bit
	printf("Input 4 values with 0~255 ");
	scanf("%d %d %d %d", &red, &green, &blue, &alpha);
	rgba_1 = fromRGBA(red,green,blue,alpha);
	printf("%d %d %d %d : %u 0x%8x\n", red, green, blue, alpha, rgba_1, rgba_1);

}

