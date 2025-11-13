// 函数: _Z30FlanimGetUncompressedParamVec2P19DefFlanimVertexList22FlanimCompressionParami
// 地址: 0xf6548c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg1 + (zx.q(arg2) << 4)
int32_t x9 = *(x8 + 0xc)
int128_t v0
int128_t v1

if (x9 != 3)
    if (x9 != 1)
        pthread_kill(pthread_self(), 6)
        DefFlanim* x0_1
        int32_t x1
        int32_t x2
        FlanimShapeTransform* x3
        x0_1, x1, x2, x3 = XNoReturn()
        return FlanimGetShapeTransformAtFrame(x0_1, x1, x2, x3) __tailcall
    
    int32_t* x8_2 = *x8 + (sx.q(arg3) << 3)
    v1.d = x8_2[1]
    v0.d = *x8_2
    return 

int64_t x9_4 = sx.q(*(arg1 + (zx.q(arg2) << 4) + 8))
int64_t x8_3 = *x8
uint64_t x9_5

if (x9_4.d - 0xa u>= 0xa)
    int64_t x9_6 = x9_4 * 0x66666667
    uint64_t x10_2 = zx.q((x9_6 s>> 0x22).d + (x9_6 u>> 0x3f).d)
    x9_5 = 1
    
    while (zx.d(*(x8_3 + (sx.q(x10_2.d) << 3) + (x9_5 << 1))) s<= arg3)
        x9_5 += 1
        
        if (x10_2 == x9_5)
            x9_5 = zx.q(x10_2.d)
            break
else
    x9_5 = 1

void* x9_8 = x8_3 + (sx.q(x9_5.d) << 3)
v1.d = *(x9_8 - 4)
v0.d = *(x9_8 - 8)
