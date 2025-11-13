// 函数: sub_1000f9c
// 地址: 0x1000f9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x1 = sx.d(*(arg1 + (zx.q(arg2) << 2) + 0x834))
int64_t* x21 = arg1 + 0x8838

if ((x1 & 0x80000000) == 0)
    sub_1000f9c(arg1, x1)

int64_t x9 = sx.q(x21[5].d)

if (x9.d s>= x21[4].d)
    return 

int64_t x10_2 = sx.q(*(x21 + 0x24)) + x9
int32_t x9_2

if (x10_2.d s< 0)
    x9_2 = x10_2.d + 3
else
    x9_2 = x10_2.d

void* x8_2 = *(arg1 + 8)
*(*(arg1 + 0x18) + sx.q(x9_2 s>> 2)) = 1
char* x9_5 = *x21 + (zx.q(*(arg1 + (zx.q(arg2) << 2) + 0x837)) << 2)

if (zx.d(x9_5[3]) u>= 0x81)
    char* x8_3 = x8_2 + x10_2
    *x8_3 = x9_5[2]
    x8_3[1] = x9_5[1]
    x8_3[2] = *x9_5
    x8_3[3] = x9_5[3]

int32_t x8_5 = *(x21 + 0x24) + 4
bool cond:0_1 = x8_5 s< *(x21 + 0x1c)
*(x21 + 0x24) = x8_5

if (cond:0_1)
    return 

int32_t x8_6 = x21[4].d
int32_t x9_9 = x21[5].d + *(x21 + 0xc)
*(x21 + 0x24) = *(x21 + 0x14)
x21[5].d = x9_9

if (x9_9 s< x8_6)
    return 

int32_t i = x21[1].d

while (i s>= 1)
    int32_t x9_10 = *(x21 + 0x2c) << i
    int32_t x11_7 = x21[3].d + (x9_10 s>> 1)
    x21[1].d = i - 1
    *(x21 + 0xc) = x9_10
    i -= 1
    x21[5].d = x11_7
    
    if (x11_7 s< x8_6)
        break
