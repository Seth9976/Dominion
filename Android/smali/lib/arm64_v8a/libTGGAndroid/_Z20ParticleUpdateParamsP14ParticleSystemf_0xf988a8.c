// 函数: _Z20ParticleUpdateParamsP14ParticleSystemf
// 地址: 0xf988a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(*gpGameData + 0x20)
*(x8_1 + 0x28) += 1
float v1 = *(arg1 + 0x78)
float v2 = *(arg1 + 0x84) + arg2
int32_t x8_3 = *(arg1 + 0x7c) + 1
*(arg1 + 0x80) = arg2
*(arg1 + 0x84) = v2
*(arg1 + 0x7c) = x8_3

if (not(v1 <= 0f))
    arg2 = v1 - arg2
    *(arg1 + 0x78) = arg2
    
    if (not(arg2 > 0f))
        *(arg1 + 0x9e) = 1

void* i_1 = *(arg1 + 0x10)

if (i_1 != 0)
    void* i
    
    do
        i = *(i_1 + 0x320)
        
        if ((ParticleEmitterUpdate(i_1).d & 1) == 0)
            EmitterDestroy(i_1)
            void* x8_4 = *(i_1 + 0x328)
            void* __offset(ParticleSystem, 0x10) x8_5
            
            if (x8_4 == 0)
                x8_5 = arg1 + 0x10
            else
                x8_5 = x8_4 + 0x320
            
            *x8_5 = *(i_1 + 0x320)
            void* x8_6 = *(i_1 + 0x320)
            void* __offset(ParticleSystem, 0x18) x8_7
            
            if (x8_6 == 0)
                x8_7 = arg1 + 0x18
            else
                x8_7 = x8_6 + 0x328
            
            *x8_7 = *(i_1 + 0x328)
            *(arg1 + 0x20) -= 1
            void* j_1
            
            for (void* j = *(i_1 + 0x2d8); j != 0; j = j_1)
                j_1 = *(j + 0x320)
                ParticleEmitter::~ParticleEmitter()
                XPooledFree(j, 0x330)
            
            __builtin_memset(i_1 + 0x2d8, 0, 0x14)
            XPooledFree(i_1, 0x330)
        
        i_1 = i
    while (i != 0)

if (*(arg1 + 0x20) == 0)
    *(arg1 + 0x9e) = 1

v1 = *(arg1 + 0x70)
*(arg1 + 0x90) = (*(arg1 + 0x68)).d.q
*(arg1 + 0x98) = v1
