// 函数: sub_582040
// 地址: 0x582040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
uint32_t result

if (arg1 u> 0xc)
label_582065:
    char const* const var_4_1 = "RevealStyleIsHidden"
    var_8 = 0x29f9
label_58207e:
    sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_8, 
        "RevealStyleIsHidden")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

result = zx.d(lookup_table_5820a8[arg1])

switch (result)
    case 0
        result.b = 0
        return result
    case 1
        result.b = 1
        return result
    case 2
        char const* const var_4 = "RevealStyleIsHidden"
        var_8 = 0x29f7
        goto label_58207e
    case 3
        goto label_582065
