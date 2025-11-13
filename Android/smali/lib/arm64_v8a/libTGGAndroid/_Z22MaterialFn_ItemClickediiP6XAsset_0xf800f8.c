// 函数: _Z22MaterialFn_ItemClickediiP6XAsset
// 地址: 0xf800f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg3
int64_t* x8

if (arg3 == 0)
    x19 = AssetPtrGetNull(0x1d)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int64_t* x8_1 = *x8
uint64_t x9_2 = zx.q(x8_1[1].d)
void var_830

if (x9_2.d s>= 1)
    int64_t x11_1 = *x8_1
    int64_t x10_1 = 0
    int32_t x3_1 = 0
    int32_t v0 = *V20
    int32_t v1 = *(V20 + 4)
    
    do
        void* x2_1 = x11_1 + x10_1 * 0x58
        
        if (*(x2_1 + 0x4c) f!= v0 || not(*(x2_1 + 0x50) f== v1))
            void* x2_2 = &var_830 + (sx.q(x3_1) << 4)
            x3_1 += 1
            *x2_2 = 2
            *(x2_2 + 4) = x10_1.d
            *(x2_2 + 0xc) = 4
        
        if (not(*(x11_1 + x10_1 * 0x58 + 0x40) f== 0f))
            void* x2_4 = &var_830 + (sx.q(x3_1) << 4)
            x3_1 += 1
            *x2_4 = 2
            *(x2_4 + 4) = x10_1.d
            *(x2_4 + 0xc) = 5
        
        int32_t i = *(x11_1 + x10_1 * 0x58 + 0x28)
        
        if (i s> 0)
            int64_t x7_1 = sx.q(x3_1)
            int64_t x4_1
            uint64_t x3_2
            
            if (i == 1)
                x3_2 = 0
                x4_1 = x7_1
            label_f80250:
                void var_828
                void* x5_2 = &var_828 + (x4_1 << 4)
                
                do
                    *(x5_2 - 8) = 1
                    *(x5_2 - 4) = x10_1.d
                    *x5_2 = x3_2.d
                    x5_2 += 0x10
                    x3_2 = zx.q(x3_2.d + 1)
                    x4_1 += 1
                while (i != x3_2.d)
            else
                x3_2 = (zx.q(i - 1) + 1) & 0x1fffffffe
                int64_t x5_1 = 0
                x4_1 = x3_2 + x7_1
                void var_820
                void* x7_2 = &var_820 + (x7_1 << 4)
                
                do
                    int32_t x22_1 = x5_1.d + 1
                    *(x7_2 - 8) = x5_1.d
                    x5_1 += 2
                    *(x7_2 - 0x10) = 1
                    *(x7_2 - 0xc) = x10_1.d
                    *x7_2 = 1
                    *(x7_2 + 4) = x10_1.d
                    *(x7_2 + 8) = x22_1
                    x7_2 += 0x20
                while (x3_2 != x5_1)
                
                if (zx.q(i - 1) + 1 != x3_2)
                    goto label_f80250
            x3_1 = x4_1.d
        
        void* x2 = &var_830 + (sx.q(x3_1) << 4)
        *x2 = 0
        *(x2 + 4) = x10_1.d
        x10_1 += 1
        x3_1 += 1
    while (x10_1 != x9_2)

if ((zx.d(data_2421918) & 1) == 0)
    int64_t* var_838_1 = x8_1
    x8_1 = var_838_1
    
    if (__cxa_guard_acquire(&data_2421918) != 0)
        data_24218c4 = UILayoutGetElementIndex(data_24218f0, "imgVisible")
        __cxa_guard_release(&data_2421918)
        x8_1 = var_838_1

if (data_24218c4 == arg1)
    int64_t x9_5 = sx.q(arg2)
    
    if (*(&var_830 + (x9_5 << 4)) == 0)
        void* x9_8 = *x8_1 + sx.q(*(&var_830 + (x9_5 << 4) + 4)) * 0x58
        *(x9_8 + 4) ^= 1

x8_1[2] = 0

if (x19 != 0)
    *(x19 + 0x24) -= 1
