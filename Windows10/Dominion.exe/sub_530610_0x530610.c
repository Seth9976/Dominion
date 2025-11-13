// 函数: sub_530610
// 地址: 0x530610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t esi = (*arg1).w
uint32_t edi = zx.d(esi)
void* ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_2 = edi * 0x64
int32_t var_1c = 0
char eax_3
int32_t ecx_2
int32_t edx_1
eax_3, ecx_2, edx_1 = sub_5754f0(eax_2, *(eax_2 + ebx + 0x1a4c), ebx, 8, var_1c)

if (eax_3 == 0)
    var_1c = ecx_2
    var_1c = 5
    
    if (sub_568470(&var_1c, edx_1, esi, var_1c) != 0)
        return 1

return 0
