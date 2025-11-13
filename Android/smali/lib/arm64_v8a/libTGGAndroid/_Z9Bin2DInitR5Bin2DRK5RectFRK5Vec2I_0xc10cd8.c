// 函数: _Z9Bin2DInitR5Bin2DRK5RectFRK5Vec2I
// 地址: 0xc10cd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0x400
int64_t* x0
int128_t v0
int128_t v1
int128_t v2
x0, v0, v1, v2 = XMalloc(0x6008)
*x0 = *(arg1 + 8)
int32_t x9 = *(arg1 + 0x10)
void* x8_1 = *arg1
*(arg1 + 8) = x0

if (x9 s>= 1)
    int64_t i = 0
    void* x9_1 = &x0[1]
    
    do
        void* x11_1 = x9_1
        *x9_1 = x8_1
        x9_1 += 0x18
        i += 1
        x8_1 = x11_1
    while (i s< sx.q(*(arg1 + 0x10)))
    
    x8_1 = x9_1 - 0x18

*arg1 = x8_1
*(arg1 + 0x28) = *arg2
*(arg1 + 0x40) = *arg3
v1.q = *arg2
v0.q = *(arg2 + 8)
v2.q = *arg3
*(arg1 + 0x38) = vdiv_f32(vsub_f32(v0, v1), vcvt_f32_s32(v2))
int32_t x21_1 = *(arg3 + 4) * *arg3
int64_t result = XPooledCalloc(x21_1 << 3)
*(arg1 + 0x18) = result
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = x21_1
int32_t x20_1 = *(arg3 + 4) * *arg3

if (x20_1 s>= 1)
    result = memset(result, 0, zx.q(x20_1) << 3)
    x20_1 += *(arg1 + 0x20)
else if ((x20_1 & 0x80000000) == 0)
    return result

*(arg1 + 0x20) = x20_1
return result
