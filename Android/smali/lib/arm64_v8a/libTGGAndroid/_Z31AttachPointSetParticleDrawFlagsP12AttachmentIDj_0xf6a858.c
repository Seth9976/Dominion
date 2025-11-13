// 函数: _Z31AttachPointSetParticleDrawFlagsP12AttachmentIDj
// 地址: 0xf6a858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == 0)
    return 

int64_t* x10_1 = *(*gpGameData + 0x28)
uint64_t x9_2 = zx.q(x8.w)

if (x9_2.d u>= x10_1[1].d)
    return 

int64_t x10_2 = *x10_1

if (*(x10_2 + x9_2 * 0x34 + 0x30) != x8)
    return 

int32_t* x22_1 = x10_2 + x9_2 * 0x34
int32_t i

do
    if (*x22_1 == 1)
        arg1 = ParticleTryToGet(zx.q(x22_1[1]))
        
        if (arg1 != 0)
            *(arg1 + 0x88) = arg2
    
    i = x22_1[3]
    
    if (i == 0)
        break
    
    uint64_t x10_3 = zx.q(i.w)
    int64_t* x9_4 = *(*gpGameData + 0x28)
    
    if (x10_3.d u>= x9_4[1].d)
        break
    
    x22_1 = *x9_4 + x10_3 * 0x34
while (x22_1[0xc] == i)
