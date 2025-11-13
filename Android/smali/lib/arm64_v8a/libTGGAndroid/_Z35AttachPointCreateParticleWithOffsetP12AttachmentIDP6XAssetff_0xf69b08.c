// 函数: _Z35AttachPointCreateParticleWithOffsetP12AttachmentIDP6XAssetff
// 地址: 0xf69b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x13 = *arg1
int64_t* x9 = *(*gpGameData + 0x28)
AttachmentID* x8_1 = arg1
uint64_t x10 = zx.q(x9[1].d)

if (x13 != 0)
    uint64_t x12_1 = zx.q(x13.w)
    
    if (x12_1.d u< x10.d)
        int64_t x11_1 = *x9
        
        if (*(x11_1 + x12_1 * 0x34 + 0x30) == x13)
            int32_t i
            
            do
                x8_1 = x11_1 + x12_1 * 0x34 + 0xc
                i = *x8_1
                
                if (i == 0)
                    break
                
                x12_1 = zx.q(i.w)
                
                if (x12_1.d u>= x10.d)
                    break
            while (*(x11_1 + x12_1 * 0x34 + 0x30) == i)

uint64_t x11_2 = zx.q(x9[2].d)
int64_t x12_2
int32_t x13_1

if (x11_2.d != x10.d)
    x12_2 = *x9
    x13_1 = *(x12_2 + x11_2 * 0x34 + 0x30)
    x10 = x11_2
else
    x12_2 = *x9
    x13_1 = x10.d + 1
    x9[1].d = x13_1

x9[2].d = x13_1
int128_t* result = x12_2 + x10 * 0x34
int128_t v2
v2.q = 0
v2:8.q = 0
result[2] = zx.o(0)
*result = zx.o(0)
result[1] = zx.o(0)
result[3].d = x11_2.d | x9[3].d << 0x10
int32_t x10_4 = x9[3].d
int32_t x10_5

if (x10_4 == 0xffff)
    x10_5 = 1
else
    x10_5 = x10_4 + 1

*(x9 + 0x14) += 1
x9[3].d = x10_5
*x8_1 = result[3].d
int128_t v3 = *TI
result[2] = *(TI + 0x10)
result[1] = v3
*(result + 0x24) = arg3
*(result + 0x28) = arg4
ParticleSystem* x0_1 = ParticleCreateParams(arg2, &result[1])
*result = 1
*(result + 4) = ParticleGetID(x0_1)
*(x0_1 + 0x40) = 3
return result
