// 函数: sub_573540
// 地址: 0x573540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase
void* eax = *fsbase->ThreadLocalStoragePointer
int32_t ecx = *(eax + 0xf010)

if (ecx s> 0)
    if (ecx != 1)
        return eax + 0x10 + (ecx - 2) * 0x78
    
    return 0

sub_63b870(eax, &data_801800, "cs.numContexts > 0", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
    0x7e4, "DomGetParentContext")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
