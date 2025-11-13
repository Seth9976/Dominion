// 函数: sub_56b410
// 地址: 0x56b410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ecx = *(eax + 0xc)
int32_t var_10 = *eax
int32_t* eax_1 = *(eax + 4)
int32_t var_c = *(eax + 0x10)
int128_t* esi_3 = zx.d(arg6) ^ 1

if (arg2 != 0)
    if (arg2 != esi_3)
        int32_t edx
        
        if (ecx != eax_1[0x673])
            edx = ecx
        else
            edx = eax_1[0x674]
        
        int32_t var_24_1 = ecx
        int32_t var_28_1 = arg5
        esi_3 = sub_623b70(eax_1, &var_10, eax_1, 8, ecx, edx, arg3, arg2, ecx, esi_3, arg4)
    
    if (esi_3 != 0)
        return *arg3

return 0
