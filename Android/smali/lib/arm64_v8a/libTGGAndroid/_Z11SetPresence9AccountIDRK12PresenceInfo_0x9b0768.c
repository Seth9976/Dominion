// 函数: _Z11SetPresence9AccountIDRK12PresenceInfo
// 地址: 0x9b0768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg1
void* x0 = GetClient()
int64_t* x0_1
int128_t v0
x0_1, v0 = GetClient()
int64_t x9 = *(x0 + 0x7590)
*(x0 + 0x75a8) = *x0_1
*(x0 + 0x75a0) = *(arg2 + 8)
uint64_t x23 = zx.q(*(x0 + 0x7598)) & (zx.q(i_1) | zx.q(i_1 s>> 4))
int64_t* x8_3 = x9 + (x23 << 3)
int32_t* i = *x8_3
int32_t* x0_2
int32_t x8_9

if (*arg2 != 3)
    for (; i != 0; i = *(i + 0x18))
        if (*i == i_1)
            *(i + 8) = *arg2
            return i
    
    int128_t v0_1
    x0_2, v0_1 = XPooledMalloc(0x20)
    *x0_2 = i_1
    uint64_t x9_1 = x23 << 3
    *(x0_2 + 8) = *arg2
    *(x0_2 + 0x18) = *(*(x0 + 0x7590) + x9_1)
    *(*(x0 + 0x7590) + x9_1) = x0_2
    x8_9 = *(x0 + 0x759c) + 1
else
    if (i == 0)
        return i
    
    int32_t* i_3 = i
    
    while (*i_3 != i_1)
        i_3 = *(i_3 + 0x18)
        
        if (i_3 == 0)
            return i
    
    if (*i != i_1)
        int32_t* i_2
        
        do
            i_2 = i
            i = *(i + 0x18)
            
            if (i == 0)
                return i
        while (*i != i_1)
        
        x8_3 = &i_2[6]
    
    *x8_3 = *(i + 0x18)
    x0_2 = XPooledFree(i, 0x20)
    x8_9 = *(x0 + 0x759c) - 1

*(x0 + 0x759c) = x8_9
return x0_2
