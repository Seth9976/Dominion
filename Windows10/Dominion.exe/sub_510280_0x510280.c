// 函数: sub_510280
// 地址: 0x510280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t eax = sub_56b780()
sub_50f980(eax, 2)

if (eax == 0x103)
    sub_50f980(0x601, 2)

int32_t* ecx_2 = *(sub_573400() + 4)
int32_t result = ecx_2[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6 || ecx_2[0x540].b != 0)
    return result

int32_t eax_2 = 0xffffffff

if (ecx_2[0x673] == 0xffffffff)
    eax_2 = ecx_2[0x674]

return sub_59f9b0(eax_2, 0xffffffff, ecx_2, eax_2, 0x46, 0, nullptr, 0, eax, 0, 0, 0)
