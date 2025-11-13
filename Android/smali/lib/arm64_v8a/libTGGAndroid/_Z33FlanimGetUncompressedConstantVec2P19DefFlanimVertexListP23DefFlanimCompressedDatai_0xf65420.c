// 函数: _Z33FlanimGetUncompressedConstantVec2P19DefFlanimVertexListP23DefFlanimCompressedDatai
// 地址: 0xf65420
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_4 = sx.q(*(arg2 + 8))
int64_t x8 = *arg2
int64_t x9
int128_t v0
int128_t v1

if (x9_4.d - 0xa u>= 0xa)
    int64_t x9_1 = x9_4 * 0x66666667
    uint64_t x10_2 = zx.q((x9_1 s>> 0x22).d + (x9_1 u>> 0x3f).d)
    x9 = 1
    
    while (zx.d(*(x8 + (sx.q(x10_2.d) << 3) + (x9 << 1))) s<= arg3)
        x9 += 1
        
        if (x10_2 == x9)
            void* x8_2 = x8 + (sx.q(x10_2.d) << 3)
            v0.d = *(x8_2 - 8)
            v1.d = *(x8_2 - 4)
            return 
else
    x9 = 1

void* x8_1 = x8 + (sx.q(x9.d) << 3)
v0.d = *(x8_1 - 8)
v1.d = *(x8_1 - 4)
