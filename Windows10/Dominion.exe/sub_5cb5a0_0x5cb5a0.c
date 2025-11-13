// 函数: sub_5cb5a0
// 地址: 0x5cb5a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_64e810(arg1 + 0x1ba0)
void* esi = arg1 + 0x1ba4
int32_t i_1 = 3
int32_t i

do
    sub_64e810(esi)
    esi += 4
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t ecx_2 = *(arg1 + 0x1a30)

if (ecx_2 != 0)
    uint32_t eax_1 = sub_6a82e0(ecx_2)
    sub_7112e0(*(eax_1 + 8))
    sub_713890(*(eax_1 + 4))
    int32_t edx_1 = data_caf778
    data_caf778 = zx.d(*(eax_1 + 0x14))
    *(eax_1 + 0x14) = edx_1
    data_caf77c -= 1

uint32_t result = zx.d(*(arg1 + 0x1c28))
int32_t ecx_6 = data_b809ec
data_b809ec = result
*(arg1 + 0x1c28) = ecx_6
data_b809f0 -= 1
return result
