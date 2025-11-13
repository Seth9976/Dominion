// 函数: sub_573460
// 地址: 0x573460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase
void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
void* edx_1 = *ThreadLocalStoragePointer + 0x10
int32_t ecx = *(edx_1 + 0xf000)

if (ecx s<= 0)
    sub_63b870(ThreadLocalStoragePointer, &data_801800, "cs.numContexts > 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x7c0, "DomContextGetWindow")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t ecx_1 = ecx - 1

if (ecx - 1 s>= 0)
    void* eax_5 = edx_1 + ((ecx_1 * 0xf + 7) << 3)
    int32_t temp1_1
    
    do
        int32_t result = *eax_5
        
        if (result != 0)
            return result
        
        eax_5 -= 0x78
        temp1_1 = ecx_1
        ecx_1 -= 1
    while (temp1_1 - 1 s>= 0)

return 0
