// 函数: sub_62bc20
// 地址: 0x62bc20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = arg1
int32_t var_28
char const* const ecx

if (eax != arg2)
    uint32_t eax_1 = sub_5cba00(eax)
    eax = sub_5cba00(arg2)
    
    if (*(eax_1 + 0x2c) == 0)
        if (*(eax + 0x2c) == 0)
            int32_t eax_2 = sub_5cbb20(eax_1)
            char* eax_3 = sub_5cbb20(eax)
            char* var_c = eax_3
            
            if (*(eax_1 + 0xa4) == 2)
                goto label_62bd01
            
            char var_e_1
            void var_d
            
            if (*(eax_1 + 0x114) == 0)
                eax_3 = sub_5e3790(eax_1, &var_d)
                var_e_1 = 0
            
            if (*(eax_1 + 0x114) != 0 || eax_3.b == 0)
                var_e_1 = 1
            
            if (*(eax + 0x114) == 0)
                eax_3 = sub_5e3790(eax, &var_d)
            
            if (*(eax + 0x114) != 0 || eax_3.b == 0)
                eax_3.b = 1
            else
                eax_3.b = 0
            
            if (var_e_1 == 0)
                if (eax_3.b != 0)
                    return 1
                
                eax_3 = var_c
            label_62bd01:
                
                if (eax_2 != eax_3)
                    if (arg3 != 3)
                        return ((zx.d(sub_58d5a0(eax_2, eax_3)) ^ 1) << 1) + 0xffffffff
                    
                    return ((zx.d(sub_5f1d60(eax_2, eax_3)) ^ 1) << 1) + 0xffffffff
                
                int32_t ecx_7 = *(eax_1 + 0xd4)
                int32_t edx_3 = data_b809e4
                
                if (ecx_7 != 0)
                    eax_3 = zx.d(ecx_7.w)
                
                int32_t eax_13
                
                if (ecx_7 != 0 && eax_3 u< edx_3
                        && *(eax_3 * 0x1c30 + data_b809e0 + 0x1c28) == ecx_7)
                    eax_13.b = arg1 s>= arg2
                    return (eax_13 << 1) + 0xffffffff
                
                int32_t ecx_8 = *(eax + 0xd4)
                
                if (ecx_8 != 0)
                    eax_3 = zx.d(ecx_8.w)
                    
                    if ((eax_3 u< edx_3 && *(eax_3 * 0x1c30 + data_b809e0 + 0x1c28) == ecx_8)
                            || eax_2 == 0x1121 || *(eax_1 + 0x105) != 0 || *(eax + 0x105) != 0
                            || *(eax_1 + 0x100) s> 1 || *(eax + 0x100) s> 1)
                        eax_13.b = arg1 s>= arg2
                        return (eax_13 << 1) + 0xffffffff
                else if (eax_2 == 0x1121 || *(eax_1 + 0x105) != 0 || *(eax + 0x105) != 0
                        || *(eax_1 + 0x100) s> 1 || *(eax + 0x100) s> 1)
                    eax_13.b = arg1 s>= arg2
                    return (eax_13 << 1) + 0xffffffff
                
                eax_3.b = *(eax_1 + 0x114)
                char temp0_1 = *(eax + 0x114)
                
                if (eax_3.b u>= temp0_1)
                    if (eax_3.b u> temp0_1)
                        return 1
                    
                    eax_3.b = *(eax_1 + 0x116)
                    char temp1_1 = *(eax + 0x116)
                    
                    if (eax_3.b u>= temp1_1)
                        if (eax_3.b u> temp1_1)
                            return 1
                        
                        int32_t eax_7 = *(eax_1 + 0x10c)
                        int32_t temp2_1 = *(eax + 0x10c)
                        
                        if (eax_7 s>= temp2_1)
                            if (eax_7 s> temp2_1)
                                return 1
                            
                            int32_t eax_8 = *(eax_1 + 0x110)
                            int32_t temp3_1 = *(eax + 0x110)
                            
                            if (eax_8 s>= temp3_1)
                                if (eax_8 s> temp3_1)
                                    return 1
                                
                                eax_8.b = *(eax_1 + 0x104)
                                ecx_8.b = *(eax + 0x104)
                                bool c_1 = ecx_8.b u< eax_8.b
                                
                                if (ecx_8.b == eax_8.b || c_1)
                                    return neg.d(sbb.d(eax_8, eax_8, c_1))
            else if (eax_3.b != 0)
                return 0
            
            return 0xffffffff
        
        char const* const var_24_3 = "DomCardCompare"
        var_28 = 0x10473
        ecx = "gfx1.type == DOMGFX_CARD"
    else
        char const* const var_24_1 = "DomCardCompare"
        var_28 = 0x10472
        ecx = "gfx0.type == DOMGFX_CARD"
else
    char const* const var_24 = "DomCardCompare"
    var_28 = 0x1046e
    ecx = "h0 != h1"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_28, 
    "DomCardCompare")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
