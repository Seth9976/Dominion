// 函数: sub_6ab350
// 地址: 0x6ab350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = *(arg3 + 4)

if (ebx == 0)
    ebx = arg4[4]

*arg2 = arg4[1]
arg2[1] = arg4[2]
arg2[4] = 1
arg2[0xf] = 1
int128_t* eax_3 = sub_687730(0x10)
*eax_3 = zx.o(0)
arg2[0x12] = eax_3
int32_t edx = arg2[1]
arg2[5] = 8
arg2[6] = ebx
arg2[7] = 0
uint32_t eax_4 = sub_6a9660(eax_3, edx, *arg2, ebx)
int32_t* ecx_3 = arg2[0x12]
*ecx_3 = eax_4
int32_t edi_1

if (arg4[4] != ebx || arg6 == 2)
    int32_t eax_6 = sub_687730(eax_4)
    int32_t var_1c = eax_6
    ecx_3[2] = eax_6
    int32_t ecx_6 = *arg2
    int32_t var_18_1 = ecx_6
    int32_t var_14_1 = arg2[1]
    int32_t var_10_1 = sub_6a9570(ecx_6, ebx)
    int32_t var_c_1 = ebx
    int32_t* eax_10
    int32_t ecx_8
    eax_10, ecx_8 = sub_6a9de0(arg4, &var_1c)
    edi_1 = arg5
    
    if (arg6 != 2)
        int32_t var_3c_2 = edi_1
        sub_6aa120(eax_10, &var_1c, ecx_8)
    
    int32_t eax_11 = *arg4
    
    if (eax_11 != 0)
        _aligned_free(eax_11)
    
    *arg4 = 0
else
    int32_t eax_5 = *arg4
    edi_1 = arg5
    int32_t var_3c_1 = edi_1
    ecx_3[2] = eax_5
    sub_6aa120(eax_5, arg4, ecx_3)

if (*(arg3 + 8) == 0)
    int32_t var_3c_4 = edi_1
    sub_63b5f0("Autogeneration of mipmaps is not implemented for %s")

uint32_t result
result.b = 1
return result
