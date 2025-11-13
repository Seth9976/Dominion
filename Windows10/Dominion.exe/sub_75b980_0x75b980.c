// 函数: sub_75b980
// 地址: 0x75b980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = (arg3 + 0xf) & 0xfffffff0
int32_t mxcsr
sub_75ba20(arg1, mxcsr, arg3, eax_1)
int32_t edi = *(arg1 + 0x1058)
int32_t* result = *(arg1 + 0x20)
int32_t esi_1 = 0
int32_t* result_1 = result
int32_t var_8 = 0

if (edi != 0)
    int32_t ebx_2 = edi * arg3
    
    do
        int32_t ecx_4 = esi_1
        
        if (esi_1 u< ebx_2)
            int32_t* result_2 = result
            
            do
                float xmm0_1 = *result_2
                result_2 = &result_2[1]
                *(arg2 + (ecx_4 << 1)) = (int.d(xmm0_1 * 32767f)).w
                ecx_4 += edi
            while (ecx_4 u< ebx_2)
            
            esi_1 = var_8
            result = result_1
        
        result = &result[eax_1]
        esi_1 += 1
        var_8 = esi_1
        result_1 = result
    while (esi_1 u< edi)

return result
