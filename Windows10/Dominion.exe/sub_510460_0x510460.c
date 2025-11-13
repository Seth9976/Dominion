// 函数: sub_510460
// 地址: 0x510460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_4 = ecx
sub_56b270(ecx, 2)
void* result = sub_573400()
int32_t* ecx_1 = *(result + 4)
int32_t edx = ecx_1[0x541]

if (edx == 3 || edx == 5 || edx == 4 || edx == 6 || ecx_1[0x540].b != 0)
    return result

int32_t edx_1 = *(result + 0xc)
int32_t eax = edx_1

if (edx_1 == ecx_1[0x673])
    eax = ecx_1[0x674]

return sub_59f9b0(eax, edx_1, ecx_1, eax, 0x4c, 0, nullptr, 0, 0, 0, 0, 0)
