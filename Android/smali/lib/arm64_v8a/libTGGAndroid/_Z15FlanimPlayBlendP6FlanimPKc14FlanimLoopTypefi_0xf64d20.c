// 函数: _Z15FlanimPlayBlendP6FlanimPKc14FlanimLoopTypefi
// 地址: 0xf64d20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x7c) = arg5
*(arg1 + 0x80) = arg5

if (arg5 s>= 1)
    void* x0_1 = FlanimGetDef(*arg1)
    
    if (*(x0_1 + 0x28) s>= 1)
        int64_t x24_1 = 0
        int64_t i = 0
        
        do
            FlanimGetCurrentTransform(arg1, i.d, *(arg1 + 0x70) + x24_1)
            i += 1
            x24_1 += 0x70
        while (i s< sx.q(*(x0_1 + 0x28)))

int64_t* x0_4 = FlanimGetDef(*arg1)
void** result
void* x23_2

if (arg2 == 0)
    *(arg1 + 0x10) = 0
    XAsset* x0_9 = *arg1
    *(arg1 + 0x14) = x0_4[0xb].d
    result = FlanimGetDef(x0_9)
    x23_2 = result + 0x54
else
    uint64_t x23_1 = zx.q(x0_4[1].d)
    
    if (x23_1.d s< 1)
    label_f64dd8:
        *(arg1 + 0x10) = 0
        *arg1
        *(arg1 + 0x14) = x0_4[0xb].d
        XString::operator char const*()
        XTrace("missing flanim action %s in %s")
    else
        void* x24_2 = *x0_4 + 8
        
        while (true)
            if (strcasecmp(arg2, *(x24_2 - 8)) == 0)
                *(arg1 + 0x10) = *x24_2
                *(arg1 + 0x14) = *(x24_2 + 4) - *x24_2 + 1
                break
            
            uint64_t temp0_1 = x23_1
            x23_1 -= 1
            x24_2 += 0x18
            
            if (temp0_1 == 1)
                goto label_f64dd8
    
    result = FlanimGetDef(*arg1)
    uint64_t i_2 = zx.q(result[1].d)
    void** result_1 = result
    
    if (i_2.d s>= 1)
        x23_2 = *result_1 + 0x10
        uint64_t i_1
        
        do
            result = strcasecmp(arg2, *(x23_2 - 0x10))
            
            if (result.d == 0)
                goto label_f64e7c
            
            i_1 = i_2
            i_2 -= 1
            x23_2 += 0x18
        while (i_1 != 1)
    
    x23_2 = result_1 + 0x54

label_f64e7c:
int32_t x8_12 = *(arg1 + 0x14)
float v0 = *x23_2
float v1 = 0f
*(arg1 + 8) = 0
*(arg1 + 0x1c) = arg3
*(arg1 + 0x20) = 0

if (x8_12 s>= 2)
    v1 = v0 * arg4 / float.s(x8_12 - 1)

*(arg1 + 0x18) = v1
return result
