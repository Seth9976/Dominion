// 函数: sub_591930
// 地址: 0x591930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* ecx = *(eax + 4)

if (*(ecx + 0x1504) != 3)
    *(ecx + 0x1a20) = 0xffffffff
    void* ecx_1 = *(eax + 4)
    *(ecx_1 + 0x1a24) = *(ecx_1 + 0x1a1c)
    sub_63b5f0("game thread yield (error)")
    sub_6a90e0()
    return sub_63b5f0("game thread resume (error)")

sub_63b870(eax, &data_801800, "c.g->simStyle != SIM_SIMULATION", 
    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4df3, "GameHalt")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
