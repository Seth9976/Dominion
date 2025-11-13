// 函数: _Z13GetTokenLayerR6DomGfx
// 地址: 0xaff8a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x2c)

if (x8 == 2)
    return 0x2ece

int32_t x8_7

if (x8 == 6)
    int32_t x8_3 = *(arg1 + 0x1e0)
    
    if (x8_3 u> 0xf || (1 << x8_3 & 0xa040) == 0)
        x8_7 = *(arg1 + 0x1e4)
    label_aff9f0:
        int32_t x10_1 = *(gDomClient + 0x38)
        int32_t x10_2
        
        x10_2 = x10_1 == 0xffffffff ? 0 : x10_1
        
        if (x8_7 == x10_2)
            return 0x2d35
        
        if (*(gDomClient + 0x3c) == x8_7)
            return 0x2b9a
        
        return 0x2b96
else if (x8 != 7)
    int32_t x8_5 = *(arg1 + 0x1bc)
    
    if (x8_5 == 0x3f1)
        x8_7 = *(arg1 + 0x1c4)
        goto label_aff9f0
    
    if (x8_5 == 0x474)
        void* x9_4 = *(gDomClient + 0x205e0)
        int32_t i
        
        do
            i = *(x9_4 + 0x21d0)
            x9_4 += 0x21d8
        while (i u< 0x10000)
        void* x9_5 = x9_4 - 0x21d8
        
        while (*(x9_5 + 0x2c) != 0 || *(x9_5 + 0x98) != *(arg1 + 0x1c0)
                || zx.d(*(x9_5 + 0x168)) != 0)
            void* x12_4 = x9_5 + 0x43a8
            int32_t i_1
            
            do
                i_1 = *x12_4
                x9_5 += 0x21d8
                x12_4 += 0x21d8
            while (i_1 u< 0x10000)
        
        if (*(x9_5 + 0xa4) == 0x3e9)
            return 0x2b5e
        
        return 0x2cf8
else
    int32_t x8_1 = *(arg1 + 0x224)
    
    if (x8_1 != 1)
        if (x8_1 != 0)
            pthread_kill(pthread_self(), 6)
            return ToUITransform(XNoReturn()) __tailcall
        
        int32_t x9_1 = *(gDomClient + 0x38)
        int32_t x9_2
        
        x9_2 = x9_1 == 0xffffffff ? 0 : x9_1
        
        if (*(arg1 + 0x228) == x9_2)
            return 0x2d35
        
        if (*(gDomClient + 0x3c) == *(arg1 + 0x1c4))
            return 0x2b9a
        
        return 0x2b96
return 0x2b34
