// 函数: sub_510a80
// 地址: 0x510a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_5911e0(eax, 0xffffffff, *(eax + 4), 0x20, 0xfffd0100, 0, 0, 0, 1, 0xffffffff, 0, 0)
int32_t* ecx_1 = *(sub_573400() + 4)
int32_t result = ecx_1[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6 || ecx_1[0x540].b != 0)
    return result

int32_t eax_2 = 0xffffffff

if (ecx_1[0x673] == 0xffffffff)
    eax_2 = ecx_1[0x674]

return sub_59f9b0(eax_2, 0xffffffff, ecx_1, eax_2, 0x4b, 0, nullptr, 0, 0, 0, 0, 0)
