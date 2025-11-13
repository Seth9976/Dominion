// 函数: _Z12FlanimCreateP6XAsset
// 地址: 0xf636ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(*gpGameData + 0x18)
uint64_t x22 = zx.q(x8_1[2].d)
int32_t x9_1
int64_t x23

if (x22.d != x8_1[1].d)
    x23 = *x8_1
    x9_1 = *(x23 + x22 * 0xa8 + 0xa0)
else
    x23 = *x8_1
    x9_1 = x22.d + 1
    x8_1[1].d = x9_1

x8_1[2].d = x9_1
XAsset** result = x23 + x22 * 0xa8
int128_t v0
v0.q = 0
v0:8.q = 0
__builtin_memset(&result[0x10], 0, 0x20)
__builtin_memset(result, 0, 0x70)
*(result + 0x70) = zx.o(0)
result[0x14].d = x22.d | x8_1[3].d << 0x10
int32_t x9_5 = x8_1[3].d
int32_t x9_6

if (x9_5 == 0xffff)
    x9_6 = 1
else
    x9_6 = x9_5 + 1

*(x8_1 + 0x14) += 1
x8_1[3].d = x9_6
*result = arg1
v0 = *(M4I + 0x20)
int128_t v2 = *M4I
int128_t v3 = *(M4I + 0x10)
*(result + 0x54) = *(M4I + 0x30)
*(result + 0x44) = v0
*(result + 0x34) = v3
*(result + 0x24) = v2
uint64_t x8_2 = *gSpriteWhite
*(result + 0x84) = 0xffffffff
*(result + 0x64) = x8_2
void* x8_3 = result[0xe]

if (x8_3 != 0)
    XPooledFree(x8_3, *(x23 + x22 * 0xa8 + 0x78) * 0x70)
    result[0xe] = 0
    arg1 = *result

void* x0_1 = FlanimGetDef(arg1)
int32_t x8_4 = *(x0_1 + 0x28)
*(x23 + x22 * 0xa8 + 0x78) = x8_4

if (*(x0_1 + 0x28) s>= 1)
    void* x0_3 = XPooledCalloc(x8_4 * 0x70)
    result[0xe] = x0_3
    
    if (*(x0_1 + 0x28) s>= 1)
        *(x0_3 + 0x64) = *gRgbaIWhite
        
        if (*(x0_1 + 0x28) s>= 2)
            int64_t i = 1
            int64_t x10_2 = 0xd4
            
            do
                i += 1
                *(result[0xe] + x10_2) = *gRgbaIWhite
                x10_2 += 0x70
            while (i s< sx.q(*(x0_1 + 0x28)))

return result
