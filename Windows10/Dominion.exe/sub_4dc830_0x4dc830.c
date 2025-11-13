// 函数: sub_4dc830
// 地址: 0x4dc830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg2

if (ecx == 0)
    __builtin_memset(arg1, 0, 0x18)
    return 

if (arg3 == 0)
    sub_63b870(arg3, &data_801800, "_span.len != 0", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0x6f3, 
        "STokenize::STokenizeIter::SetStr")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_20 = arg3
void var_14
*arg1 = *sub_4dc650(&var_14, ecx)
bool cond:0 = *(arg1 + 8) == 0
int32_t ecx_1 = *(arg1 + 4)
int32_t var_c = *arg1
int32_t var_8 = ecx_1

if (not(cond:0))
    int32_t ecx_2 = *(arg1 + 0xc)
    var_c = *(arg1 + 8)
    int32_t var_8_1 = ecx_2

void* eax_4
int32_t edx_1
eax_4, edx_1 = sub_4dc5e0(&var_c, &arg2)
arg1[1].d = eax_4
*(arg1 + 0x14) = edx_1
