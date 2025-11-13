// 函数: sub_6d23e0
// 地址: 0x6d23e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg2

if (arg5 == 0)
    int16_t* ecx_2 = arg3 + edi * 0xe
    int32_t eax_14
    eax_14.w = arg6
    *ecx_2 = eax_14.w
    ecx_2[1] = arg7
    
    if (arg4 == 0)
        ecx_2[6].b = 2
        *(ecx_2 + 4) = 0
        return edi + 1
    
    eax_14.w = arg10
    ecx_2[2] = eax_14.w
    eax_14.w = arg11
    ecx_2[3] = eax_14.w
    ecx_2[6].b = 3
    return edi + 1

if (arg4 != 0)
    int32_t edx = arg10.d
    int32_t ecx = arg11.d
    int16_t* esi_1 = arg3 + edi * 0xe
    esi_1[6].b = 3
    *esi_1 = ((arg8 + edx) s>> 1).w
    esi_1[2] = edx.w
    edi += 1
    esi_1[1] = ((arg9 + ecx) s>> 1).w
    esi_1[3] = ecx.w

int16_t* ecx_1 = arg3 + edi * 0xe
int32_t eax_9
eax_9.w = arg6
ecx_1[6].b = 3
*ecx_1 = eax_9.w
eax_9.w = arg7
ecx_1[1] = eax_9.w
ecx_1[2] = arg8.w
ecx_1[3] = arg9.w
return edi + 1
