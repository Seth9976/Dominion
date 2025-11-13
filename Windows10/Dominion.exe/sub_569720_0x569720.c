// 函数: sub_569720
// 地址: 0x569720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_58 = arg3
int32_t var_50 = arg4
int32_t var_4c = arg2
void* eax_1 = sub_573400()
int32_t eax_2 = *eax_1
int32_t edx = *(eax_1 + 0x2c)
int128_t var_40 = *arg5
int32_t var_48 = eax_2
int32_t var_44 = *(eax_1 + 0x10)
int128_t var_30 = arg5[1]
int128_t var_20 = arg5[2]
var_20.d = *(eax_1 + 0x28)
int32_t ecx_2 = *(eax_1 + 0xc)
int32_t* esi_1 = *(eax_1 + 4)
var_20:4.d = edx
int32_t eax_4

if (ecx_2 != esi_1[0x673])
    eax_4 = ecx_2
else
    eax_4 = esi_1[0x674]

int128_t* var_6c = &var_40
int32_t result
sub_6236a0(eax_4, &var_48, esi_1, ecx_2, eax_4, &var_58, &result, ecx_2, &var_50, 2)
return result
