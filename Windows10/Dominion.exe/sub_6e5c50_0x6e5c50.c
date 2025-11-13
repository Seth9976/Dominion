// 函数: sub_6e5c50
// 地址: 0x6e5c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *(arg1 + 0x68)
int32_t* eax

if (ecx != 0)
    eax = sub_64c080(ecx, *(arg1 + 0x6c) * 0x68)
    *(arg1 + 0x68) = 0

void* edx_2 = data_147abe8

if (edx_2 != 0)
    void* edx_3 = *(edx_2 + 0xc)
    uint32_t result = zx.d(*(arg1 + 0x90))
    int32_t ecx_1 = *(edx_3 + 0xc)
    *(edx_3 + 0xc) = result
    *(arg1 + 0x90) = ecx_1
    *(edx_3 + 0x10) -= 1
    return result

sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
