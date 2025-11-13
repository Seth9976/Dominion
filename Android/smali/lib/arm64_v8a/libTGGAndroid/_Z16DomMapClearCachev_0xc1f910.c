// 函数: _Z16DomMapClearCachev
// 地址: 0xc1f910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MutexLock(gMapGlobals + 0x68)
MutexLock(gMapGlobals + 0x40)
uint64_t x9 = zx.q(*(gMapGlobals + 8))

if (x9.d != 0)
    void* i_3 = *gMapGlobals
    int64_t x12_1 = 0x5110
    void* i = i_3
    
    do
        if (zx.d(*(i_3 + x12_1 + 2)) != 0)
            while (i != 0xffffffff)
                DomMapDispose(zx.q(*(i + 0x5110)))
                i_3 = *gMapGlobals
                x9 = zx.q(*(gMapGlobals + 8))
                int64_t x10_1 = i_3 + x9 * 0x5118
                
                if (x10_1 u<= i + 0x5118)
                    break
                
                void* x11_2 = i + 0xa228
                i += 0x5118
                
                while (zx.d(*(x11_2 + 2)) == 0)
                    i += 0x5118
                    x11_2 += 0x5118
                    
                    if (i u>= x10_1)
                        goto label_c1f9e0
            
            break
        
        i += 0x5118
        x12_1 += 0x5118
    while (i u< i_3 + x9 * 0x5118)
    
label_c1f9e0:
    
    if (x9.d != 0)
        void* x9_1 = i_3 + mulu.dp.d(x9.d, 0x5118)
        
        while (true)
            int32_t x12_5 = *(i_3 + 0x5110)
            
            if (x12_5 u>> 0x10 != 0)
                *(i_3 + 0x5110) = *(gMapGlobals + 0x10)
                i_3 += 0x5118
                int32_t x12_4 = *(gMapGlobals + 0x14) - 1
                *(gMapGlobals + 0x10) = x12_5 & 0xffff
                *(gMapGlobals + 0x14) = x12_4
                
                if (x9_1 u<= i_3)
                    break
            else
                i_3 += 0x5118
                
                if (i_3 u>= x9_1)
                    break

void* i_2 = *(gMapGlobals + 0x28)
*(gMapGlobals + 8) = 0
*(gMapGlobals + 0x10) = 0

if (i_2 != 0)
    void* i_1
    
    do
        i_1 = *(i_2 + 8)
        XPooledFree(i_2, 0x18)
        i_2 = i_1
    while (i_1 != 0)

*(gMapGlobals + 0x28) = 0
*(gMapGlobals + 0x30) = 0
*(gMapGlobals + 0x38) = 0
MutexUnlock(gMapGlobals + 0x40)
return MutexUnlock(gMapGlobals + 0x68) __tailcall
