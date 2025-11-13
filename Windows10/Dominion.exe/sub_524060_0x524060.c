// 函数: sub_524060
// 地址: 0x524060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ecx = *(eax + 0xc) * 0x5a30
int32_t eax_1 = *(eax + 4)
int32_t var_1c = ecx
int32_t var_20 = 0
int32_t edi = *(ecx + eax_1 + 0x174f4)
uint32_t eax_2 = sub_568960(eax_1, 0, 0x3ea, 2)
void* eax_3 = sub_573400()
int32_t var_c
sub_574a80(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0xe28, &var_c)
int32_t eax_4
eax_4.b = var_c != 0
int32_t ecx_2 = 0

if (eax_4 - eax_2 + 4 + edi s>= 0)
    ecx_2 = eax_4 - eax_2 + 4 + edi

int32_t result = ecx_2 - edi

if (result s>= 1)
    return result

return 0
