// 函数: sub_5733b0
// 地址: 0x5733b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase
void* ecx = *fsbase->ThreadLocalStoragePointer
int32_t eax = *(ecx + 0xf010)

if (eax s> 0)
    *(ecx + 0xf010) = eax - 1
    return eax - 1

sub_63b870(eax, &data_801800, "cs.numContexts > 0", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
    0x792, "DomPopContext")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
