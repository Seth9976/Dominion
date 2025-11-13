// 函数: sub_5535f0
// 地址: 0x5535f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t edi = zx.d(arg1)
void* ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_1 = edi * 0x64
int32_t var_1c = 0
char eax_2
int32_t ecx_2
int32_t edx_1
eax_2, ecx_2, edx_1 = sub_5754f0(eax_1, *(eax_1 + ebx + 0x1a4c), ebx, 8, var_1c)

if (eax_2 != 0)
    return 0

var_1c = ecx_2
var_1c = 4
return sub_568470(&var_1c, edx_1, arg1, var_1c) != 0
