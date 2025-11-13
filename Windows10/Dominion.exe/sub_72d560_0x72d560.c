// 函数: sub_72d560
// 地址: 0x72d560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_72d4a0(arg1, "#?RADIANCE\n")
int32_t eax_1 = *(arg1 + 0xb4)
*(arg1 + 0xa8) = *(arg1 + 0xb0)
*(arg1 + 0xac) = eax_1

if (eax != 0)
    return eax

int32_t eax_2 = sub_72d4a0(arg1, "#?RGBE\n")
*(arg1 + 0xa8) = *(arg1 + 0xb0)
*(arg1 + 0xac) = *(arg1 + 0xb4)
return eax_2
