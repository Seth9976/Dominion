// 函数: sub_734eb0
// 地址: 0x734eb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = arg4 + arg3
uint32_t result = 0
uint32_t result_1 = 0
int32_t esi = 0
int32_t var_10 = 0
int32_t var_8 = 0

if (zx.d(*arg2) s>= i)
    *arg5 = 0
    return 0

int16_t eax_5

do
    uint32_t result_2 = zx.d(arg2[1])
    int32_t edi_3
    
    if (result_2 s<= result)
        int16_t* edi_4 = *(arg2 + 4)
        uint32_t ebx = zx.d(*edi_4)
        uint32_t ecx_3 = ebx - zx.d(*arg2)
        uint32_t esi_2 = arg4 - var_8
        eax_5 = ebx.w
        result = result_1
        
        if (ecx_3 + esi s<= arg4)
            esi_2 = ecx_3
        
        var_8 += esi_2
        arg2 = edi_4
        edi_3 = (result_1 - result_2) * esi_2
        esi = var_8
    else
        uint32_t edi_2 = result_2 - result
        result = result_2
        uint32_t eax_1 = zx.d(*arg2)
        arg2 = *(arg2 + 4)
        edi_3 = edi_2 * esi
        uint32_t ecx_1 = zx.d(*arg2)
        result_1 = result
        
        if (eax_1 s>= arg3)
            esi += ecx_1 - eax_1
            var_8 = esi
            eax_5 = ecx_1.w
        else
            esi += ecx_1 - arg3
            var_8 = esi
            eax_5 = ecx_1.w
    
    var_10 += edi_3
while (zx.d(eax_5) s< i)
*arg5 = var_10
return result
