// 函数: _Z8FabClearR8FabState
// 地址: 0xf5bf20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *arg1
FabState& var_78 = arg1
*(arg1 + 0x488) = 0
*(arg1 + 0x60) += 1

if (x20 == 0)
    return 

int64_t* x8_2 = *x20
int128_t v0
int128_t v1

if (x8_2 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1 = AssetCatalogLoadAsset(x20, false, true)
    x8_2 = *x20

int64_t* x9_1 = *x8_2

if (x9_1[1].d s< 1)
    return 

int64_t i = 0
int64_t* var_80_1 = x9_1

do
    int64_t fp_1 = *x9_1
    int32_t x9_2 = *(var_78 + (i << 2) + 0x88)
    FabState* x21_1
    int32_t x8_9
    uint64_t x19_1
    
    if (x9_2 == 0)
        x8_9 = *(gFabs + 8)
        x19_1 = zx.q(*(gFabs + 0x10))
        uint64_t x8_10
        int64_t x9_3
        int32_t x10_3
        
        if (x19_1.d == x8_9)
        label_f5c03c:
            x9_3 = *gFabs
            x10_3 = x8_9 + 1
            *(gFabs + 8) = x10_3
            x8_10 = zx.q(x8_9)
        else
        label_f5c060:
            x9_3 = *gFabs
            x10_3 = *(x9_3 + x19_1 * 0x4e8 + 0x4e0)
            x8_10 = x19_1
        
        x21_1 = x9_3 + x8_10 * 0x4e8
        *(gFabs + 0x10) = x10_3
        arg1, v0, v1 = memset(x21_1, 0, 0x4e0)
        *(x21_1 + 0x4e0) = x19_1.d | *(gFabs + 0x18) << 0x10
        int32_t x8_14 = *(gFabs + 0x18)
        int32_t x8_15
        
        if (x8_14 == 0xffff)
            x8_15 = 1
        else
            x8_15 = x8_14 + 1
        
        *(gFabs + 0x14) += 1
        *(gFabs + 0x18) = x8_15
        *(var_78 + (i << 2) + 0x88) = *(x21_1 + 0x4e0)
    else
        x8_9 = *(gFabs + 8)
        uint64_t x10_1 = zx.q(x9_2.w)
        
        if (x10_1.d u< x8_9)
            x21_1 = *gFabs + x10_1 * 0x4e8
        
        if (x10_1.d u>= x8_9 || *(x21_1 + 0x4e0) != x9_2)
            x19_1 = zx.q(*(gFabs + 0x10))
            
            if (x19_1.d != x8_9)
                goto label_f5c060
            
            goto label_f5c03c
    int32_t* x22_3 = fp_1 + i * 0xe0
    v0 = *(var_78 + 0x50)
    *(x21_1 + 0x40) = *(var_78 + 0x40)
    *(x21_1 + 0x50) = v0
    int32_t x8_18 = *x22_3
    
    if (x8_18 == 5)
        int32_t x8_20 = *(x21_1 + 0x78)
        int32_t x9_6 = *(x21_1 + 0x60)
        void* x11_2 = fp_1 + i * 0xe0
        void* x8_21
        
        if (x8_20 s> x9_6)
            x8_21 = x21_1 + 0x7c
        else
            x8_21 = x11_2 + 0x94
        
        int64_t x8_22 = *x8_21
        void* __offset(FabState, 0x84) x9_8
        
        if (x8_20 s> x9_6)
            x9_8 = x21_1 + 0x84
        else
            x9_8 = x11_2 + 0x9c
        
        if (x8_22.d s>= 1)
            uint64_t x28_1 = x8_22 u>> 0x20
            
            if (x28_1.d s>= 1)
                int32_t x27_1 = *x9_8
                int64_t j = 0
                
                do
                    if (x27_1 s>= 1)
                        int64_t x24_1 = 0
                        
                        do
                            int32_t x23_1 = 0
                            
                            do
                                int64_t var_70 = j | x24_1 << 0x20
                                int32_t var_68_1 = x23_1
                                
                                if (**(fp_1 + i * 0xe0 + 0xa8) != 0)
                                    arg1, v0, v1 = FabClear(FabSubstateTable(x22_3, x21_1, &var_70))
                                
                                x23_1 += 1
                            while (x27_1 != x23_1)
                            
                            x24_1 += 1
                        while (x24_1 != x28_1)
                    
                    j += 1
                while (j != (x8_22 & 0xffffffff))
    else if (x8_18 == 2)
        arg1, v0, v1 = UIStateClear(FabUIState(zx.q(*(var_78 + 0x4e0)), i.d), *(x21_1 + 0x4d8))
    
    x9_1 = var_80_1
    i += 1
while (i s< sx.q(x9_1[1].d))
