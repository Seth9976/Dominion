// 函数: sub_4c2650
// 地址: 0x4c2650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg1[4]
int32_t var_18
int32_t eax
char const* const ecx_1

if (ecx == 0)
    char const* const var_14 = "SortFriends"
    var_18 = 0x13c9
    ecx_1 = "a.state != FRIENDSTATE_NONE"
else if (arg2[4] != 0)
    int32_t eax_1 = sub_4c25d0(ecx)
    int32_t eax_2 = sub_4c25d0(arg2[4])
    
    if (eax_1 s< eax_2)
        eax_2.b = 1
        return eax_2
    
    if (eax_1 s> eax_2)
        eax_2.b = 0
        return eax_2
    
    eax_2 = arg1[4]
    int32_t temp0_1 = arg2[4]
    
    if (eax_2 s> temp0_1)
        eax_2.b = 1
        return eax_2
    
    if (eax_2 s< temp0_1)
        eax_2.b = 0
        return eax_2
    
    int32_t ebx_2 = arg1[7]
    int32_t edx_1 = arg2[7]
    int32_t ecx_3 = arg1[6]
    eax_2 = arg2[6]
    
    if (ebx_2 u> edx_1)
        eax_2.b = 1
        return eax_2
    
    if (ebx_2 u< edx_1)
        eax_2.b = 0
        return eax_2
    
    if (ecx_3 u> eax_2)
        eax_2.b = 1
        return eax_2
    
    if (ebx_2 u< edx_1 || (ebx_2 u<= edx_1 && ecx_3 u< eax_2))
        eax_2.b = 0
        return eax_2
    
    eax = *arg1
    int32_t temp1_1 = *arg2
    
    if (eax != temp1_1)
        eax.b = eax s< temp1_1
        return eax
    
    char const* const var_14_2 = "SortFriends"
    var_18 = 0x13da
    ecx_1 = "a.serverIdx != b.serverIdx"
else
    char const* const var_14_1 = "SortFriends"
    var_18 = 0x13ca
    ecx_1 = "b.state != FRIENDSTATE_NONE"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
    var_18, "SortFriends")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
