// 函数: _Z14EmitterDestroyP15ParticleEmitter
// 地址: 0xf93be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ParticleEmitter* i = *(arg1 + 0x2d8)
void* __offset(ParticleEmitter, 0x2d8) x21 = arg1 + 0x2d8

if (i != 0)
    do
        EmitterDestroy(i)
        i = *(i + 0x320)
    while (i != 0)
    
    void* i_2 = *x21
    
    if (i_2 != 0)
        void* i_1
        
        do
            i_1 = *(i_2 + 0x320)
            ParticleEmitter::~ParticleEmitter()
            XPooledFree(i_2, 0x330)
            i_2 = i_1
        while (i_1 != 0)

__builtin_memset(x21, 0, 0x14)
void* x8 = *(arg1 + 0x300)
*(x8 + 0x28) -= 1
