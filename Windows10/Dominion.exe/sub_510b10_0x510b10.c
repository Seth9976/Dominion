// 函数: sub_510b10
// 地址: 0x510b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_5621a0(5, 2)
void* result = sub_573400()
int32_t* ecx = *(result + 4)
int32_t edx = ecx[0x541]

if (edx == 3 || edx == 5 || edx == 4 || edx == 6 || ecx[0x540].b != 0)
    return result

int32_t edx_1 = *(result + 0xc)
int32_t eax = edx_1

if (edx_1 == ecx[0x673])
    eax = ecx[0x674]

return sub_59f9b0(eax, edx_1, ecx, eax, 0x4e, 0, nullptr, 0, 0xa00, 5, 0, 0)
