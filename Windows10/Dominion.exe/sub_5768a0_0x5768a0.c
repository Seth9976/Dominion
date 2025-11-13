// 函数: sub_5768a0
// 地址: 0x5768a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *(arg1 + 0x19b8)

if (ecx s>= 0x100)
    int32_t eax
    sub_63b870(eax, &data_801800, "g.numScheduledAbilities < MAX_ABILITIES", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0xf05, "AbilityAllocRegistered")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(arg1 + 0x19b8) = ecx + 1
void* result = ecx * 0xa8 + 0x3b568 + arg1
memset(result, 0, 0xa8)
int32_t edx = *(arg1 + 0x19bc)
*(arg1 + 0x19bc) = edx + 1
*(result + 0x2c) = edx
int32_t edx_1 = *(arg1 + 0x19c0)
*(arg1 + 0x19c0) = edx_1 + 1
*(result + 0x40) = edx_1
return result
