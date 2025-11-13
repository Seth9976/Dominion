// 函数: sub_5facc0
// 地址: 0x5facc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c

if (arg3 u> 6)
    char const* const var_8_1 = "IsKingdomModifierActive"
    var_c = 0x89dc
else
    int32_t eax
    
    switch (arg3)
        case 0
            if (arg4 == 0)
                arg1.b = 0
                return arg1
            
            eax.b = arg4 == arg2 + 1
            return eax
        case 1
            if (arg5 != 0)
                eax.b = arg5 == arg2 + 1
                return eax
            
            arg1.b = 0
            return arg1
        case 2
            if (arg2 == 0)
                arg1.b = arg6
                arg1.b &= 1
                return arg1
            
            if (arg2 == 1)
                return (arg6.d u>> 1).b & 1
            
            if (arg2 == 2)
                int32_t ecx_1 = arg6.d
                
                if (((ecx_1 u>> 1).b & 1) == 0 && ((ecx_1 u>> 2).b & 1) != 0)
                    arg1.b = 1
                    return arg1
                
                arg1.b = 0
                return arg1
        case 3
            if (arg2 == 0)
                return (arg6.d u>> 3).b & 1
            
            arg1.b = 0
            return arg1
        case 4
            if (arg2 == 0)
                return (arg6.d u>> 4).b & 1
            
            arg1.b = 0
            return arg1
        case 5
            if (arg2 == 0)
                return (arg6.d u>> 5).b & 1
            
            arg1.b = 0
            return arg1
        case 6
            if (arg2 == 0)
                return (arg6.d u>> 6).b & 1
            
            arg1.b = 0
            return arg1
    
    char const* const var_8 = "IsKingdomModifierActive"
    var_c = 0x89d0

sub_63b870(arg1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_c, 
    "IsKingdomModifierActive")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
