// 函数: sub_5734e0
// 地址: 0x5734e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase
void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
void* ecx_1 = *ThreadLocalStoragePointer + 0x10
int32_t edx = *(ecx_1 + 0xf000)

if (edx s> 0)
    return ecx_1 + ((edx * 0xf - 0xf) << 3)

sub_63b870(ThreadLocalStoragePointer, &data_801800, "cs.numContexts > 0", 
    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x7dd, "DomGetContextW")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
