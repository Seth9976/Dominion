// 函数: sub_665d10
// 地址: 0x665d10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3

if (*(arg3 + 0x171c) != 0)
    return 

if (*(arg3 + 0x16b0) != 0)
    sub_63b870(arg1, &data_801800, "el.worldInfo.index == 0", "C:\x\ax2017\Engine\UI2.cpp", 0x3675, 
        "FlattenTreeRec")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi_1 = 0
int32_t eax = *arg4
int32_t ecx_1 = eax * 2
*arg4 = eax + 1
*(arg2 + (ecx_1 << 3)) = arg3
*(arg2 + (ecx_1 << 3) + 4) = arg5
arg1 = *(arg3 + 0x189c)

if (arg1 == 0)
    return 

do
    sub_64e7a0(*(arg3 + (esi_1 << 2) + 0x179c))
    sub_665d10(arg4, arg5 + 1)
    esi_1 += 1
while (esi_1 != arg1)
