// 函数: _Z17NetBufferMakeRoomR5XListIP9NetBufferEi
// 地址: 0xf8470c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XList<NetBuffer*>& x19 = arg1
void* __offset(XList<NetBuffer*>, 0x8) x21_1

if (*(arg1 + 0x10) == 0)
    uint64_t x8_8 = *gNetwork
    int32_t x9_2 = *(x8_8 + 0x78)
    int64_t x20_1
    
    if (x9_2 == 0)
        x20_1 = XMalloc(0xfe20)
    else
        void* x0_1 = *(x8_8 + 0x70)
        void* x10_3 = *(x0_1 + 0x10)
        *(x8_8 + 0x70) = x10_3
        
        if (x10_3 == 0)
            *(x8_8 + 0x68) = 0
        else
            *(x10_3 + 8) = 0
            x9_2 = *(x8_8 + 0x78)
        
        x20_1 = *x0_1
        *(x8_8 + 0x78) = x9_2 - 1
        XPooledFree(x0_1, 0x18)
    
    __builtin_memset(x20_1 + 0xfde8, 0, 0x14)
    arg1 = XPooledCalloc(0x18)
    *arg1 = x20_1
    *(arg1 + 8) = 0
    x21_1 = x19 + 8
label_f84844:
    *(arg1 + 0x10) = *(x19 + 8)
    void* x8_12 = *(x19 + 8)
    XList<NetBuffer*>& x8_13
    
    if (x8_12 == 0)
        x8_13 = x19
    else
        x8_13 = x8_12 + 8
    
    *x8_13 = arg1
    *(x19 + 0x10) += 1
    *x21_1 = arg1
else
    x21_1 = x19 + 8
    int32_t* x8_3 = **x21_1 + 0xfde8
    
    if (0xfde8 - (*x8_3 + x8_3[1]) s< arg2)
        uint64_t x8_7 = *gNetwork
        int32_t x9_1 = *(x8_7 + 0x78)
        int64_t x20_2
        
        if (x9_1 == 0)
            x20_2 = XMalloc(0xfe20)
        else
            void* x0 = *(x8_7 + 0x70)
            void* x10_2 = *(x0 + 0x10)
            *(x8_7 + 0x70) = x10_2
            
            if (x10_2 == 0)
                *(x8_7 + 0x68) = 0
            else
                *(x10_2 + 8) = 0
                x9_1 = *(x8_7 + 0x78)
            
            x20_2 = *x0
            *(x8_7 + 0x78) = x9_1 - 1
            XPooledFree(x0, 0x18)
        
        __builtin_memset(x20_2 + 0xfde8, 0, 0x14)
        arg1 = XPooledCalloc(0x18)
        *arg1 = x20_2
        *(arg1 + 8) = 0
        goto label_f84844
