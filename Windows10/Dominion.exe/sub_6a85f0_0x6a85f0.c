// 函数: sub_6a85f0
// 地址: 0x6a85f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
uint32_t eax = sub_6a82e0(arg3)

if (*(eax + 0x11) != 0)
    uint32_t eax_1 = sub_6a82e0(arg3)
    sub_7112e0(*(eax_1 + 8))
    int32_t result = sub_713890(*(eax_1 + 4))
    int32_t edx = data_caf778
    data_caf778 = zx.d(*(eax_1 + 0x14))
    *(eax_1 + 0x14) = edx
    data_caf77c -= 1
    return result

float xmm1_1 = arg4 * arg6
*(*(eax + 4) + 0x54) = *arg2
*(*(eax + 4) + 0x58) = arg2[1]
*(*(eax + 4) + 0x4c) = *arg5
*(*(eax + 4) + 0x50) = arg5[1]
void* eax_6 = *(eax + 4)
*(eax_6 + 0x48) = xmm1_1 f+ *(eax_6 + 0x48)
sub_711450(*(eax + 8), xmm1_1)
sub_7117c0(*(eax + 8), *(eax + 4))
return sub_7145c0(*(eax + 4))
