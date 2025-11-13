// 函数: sub_4e44e0
// 地址: 0x4e44e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_6 = *arg1
int32_t var_8

if (eax_6 u> 3)
    char const* const var_4_2 = "GetExpansion"
    var_8 = 0x13e2
else
    switch (eax_6)
        case 0
            char const* const var_4 = "GetExpansion"
            var_8 = 0x13d6
        case 1
            int32_t eax_2
            char edx
            edx:eax_2 = sx.q(arg1[1])
            return (eax_2 + zx.d(edx)) s>> 8
        case 2
            return arg1[2]
        case 3
            char const* const var_4_1 = "GetExpansion"
            var_8 = 0x13e0

sub_63b870(eax_6, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
    var_8, "GetExpansion")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
