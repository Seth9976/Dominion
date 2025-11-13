// 函数: sub_693960
// 地址: 0x693960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
char const* const ecx

if (arg4 - 0x24 s< 8)
    if (arg4 - 0x24 s>= 0)
        int32_t ecx_1
        ecx_1.b = arg2 != 0
        int32_t result
        result.b = arg5
        *((ecx_1 << 3) + 0x48 + arg4 - 0x24 + arg3) = result.b
        return result
    
    char const* const var_c_1 = "ButtonSourceCacheSetHand"
    var_10 = 0x200
    ecx = "idx >= 0"
else
    char const* const var_c = "ButtonSourceCacheSetHand"
    var_10 = 0x1ff
    ecx = "idx < NUM_BUTTONSOURCES_HANDED"

sub_63b870(arg4 - 0x24, &data_801800, ecx, "C:\x\ax2017\Engine\Controller.cpp", var_10, 
    "ButtonSourceCacheSetHand")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
