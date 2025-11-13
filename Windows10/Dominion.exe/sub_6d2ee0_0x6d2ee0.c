// 函数: sub_6d2ee0
// 地址: 0x6d2ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg2
void* eax

if (*arg3 == 0)
    int16_t* ecx_2 = arg3[0xa] + arg3[0xb] * 0xe
    eax.w = arg4
    ecx_2[6].b = ebx.b
    *ecx_2 = eax.w
    eax.w = arg5
    ecx_2[1] = eax.w
    eax.w = arg6
    ecx_2[2] = eax.w
    eax.w = arg7
    ecx_2[3] = eax.w
    eax.w = arg8
    ecx_2[4] = eax.w
    eax.w = arg9
    ecx_2[5] = eax.w
else
    eax = sub_6d2e70(arg1, arg4.d, arg3, arg5.d)
    
    if (ebx.b == 4)
        void* eax_2 = sub_6d2e70(sub_6d2e70(eax, arg6.d, arg3, arg7.d), arg8.d, arg3, arg9.d)
        arg3[0xb] += 1
        return eax_2

arg3[0xb] += 1
return eax
