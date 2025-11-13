// 函数: _Z20FieldGetComboOptions9UI2Handlei
// 地址: 0x10320ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(arg1)
uint64_t x19 = zx.q(arg2)
char* var_1058
GetPropDefs(*gUI2 + mulu.dp.d(x21.d, 0x19a8), &var_1058, nullptr)
int32_t x8_3 = (&var_1058)[sx.q(x19.d) * 4 + 1].d
int64_t x22 = *gUI2

if (x8_3 s<= 0x10b)
    if (x8_3 != 0x67)
        if (x8_3 != 0x6f)
        label_10324a4:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        label_10324b4:
            
            if (__cxa_guard_acquire(&data_24b4920) == 0)
                return &data_24b5650
            
            MakeStyles(*(gUI2 + 0x60), zx.q(*x19), &data_24b5650)
            __cxa_guard_release(&data_24b4920)
            return &data_24b5650
        
        data_24b4080 = &data_793a18
        int64_t* x20_1 = *(x22 + x21 * 0x19a8 + 0x1688)
        int64_t* x8_10 = *x20_1
        AttribTable* x19_1 = *gUI2AttribTable
        
        if (x8_10 == 0)
            if (x20_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x20_1, false, true)
            x8_10 = *x20_1
        
        int64_t* x0_9 = AttribMapGetDef(x19_1, 
            **x8_10 + sx.q(*(x22 + x21 * 0x19a8 + 0x1690)) * 0x18, *macro_ptr_UI2StateOverrides, 
            0x69)
        
        if (x0_9 != 0)
            uint64_t x8_14 = zx.q(x0_9[1].d)
            
            if (x8_14.d s>= 1)
                int64_t x9_8 = 0
                int64_t x10_1 = 0
                
                do
                    int64_t x8_16 = *(*x0_9 + x9_8)
                    x9_8 += 0x30
                    (&var_1058)[x10_1] = x8_16
                    x8_14 = sx.q(x0_9[1].d)
                    x10_1 += 1
                while (x10_1 s< x8_14)
            
            bool (* var_58)(char const*, char const*) = SortNames
            std::__ndk1::__sort<bool (*&)(char const*, char const*), char const**>(&var_1058, 
                &(&var_1058)[sx.q(x8_14.d)], &var_58)
        
        if (x0_9 == 0 || x0_9[1].d s< 1)
            data_24b4088 = 0
        else
            int64_t i = 0
            
            do
                i += 1
                (&data_24b4088)[i] = (&var_1058)[i]
            while (i s< sx.q(x0_9[1].d))
            
            (&data_24b4080)[i + 1] = 0
        
        return &data_24b4080
    
    if (*(gUI2 + 0x60) != 0)
        void* x9_12 = x22 + x21 * 0x19a8
        int32_t x8_24 = *(x9_12 + 0x167c)
        x19 = x9_12 + 0x167c
        
        if (x8_24 == 1)
            if ((zx.d(data_24b4930) & 1) == 0 && __cxa_guard_acquire(&data_24b4930) != 0)
                MakeStyles(*(gUI2 + 0x60), zx.q(*x19), &data_24b5e50)
                __cxa_guard_release(&data_24b4930)
            
            return &data_24b5e50
        
        if (x8_24 == 5)
            if ((zx.d(data_24b4928) & 1) == 0 && __cxa_guard_acquire(&data_24b4928) != 0)
                MakeStyles(*(gUI2 + 0x60), zx.q(*x19), &data_24b5a50)
                __cxa_guard_release(&data_24b4928)
            
            return &data_24b5a50
        
        if (x8_24 == 3)
            if ((zx.d(data_24b4920) & 1) == 0)
                goto label_10324b4
            
            return &data_24b5650
else
    int32_t x0_12
    int64_t* result
    
    if (x8_3 == 0x10c)
        XAsset* x0_11 = *(x22 + x21 * 0x19a8 + 0x14b8)
        
        if (x0_11 != 0)
            result = &data_24b5038
            x0_12 = SpineGetAnimNames(x0_11, &data_24b5038, 0x40)
        label_10323bc:
            int32_t x8_21
            
            x8_21 = x0_12 s< 0x3e ? x0_12 : 0x3e
            
            result[sx.q(x8_21) + 1] = 0
            return result
    else
        if (x8_3 != 0x112)
            if (x8_3 != 0x111)
                goto label_10324a4
            
            result = &data_24b4e38
            data_24b4e38 = &data_793a18
            int32_t x23_1 = *(x22 + x21 * 0x19a8 + 0x1970)
            
            if (x23_1 != 0)
                *(x22 + x21 * 0x19a8 + 0x1870)
                data_24b4e40 = XString::operator char const*()
                
                if (x23_1 != 1)
                    void* x24_1 = &data_24b4e48
                    int32_t x8_6 = 1
                    result = &data_24b4e38
                    
                    do
                        uint64_t x22_1 = zx.q(x8_6)
                        *gUI2 + zx.q(*(x22 + x21 * 0x19a8 + (x22_1 << 0x20 s>> 0x1e) + 0x1870))
                            * 0x19a8
                        x8_6 = x22_1.d + 1
                        *x24_1 = XString::operator char const*()
                        x24_1 += 8
                    while (x23_1 != x8_6)
            
            return result
        
        XAsset* x0_13 = *(x22 + x21 * 0x19a8 + 0x14b8)
        
        if (x0_13 != 0)
            result = &data_24b5238
            x0_12 = SpineGetSkins(x0_13, &data_24b5238, 0x40)
            goto label_10323bc
    
    if (*(x22 + x21 * 0x19a8 + 0x14d0) != 0)
        goto label_10324a4

return &data_11bf270
