// 函数: sub_5a99d0
// 地址: 0x5a99d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = 3
int32_t* edx = arg6
int32_t var_28
void* ecx = &var_28 - edx
var_28 = *arg5
int32_t var_24 = arg5[1]
int32_t var_20 = arg5[2]
int32_t* result_3 = arg2[2]
int32_t* result = arg2[1]
int32_t* result_4 = *arg2
arg5 = arg2[3]
void* var_18 = ecx
int32_t* result_2 = result_4
int32_t* result_1
int32_t i

do
    if (result_4 == 0xffffffff)
        goto label_5a9a80
    
    result_1 = *(ecx + edx)
    void* eax_5 = result_4 * 3
    float xmm1_1 = 0f f- *(arg3 + (eax_5 << 2) + 4)
    float xmm0_1 = 0f f- *(arg3 + (eax_5 << 2))
    void* ecx_1 = result_1 * 3
    float xmm2_1 = 0f f- *(arg3 + (ecx_1 << 2) + 4)
    float xmm3_1 = 0f f- *(arg3 + (ecx_1 << 2))
    
    if (not(xmm1_1 * xmm1_1 + xmm0_1 * xmm0_1 <= xmm2_1 * xmm2_1 + xmm3_1 * xmm3_1))
        ecx = var_18
    label_5a9a80:
        result_1 = *(ecx + edx)
        result_2 = result_1
        *arg2 = result_1
        *arg4 = *edx
    
    int32_t ecx_4 = result_1 * 0xc
    float xmm0_3
    float xmm1_4
    float xmm2_4
    float xmm3_3
    
    if (result != 0xffffffff)
        void* eax_9 = result * 3
        xmm2_4 = 0f f- *(ecx_4 + arg3 + 4)
        xmm1_4 = 0f f- *(arg3 + (eax_9 << 2) + 4)
        xmm3_3 = 2f f- *(ecx_4 + arg3)
        xmm0_3 = 2f f- *(arg3 + (eax_9 << 2))
    
    if (result == 0xffffffff
            || not(xmm1_4 * xmm1_4 + xmm0_3 * xmm0_3 <= xmm2_4 * xmm2_4 + xmm3_3 * xmm3_3))
        result = result_1
        arg4[1] = *edx
    
    float* ecx_5 = ecx_4 + arg3
    float xmm0_5
    float xmm1_7
    float xmm2_7
    float xmm3_5
    
    if (result_3 != 0xffffffff)
        void* eax_12 = result_3 * 3
        xmm3_5 = 0f - *ecx_5
        xmm2_7 = 1f - ecx_5[1]
        xmm0_5 = 0f f- *(arg3 + (eax_12 << 2))
        xmm1_7 = 1f f- *(arg3 + (eax_12 << 2) + 4)
    
    if (result_3 == 0xffffffff
            || not(xmm1_7 * xmm1_7 + xmm0_5 * xmm0_5 <= xmm2_7 * xmm2_7 + xmm3_5 * xmm3_5))
        result_3 = result_1
        arg4[2] = *edx
    
    float xmm0_7
    float xmm1_10
    float xmm2_10
    float xmm3_7
    
    if (arg5 != 0xffffffff)
        void* eax_15 = arg5 * 3
        xmm3_7 = 2f - *ecx_5
        xmm2_10 = 1f - ecx_5[1]
        xmm0_7 = 2f f- *(arg3 + (eax_15 << 2))
        xmm1_10 = 1f f- *(arg3 + (eax_15 << 2) + 4)
    
    if (arg5 != 0xffffffff
            && xmm1_10 * xmm1_10 + xmm0_7 * xmm0_7 <= xmm2_10 * xmm2_10 + xmm3_7 * xmm3_7)
        result_1 = arg5
    else
        arg5 = result_1
        arg4[3] = *edx
    
    result_4 = result_2
    edx = &edx[1]
    i = i_1
    i_1 -= 1
    ecx = var_18
while (i != 1)
arg2[3] = result_1
arg2[2] = result_3
arg2[1] = result
return result
