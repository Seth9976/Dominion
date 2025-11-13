// 函数: sub_64c7e0
// 地址: 0x64c7e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg2 + 4)
memmove(arg1 + ((esi + 0x5e7) << 2), arg1 + ((esi + 0x5e8) << 2), 
    ((*(arg1 + 0x189c) - esi) << 2) + 0xfffffffc)
int32_t temp1 = *(arg1 + 0x189c)
*(arg1 + 0x189c) -= 1
*(arg2 + 4) = esi - 1

if (temp1 - 1 s>= 0)
    return esi - 1

sub_63b870(esi - 1, &data_801800, "numChildren >= 0", "C:\x\ax2017\Engine\UI2.cpp", 0xb58, 
    "UI2::removeAt")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
