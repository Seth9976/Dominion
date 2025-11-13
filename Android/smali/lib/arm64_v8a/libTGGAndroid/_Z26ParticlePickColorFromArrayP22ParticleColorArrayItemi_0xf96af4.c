// 函数: _Z26ParticlePickColorFromArrayP22ParticleColorArrayItemi
// 地址: 0xf96af4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s<= 0)
    RandomInt(gRNG, 0)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return RandomUnitVec3() __tailcall

uint64_t x21 = zx.q(arg2)
int32_t x1
int64_t i_4

if (arg2 u> 8)
    int64_t x8_1
    
    if ((x21 & 7) == 0)
        x8_1 = 8
    else
        x8_1 = x21 & 7
    
    i_4 = x21 - x8_1
    void* __offset(ParticleColorArrayItem, 0x4c) x9_1 = arg1 + 0x4c
    int128_t v0
    v0.q = 0
    v0:8.q = 0
    int64_t i_3 = i_4
    int128_t v1
    v1.q = 0
    v1:8.q = 0
    int64_t i
    
    do
        int128_t v2
        v2.d = *x9_1
        int128_t v3
        v3.d = *(x9_1 + 4)
        int128_t v4
        v4.d = *(x9_1 + 8)
        int128_t v5
        v5.d = *(x9_1 + 0xc)
        v2:4.d = *(x9_1 + 0x10)
        v3:4.d = *(x9_1 + 0x14)
        v4:4.d = *(x9_1 + 0x18)
        v5:4.d = *(x9_1 + 0x1c)
        v2:8.d = *(x9_1 + 0x20)
        v3:8.d = *(x9_1 + 0x24)
        v4:8.d = *(x9_1 + 0x28)
        v5:8.d = *(x9_1 + 0x2c)
        v2:0xc.d = *(x9_1 + 0x30)
        v3:0xc.d = *(x9_1 + 0x34)
        v4:0xc.d = *(x9_1 + 0x38)
        v5:0xc.d = *(x9_1 + 0x3c)
        int128_t v16
        v16.d = *(x9_1 - 0x40)
        int128_t v17
        v17.d = *(x9_1 - 0x3c)
        int128_t v18
        v18.d = *(x9_1 - 0x38)
        int128_t v19
        v19.d = *(x9_1 - 0x34)
        v16:4.d = *(x9_1 - 0x30)
        v17:4.d = *(x9_1 - 0x2c)
        v18:4.d = *(x9_1 - 0x28)
        v19:4.d = *(x9_1 - 0x24)
        v16:8.d = *(x9_1 - 0x20)
        v17:8.d = *(x9_1 - 0x1c)
        v18:8.d = *(x9_1 - 0x18)
        v19:8.d = *(x9_1 - 0x14)
        v16:0xc.d = *(x9_1 - 0x10)
        v17:0xc.d = *(x9_1 - 0xc)
        v18:0xc.d = *(x9_1 - 8)
        v19:0xc.d = *(x9_1 - 4)
        i = i_3
        i_3 -= 8
        x9_1 += 0x80
        v1 += v2
        v0 += v16
    while (i != 8)
    uint128_t v0_1
    v0_1.d = vaddvq_u32(v1 + v0)
    x1 = v0_1.d
else
    i_4 = 0
    x1 = 0

void* x9_3 = arg1 + (i_4 << 4) + 0xc
int64_t i_2 = x21 - i_4
int64_t i_1

do
    int32_t x10_1 = *x9_3
    x9_3 += 0x10
    i_1 = i_2
    i_2 -= 1
    x1 += x10_1
while (i_1 != 1)
int32_t x0_1 = RandomInt(gRNG, x1)

if (arg2 s>= 1)
    int64_t x8_2 = 0
    int32_t x9_4 = 0
    void* __offset(ParticleColorArrayItem, 0xc) x10_2 = arg1 + 0xc
    
    do
        x9_4 += *x10_2
        
        if (x0_1 s< x9_4)
            return zx.q(x8_2.d)
        
        x8_2 += 1
        x10_2 += 0x10
    while (x21 != x8_2)

pthread_kill(pthread_self(), 6)
return zx.q(XNoReturn().d)
