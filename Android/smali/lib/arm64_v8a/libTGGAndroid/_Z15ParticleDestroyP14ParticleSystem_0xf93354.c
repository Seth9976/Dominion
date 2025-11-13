// 函数: _Z15ParticleDestroyP14ParticleSystem
// 地址: 0xf93354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(*gpGameData + 0x20)

while (*(arg1 + 0x20) != 0)
    EmitterDestroy(*(arg1 + 0x10))
    void* x20_1 = *(arg1 + 0x10)
    void* x8_1 = *(x20_1 + 0x320)
    *(arg1 + 0x10) = x8_1
    void* __offset(ParticleSystem, 0x18) x8_2
    
    if (x8_1 == 0)
        x8_2 = arg1 + 0x18
    else
        x8_2 = x8_1 + 0x328
    
    *x8_2 = 0
    void var_370
    memcpy(&var_370, x20_1, 0x320)
    *(arg1 + 0x20) -= 1
    void* i_3
    
    for (void* i = *(x20_1 + 0x2d8); i != 0; i = i_3)
        i_3 = *(i + 0x320)
        ParticleEmitter::~ParticleEmitter()
        XPooledFree(i, 0x330)
    
    __builtin_memset(x20_1 + 0x2d8, 0, 0x14)
    XPooledFree(x20_1, 0x330)
    ParticleEmitter::~ParticleEmitter()

void* i_2

for (void* i_1 = *(arg1 + 0x10); i_1 != 0; i_1 = i_2)
    i_2 = *(i_1 + 0x320)
    ParticleEmitter::~ParticleEmitter()
    XPooledFree(i_1, 0x330)

__builtin_memset(arg1 + 0x10, 0, 0x14)
int32_t x9_2 = *(x22 + 0x10)
*(x22 + 0x10) = zx.d(*(arg1 + 0xa0))
*(arg1 + 0xa0) = x9_2
*(x22 + 0x14) -= 1
