// 函数: _ZN6SoLoud6Soloud22findFreeVoice_internalEv
// 地址: 0x107831c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int32_t x8 = *(entry_x0 + 0x34)

if (x8 != 0)
    int32_t x9_1 = x8 - 1
    
    if (*(entry_x0 + (zx.q(x9_1) << 3) + 0x98) == 0)
        x8 = x9_1
        *(entry_x0 + 0x34) = x9_1

int64_t x9_2 = 0
int32_t x19 = -1
int32_t x10_3 = -1

while (true)
    void* x11_2 = *(entry_x0 + (x9_2 << 3) + 0x98)
    
    if (x11_2 == 0)
        break
    
    if ((zx.d(*(x11_2 + 0x10)) & 2) == 0)
        int32_t x11_3 = *(x11_2 + 8)
        bool cond:0_1 = x11_3 u< x10_3
        
        if (x11_3 u< x10_3)
            x10_3 = x11_3
        
        if (cond:0_1)
            x19 = x9_2.d
    
    x9_2 += 1
    
    if (x9_2 == 0x400)
        SoLoud::Soloud::stopVoice_internal(entry_x0.d)
        return zx.q(x19)

if (x8 s> x9_2.d)
    return zx.q(x9_2.d)

*(entry_x0 + 0x34) = x9_2.d + 1
return zx.q(x9_2.d)
