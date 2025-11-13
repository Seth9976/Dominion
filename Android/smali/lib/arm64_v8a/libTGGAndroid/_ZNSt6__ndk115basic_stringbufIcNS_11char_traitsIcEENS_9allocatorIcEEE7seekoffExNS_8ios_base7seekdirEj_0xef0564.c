// 函数: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj
// 地址: 0xef0564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x58)
int64_t x9 = *(arg1 + 0x30)

if (x8 u< x9)
    x8 = x9
    *(arg1 + 0x58) = x9

int32_t entry_x3
int32_t x10 = entry_x3 & 0x18

if (x10 != 0 && (arg3 != 1 || x10 != 0x18))
    void* x10_4
    
    if (x8 != 0)
        if ((zx.d(*(arg1 + 0x40)) & 1) != 0)
            x10_4 = x8 - *(arg1 + 0x50)
            
            if (arg3 != 0)
                goto label_ef05c8
            
            goto label_ef0604
        
        x10_4 = x8 - (arg1 + 0x41)
        
        if (arg3 != 0)
            goto label_ef05c8
        
        goto label_ef0604
    
    x10_4 = nullptr
    void* x11_4
    
    if (arg3 == 0)
    label_ef0604:
        x11_4 = arg2
        
        if (arg2 s< 0 || x10_4 s< x11_4)
            return 0
        
    label_ef0644:
        
        if (x11_4 == 0)
        label_ef065c:
            
            if ((entry_x3 & 8) != 0)
                *(arg1 + 0x18) = *(arg1 + 0x10) + x11_4
                *(arg1 + 0x20) = x8
            
            if ((entry_x3 & 0x10) == 0)
                return 0
            
            *(arg1 + 0x30) = *(arg1 + 0x28) + sx.q(x11_4.d)
            return 0
        
        if (((entry_x3 & 8) == 0 || *(arg1 + 0x18) != 0) && ((entry_x3 & 0x10) == 0 || x9 != 0))
            goto label_ef065c
    else
    label_ef05c8:
        
        if (arg3 == 2)
            x11_4 = x10_4 + arg2
            
            if (x10_4 + arg2 s>= 0 && x10_4 s>= x11_4)
                goto label_ef0644
            
            return 0
        
        if (arg3 == 1)
            if ((entry_x3 & 8) != 0)
                void* x11_7 = *(arg1 + 0x18) - *(arg1 + 0x10)
                x11_4 = x11_7 + arg2
                
                if (x11_7 + arg2 s< 0 || x10_4 s< x11_4)
                    return 0
                
                goto label_ef0644
            
            void* x11_3 = x9 - *(arg1 + 0x28)
            x11_4 = x11_3 + arg2
            
            if (x11_3 + arg2 s>= 0 && x10_4 s>= x11_4)
                goto label_ef0644

return 0
