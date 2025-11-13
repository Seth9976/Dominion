// 函数: sub_637100
// 地址: 0x637100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = *arg3 + 0x258

if (eax_1 != arg1)
    sub_63b870(eax_1, &data_801800, "&callback.gfx->move == this", 
        "C:\x\ax2017\Jams\Dominion\code\CardMotion.h", 0x144, 
        "MoveComponent<struct DomLoc,struct DomMoveCallback>::QueueDelay")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx = *(arg1 + 0x17c0)
void* edx_1 = ecx * 0xb0 + arg1
*(arg1 + 0x17c0) = ecx + 1
__builtin_memcpy(edx_1 + 0x1c0, arg1 + 0x118, 0x88)
*(edx_1 + 0x250) = *arg3
*(edx_1 + 0x260) = *(arg3 + 0x10)
*(edx_1 + 0x268) = arg2
*(edx_1 + 0x248) = 0xb
return arg2
