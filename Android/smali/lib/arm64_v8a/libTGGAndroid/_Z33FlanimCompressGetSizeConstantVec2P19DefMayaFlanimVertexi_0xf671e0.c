// 函数: _Z33FlanimCompressGetSizeConstantVec2P19DefMayaFlanimVertexi
// 地址: 0xf671e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 8))

if (x8.d s< 1)
    return 0

int32_t* x10 = *arg1
int32_t x9
int32_t v0
int32_t v1
int32_t v2
int32_t v3

if (arg2 == 0)
    if (x8.d s< 2)
        return 0xa
    
    v1 = *x10
    v0 = x10[1]
    void* x10_2 = &x10[0xf]
    int64_t x11_1 = 1
    x9 = 1
    
    do
        v2 = *(x10_2 - 4)
        v3 = *x10_2
        x11_1 += 1
        x10_2 += 0x38
        int32_t x12_4 = (v0 f!= v3 ? 1 : 0) | (v1 f!= v2 ? 1 : 0)
        
        if (x12_4 != 0)
            v1 = v2
        
        if (x12_4 != 0)
            v0 = v3
        
        if (x12_4 != 0)
            x9 += 1
    while (x11_1 s< x8)
else if (arg2 != 1)
    int64_t x11_2 = 0
    x9 = 0
    v0 = *V20
    v1 = *(V20 + 4)
    void* x12_5 = &x10[5]
    
    do
        if (arg2 == 3)
            void* x15_2 = x10 + x11_2 * 0x38
            v2 = *(x15_2 + 0x1c)
            v3 = *(x15_2 + 0x18)
            
            if (x11_2 == 0 || v1 f!= v2 || not(v0 f== v3))
            label_f672f8:
                x9 += 1
                v1 = v2
                v0 = v3
        else
            if (arg2 != 2)
                pthread_kill(pthread_self(), 6)
                DefMayaFlanimVertex* x0_4
                DefFlanimCompressedData* x1
                int32_t x2
                x0_4, x1, x2 = XNoReturn()
                return FlanimCompressParamVec2(x0_4, x1, x2) __tailcall
            
            v2 = *x12_5
            v3 = *(x12_5 - 4)
            
            if (x11_2 == 0 || v1 f!= v2 || not(v0 f== v3))
                goto label_f672f8
        
        x11_2 += 1
        x12_5 += 0x38
    while (x11_2 s< x8)
else
    if (x8.d s< 2)
        return 0xa
    
    v1 = x10[2]
    v0 = x10[3]
    void* x10_1 = &x10[0x11]
    int64_t x11 = 1
    x9 = 1
    
    do
        v2 = *(x10_1 - 4)
        v3 = *x10_1
        x11 += 1
        x10_1 += 0x38
        int32_t x12_2 = (v0 f!= v3 ? 1 : 0) | (v1 f!= v2 ? 1 : 0)
        
        if (x12_2 != 0)
            v1 = v2
        
        if (x12_2 != 0)
            v0 = v3
        
        if (x12_2 != 0)
            x9 += 1
    while (x11 s< x8)
return zx.q(x9 * 0xa)
