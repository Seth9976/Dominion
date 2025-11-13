// 函数: _ZN9DataArrayI14ParticleSystemE16DataArrayDisposeEv
// 地址: 0xf934a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0

if (*entry_x0 == 0)
    return 

label_f934d4:
void* x0 = *entry_x0
void* x22_1 = x0

while (true)
    int64_t x8_2 = x0 + zx.q(entry_x0[1].d) * 0xa8
    
    if (x22_1 u>= x8_2)
    label_f9355c:
        entry_x0[1].d = 0
        entry_x0[2].d = 0
        XFree(x0)
        entry_x0[4] = 0
        __builtin_memset(entry_x0, 0, 0x18)
        break
    
    while (zx.d(*(x22_1 + 0xa2)) == 0)
        x22_1 += 0xa8
        
        if (x22_1 u>= x8_2)
            goto label_f9355c
    
    void* i_1
    
    for (void* i = *(x22_1 + 0x10); i != 0; i = i_1)
        i_1 = *(i + 0x320)
        ParticleEmitter::~ParticleEmitter()
        XPooledFree(i, 0x330)
    
    __builtin_memset(x22_1 + 0x10, 0, 0x14)
    entry_x0[2].d = zx.d(*(x22_1 + 0xa0))
    *(x22_1 + 0xa0) = entry_x0[2].d
    *(entry_x0 + 0x14) -= 1
    
    if (x22_1 == 0)
        goto label_f934d4
    
    x0 = *entry_x0
    x22_1 += 0xa8
