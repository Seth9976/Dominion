// 函数: sub_4c3970
// 地址: 0x4c3970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t eax = *(arg3 + 0x20)

if (arg2 == 0 || (eax.b & 1) != 0)
    if (*(arg4 + 4) == 2)
        *(arg4 + 4) = 3
    
    return arg4

int32_t eax_1 = *(arg4 + 4)

if (eax_1 == 4)
    eax_1 = *(arg4 + 8)
    
    if (eax_1 != (eax u>> 0x1c) - 1)
        int32_t ecx
        
        if (eax_1 == 0xffffffff)
            ecx = 0
        else if (eax_1 == 3)
            ecx = 1
        else
            ecx = eax_1 + 2
        
        if (eax u>> 0x1c == 0)
            eax_1 = 0
        else if (eax u>> 0x1c == 4)
            eax_1 = 1
        else
            eax_1 = (eax u>> 0x1c) + 1
        
        if (ecx s< eax_1)
            *(arg4 + 8) = (eax u>> 0x1c) - 1
else if (eax_1 != 5)
    *(arg4 + 8) = (eax u>> 0x1c) - 1

if (*(arg4 + 8) != 0xffffffff)
    *sub_61dad0() = (eax u>> 0x1c) - 1
    int32_t eax_3
    eax_3.b = *(arg4 + 4) == 2
    *(arg4 + 4) = eax_3 + 4
    return eax_3 + 4

sub_63b870(eax_1, &data_801800, "status.completionLevel != DBAI_NONE", 
    "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x1645, "ApplyWeeklyResult")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
