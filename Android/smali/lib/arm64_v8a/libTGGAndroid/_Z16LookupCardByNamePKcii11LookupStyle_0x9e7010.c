// 函数: _Z16LookupCardByNamePKcii11LookupStyle
// 地址: 0x9e7010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = CardLookupExact(arg1, arg2)
int32_t x19_1

if (x0 == 0)
    if ((zx.d(data_11d5130) & 1) == 0 && __cxa_guard_acquire(&data_11d5130) != 0)
        int64_t* x0_15 = operator new(0x10)
        *x0_15 = 0
        x0_15[1] = 0
        *x0_15 = XPooledCalloc(0x2000)
        data_11d5128 = x0_15
        x0_15[1].d = 0x3ff
        __cxa_guard_release(&data_11d5130)
    
    char var_38
    XString::XString(&var_38, arg1)
    int64_t* x22_1 = data_11d5128
    int32_t x0_3
    int32_t x2_1
    x0_3, x2_1 = XHashKey(&var_38)
    void* x22_2 = *(*x22_1 + ((zx.q(x22_1[1].d) & zx.q(x0_3)) << 3))
    
    if (x22_2 == 0)
    label_9e70a8:
        int32_t x0_7 = LookupCardByName_slow(arg1, arg2, x2_1, zx.q(arg4))
        int64_t* x21_1 = data_11d5128
        x19_1 = x0_7
        int32_t x0_9 = XHashKey(&var_38)
        uint64_t x22_3 = zx.q(x21_1[1].d) & zx.q(x0_9)
        void* x20_1 = *(*x21_1 + (zx.q(x22_3.d) << 3))
        
        if (x20_1 == 0)
        label_9e70ec:
            XString* x0_12 = XPooledMalloc(0x18)
            XString::XString(x0_12)
            *(x0_12 + 8) = x19_1
            uint64_t x9_3 = x22_3 << 3
            *(x0_12 + 0x10) = *(*x21_1 + x9_3)
            *(*x21_1 + x9_3) = x0_12
            *(x21_1 + 0xc) += 1
        else
            while (true)
                if ((XString::operator==(&var_38) & 1) != 0)
                    *(x20_1 + 8) = x19_1
                    break
                
                x20_1 = *(x20_1 + 0x10)
                
                if (x20_1 == 0)
                    goto label_9e70ec
    else
        while (true)
            int32_t x0_5
            x0_5, x2_1 = XString::operator!=(&var_38)
            
            if ((x0_5 & 1) == 0)
                x19_1 = *(x22_2 + 8)
                break
            
            x22_2 = *(x22_2 + 0x10)
            
            if (x22_2 == 0)
                goto label_9e70a8
    
    XString::~XString()
else
    x19_1 = *x0

return zx.q(x19_1)
