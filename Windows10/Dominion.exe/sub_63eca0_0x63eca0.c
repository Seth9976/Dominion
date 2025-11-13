// 函数: sub_63eca0
// 地址: 0x63eca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_18
char const* const var_14
char* ecx

if (arg2 s<= arg3)
    if (arg3 - arg2 + 1 s> 0)
        return arg2 + modu.dp.d(0:(sub_63eb70()), arg3 - arg2 + 1)
    
    var_14 = "RandomInt"
    var_18 = 0x4f
    ecx = "maxPlusOne > 0"
else
    var_14 = "RandomIntRange"
    var_18 = 0x58
    ecx = "mmin <= mmax"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\Random.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
