// 函数: _Z29FlanimGetUncompressedParamIntP19DefFlanimVertexList22FlanimCompressionParami
// 地址: 0xf65368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg1 + (zx.q(arg2) << 4)
int32_t x9 = *(x8 + 0xc)

if (x9 != 4)
    if (x9 != 2)
        pthread_kill(pthread_self(), 6)
        DefFlanimVertexList* x0_4
        DefFlanimCompressedData* x1
        int32_t x2_2
        x0_4, x1, x2_2 = XNoReturn()
        return FlanimGetUncompressedConstantVec2(x0_4, x1, x2_2) __tailcall
    
    return zx.q(*(*x8 + (sx.q(arg3) << 2)))

int64_t x9_3 = sx.q(*(arg1 + (zx.q(arg2) << 4) + 8))
int64_t x8_2 = *x8
int64_t x9_4

if (x9_3.d - 6 u>= 6)
    int64_t x9_5 = x9_3 * 0x2aaaaaab
    uint64_t x10_2 = zx.q((x9_5 u>> 0x20).d + (x9_5 u>> 0x3f).d)
    x9_4 = 1
    
    while (zx.d(*(x8_2 + (sx.q(x10_2.d) << 2) + (x9_4 << 1))) s<= arg3)
        x9_4 += 1
        
        if (x10_2 == x9_4)
            return zx.q(*(x8_2 + (sx.q(x10_2.d - 1) << 2)))
else
    x9_4 = 1

return zx.q(*(x8_2 + (sx.q(x9_4.d - 1) << 2)))
