// 函数: _Z40DefinitionFillArrayableFieldWithDefaultsPvPK6DefMapPK8DefField
// 地址: 0xc874a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x18)

if (x8 u<= 0x10)
    if ((1 << x8 & 0x1c41e) != 0)
        return DefinitionFillShallowFieldWithDefaults(arg2, arg1, arg3) __tailcall
    
    if (x8 != 8)
        goto label_c8751c
    
    *arg1 = *(arg3 + 0x48)
    return 

label_c8751c:
void* x21_1 = *(arg3 + 0x48)

if (x21_1 == 0)
    memset(arg1, 0, sx.q(*(arg2 + 0x14)))
    int32_t x21_2 = *(arg2 + 0x10)
    
    if (x21_2 != 0)
        DefField* x2_3 = *(arg2 + 8)
        DefinitionFillSubFieldWithDefaults(arg1, *(x2_3 + 0x18), x2_3)
        
        if (x21_2 s>= 2)
            int32_t x21_3 = 1
            int64_t x22_3 = 0x80
            int32_t x23_2
            
            do
                x23_2 = *(arg2 + 0x10)
                x21_3 += 1
                DefMap** x2_4 = *(arg2 + 8) + x22_3
                DefinitionFillSubFieldWithDefaults(arg1, *x2_4, &x2_4[-3])
                x22_3 += 0x68
            while (x21_3 s< x23_2)
else
    memcpy(arg1, x21_1, sx.q(*(arg2 + 0x14)))
    int32_t x22_1 = *(arg2 + 0x10)
    
    if (x22_1 != 0)
        DefDeepCopyField(arg1, *(arg2 + 8), nullptr, x21_1)
        
        if (x22_1 s>= 2)
            int64_t x22_2 = 1
            int64_t x23_1 = 0x68
            int64_t x24_1
            
            do
                x24_1 = sx.q(*(arg2 + 0x10))
                x22_2 += 1
                DefDeepCopyField(arg1, *(arg2 + 8) + x23_1, nullptr, x21_1)
                x23_1 += 0x68
            while (x22_2 s< x24_1)
