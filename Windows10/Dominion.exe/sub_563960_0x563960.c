// 函数: sub_563960
// 地址: 0x563960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 0xc80) == 0)
    memset(arg4, 0, 0xc84)
    return arg4

void* eax_1 = sub_573400()
int32_t edx = *(eax_1 + 0x2c)
int128_t var_40 = *arg7
int128_t var_30 = arg7[1]
int128_t var_20 = arg7[2]
var_20.d = *(eax_1 + 0x28)
__builtin_memcpy(arg4, arg3, 0xc84)
int32_t var_48 = *eax_1
int32_t var_44 = *(eax_1 + 0x10)
var_20:4.d = edx
arg4[0x320] = sub_5869d0(&var_40, &var_48, *(eax_1 + 4), *(eax_1 + 0xc), 1, arg4, arg4[0x320], 
    arg5, arg2, arg6, &var_40, arg8, arg9, arg10)
return arg4
