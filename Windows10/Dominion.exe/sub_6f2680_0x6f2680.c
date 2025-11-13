// 函数: sub_6f2680
// 地址: 0x6f2680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14_2
char const* const ecx_2

if (arg1 u> 0xff)
    char const* const var_10_3 = "ToolDataMoveItem"
    var_14_2 = 0x95c
    ecx_2 = "sourceIndex >= 0 && sourceIndex < MAX_EMITTERS"
else
    if (arg2 u<= 0xff)
        int32_t edi = *((arg1 << 3) + &data_147d4b4)
        int32_t ebx = *((arg1 << 3) + &data_147d4b8)
        
        if (arg1 s< arg2)
            memmove((arg1 << 3) + &data_147d4b4, (arg1 << 3) + &data_147d4bc, (arg2 - arg1) << 3)
        else if (arg1 s> arg2)
            memmove((arg2 << 3) + &data_147d4bc, (arg2 << 3) + &data_147d4b4, (arg1 - arg2) << 3)
        
        *((arg2 << 3) + &data_147d4b4) = edi
        *((arg2 << 3) + &data_147d4b8) = ebx
        return 
    
    char const* const var_10_2 = "ToolDataMoveItem"
    var_14_2 = 0x95d
    ecx_2 = "destIndex >= 0 && destIndex < MAX_EMITTERS"

int32_t eax
sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_14_2, 
    "ToolDataMoveItem")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
