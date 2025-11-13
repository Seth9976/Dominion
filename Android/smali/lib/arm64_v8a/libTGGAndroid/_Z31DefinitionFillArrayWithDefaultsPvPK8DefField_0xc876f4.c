// 函数: _Z31DefinitionFillArrayWithDefaultsPvPK8DefField
// 地址: 0xc876f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x38) s< 1)
    return 

DefMap* x21_1 = *(arg2 + 0x30)
int64_t x22_1 = 0
void* x20_1 = arg1 + zx.q(*arg2)
int32_t x8_2 = *(x21_1 + 0x18)
int64_t x23_2 = sx.q(*(x21_1 + 0x14))

if (x8_2 - 1 u<= 0x10)
    while (true)
        if (x8_2 u<= 0x11)
            int32_t x9_2 = 1 << x8_2
            
            if ((x9_2 & 0x1c41e) == 0)
                if ((x9_2 & 0x21a60) != 0)
                    break
                
                if (x8_2 == 8)
                    *x20_1 = *(arg2 + 0x48)
                    x22_1 += 1
                    
                    if (*(arg2 + 0x38) s<= x22_1)
                        return 
                    
                    goto label_c87804
            else
                DefinitionFillShallowFieldWithDefaults(x21_1, x20_1, arg2)
                x22_1 += 1
                
                if (*(arg2 + 0x38) s<= x22_1)
                    return 
                
            label_c87804:
                x21_1 = *(arg2 + 0x30)
                x20_1 += x23_2
                x8_2 = *(x21_1 + 0x18)
                
                if (x8_2 - 1 u> 0x10)
                    break
                
                continue
        
        pthread_kill(pthread_self(), 6)
        void* x0_5
        DefField* x1_3
        x0_5, x1_3 = XNoReturn()
        return DefinitionFillArrayItemWithDefaults(x0_5, x1_3) __tailcall

memset(x20_1, 0, sx.q(*(x21_1 + 0x14)))
int32_t x27_1 = *(x21_1 + 0x10)

if (x27_1 != 0)
    DefField* x2_3 = *(x21_1 + 8)
    DefinitionFillSubFieldWithDefaults(x20_1, *(x2_3 + 0x18), x2_3)
    
    if (x27_1 s>= 2)
        int32_t x27_2 = 1
        int64_t x28_1 = 0x80
        int32_t fp_1
        
        do
            fp_1 = *(x21_1 + 0x10)
            x27_2 += 1
            DefMap** x2_4 = *(x21_1 + 8) + x28_1
            DefinitionFillSubFieldWithDefaults(x20_1, *x2_4, &x2_4[-3])
            x28_1 += 0x68
        while (x27_2 s< fp_1)

x22_1 += 1

if (*(arg2 + 0x38) s> x22_1)
    goto label_c87804
