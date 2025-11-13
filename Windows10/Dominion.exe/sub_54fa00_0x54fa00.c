// 函数: sub_54fa00
// 地址: 0x54fa00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int16_t esi = (*arg2).w
uint32_t ebx = zx.d(esi)
void* edi = *(sub_573400() + 4)

if (ebx u>= 0x320)
    sub_591930()

int32_t eax_2 = ebx * 0x64
char eax_3
int32_t edx_1
eax_3, edx_1 = sub_5754f0(eax_2, *(eax_2 + edi + 0x1a4c), edi, 2, 0)

if (eax_3 != 0 && sub_568380(arg1, edx_1, esi, *(arg1 + 4)) != 0)
    return 1

return 0
