// 函数: sub_5731d0
// 地址: 0x5731d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase
void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
void* esi_1 = *ThreadLocalStoragePointer + 0x10
int32_t edi = *(esi_1 + 0xf000)

if (edi s>= 0x200)
    sub_63b870(ThreadLocalStoragePointer, &data_801800, "cs.numContexts < MAX_STACK", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x75e, "DomPushHintContext")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = esi_1 + edi * 0x78
*(esi_1 + 0xf000) = edi + 1
*(result + 4) = arg3
*(result + 0xc) = arg2
*result = 6
*(result + 0x10) = arg4
*(result + 0x14) = 0
return result
