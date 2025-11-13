// 函数: _Z15AttribTagExistsP11AttribTablej
// 地址: 0xc870d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0x10))

if (x8.d s< 1)
    return 0

int32_t* x9 = *(arg1 + 8)
int64_t x10 = 1
int32_t x11_1

do
    x11_1 = *x9
    x9 = &x9[0x1a]
    
    if (x10 s>= x8)
        break
    
    x10 += 1
while (x11_1 != arg2)

return zx.q(x11_1 == arg2 ? 1 : 0)
