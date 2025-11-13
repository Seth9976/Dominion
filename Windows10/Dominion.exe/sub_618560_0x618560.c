// 函数: sub_618560
// 地址: 0x618560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_5de8b0(arg2)
void* edx = eax
int32_t var_c
char const* const var_8_1
char* ecx_1

if (edx != 0)
    eax = arg3
    
    if (eax u> 7)
        var_8_1 = "DomSetCardParam"
        var_c = 0xcd8a
        ecx_1 = "Halt"
    else
        switch (eax)
            case nullptr
                if (arg5 == 1)
                    *(edx + 0x100) = 0
                    return eax
                
                *(edx + 0xfc) = arg4
                *(edx + 0x100) = arg5
                return arg4
            case 1
                eax.b = arg4 != 0
                *(edx + 0x104) = eax.b
                return eax
            case 2
                eax.b = arg4 != 0
                *(edx + 0x105) = eax.b
                *(edx + 0x108) = arg5
                
                if (arg4 != 0)
                    return arg5
                
                goto label_6185b2
            case 3
                *(edx + 0x10c) = arg4
                return arg4
            case 4
                eax.b = arg4 != 0
                *(edx + 0x114) = eax.b
            label_6185b2:
                void* eax_1 = *(edx + 0x9c)
                
                if (eax_1 != 0)
                    uint32_t ecx_3 = zx.d(eax_1.w)
                    
                    if (ecx_3 u< data_b809e4)
                        void* ecx_5 = ecx_3 * 0x1c30 + data_b809e0
                        
                        if (*(ecx_5 + 0x1c28) == eax_1 && ecx_5 != 0)
                            *(ecx_5 + 0x84) = 0
                            return sub_5cdee0(eax_1, ecx_5, ecx_5, arg6)
                
                return eax_1
            case 5
                eax.b = arg4 != 0
                *(edx + 0x115) = eax.b
                return eax
            case 6
                eax.b = arg4 != 0
                *(edx + 0x116) = eax.b
                return eax
            case 7
                *(edx + 0x110) = arg5
                return arg5
else
    var_8_1 = "LookupCard"
    var_c = 0x3d96
    ecx_1 = &data_871964

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_c, var_8_1)

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
