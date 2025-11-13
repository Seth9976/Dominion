// 函数: sub_578a00
// 地址: 0x578a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = arg4

if ((eax.b & 0x30) == 0)
    void* eax_1 = sub_576940(eax, arg2, arg3, eax)
    
    if (*(eax_1 + 0x4c) != 2)
        sub_591930()
    
    return (*(eax_1 + 0x54))()

void* eax_4 = sub_5769e0(eax, arg2, arg3, eax)

if (*eax_4 != 6)
    sub_591930()

uint32_t eax_5
int32_t edx
eax_5, edx = sub_5916b0(arg4)
uint32_t var_8 = eax_5
uint32_t eax_6 = sub_5915b0(eax_5, edx, arg3, arg4)
uint32_t var_c = eax_6
int32_t var_28
char const* const ecx_3

if (eax_6 != 0)
    arg4:3.b = 0
    
    if (*(eax_4 + 4) != 0)
        uint32_t edx_1 = var_8
        
        if (edx_1 != 0)
            eax_6 = sub_5757f0(eax_6, edx_1.w, arg3, 0, 0x40)
            
            if (eax_6.b != 0)
                int32_t eax_7 = arg3[0x541]
                
                if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
                    sub_61b1b0(eax_7, 0x25, eax_7 == 2, arg2, var_8, var_c, nullptr, nullptr, 
                        nullptr, 0, 0, 0, 0, 0)
                
                int32_t eax_8 = arg3[0x541]
                
                if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6 && arg3[0x540].b == 0)
                    uint32_t eax_9 = arg2
                    
                    if (arg2 == arg3[0x673])
                        eax_9 = arg3[0x674]
                    
                    sub_59f9b0(eax_9, arg2, arg3, eax_9, 0x1b, 0, &var_8, 1, var_c, 0, 0, 0)
                
                eax_6 = arg3[0x541]
                
                if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6 && arg3[0x540].b == 0)
                    uint32_t eax_10 = arg2
                    
                    if (arg2 == arg3[0x673])
                        eax_10 = arg3[0x674]
                    
                    eax_6 = sub_59f9b0(eax_10, arg2, arg3, eax_10, 0x1f, 0, nullptr, 0, 0, 0, 0, 0)
                
                arg4:3.b = 1
    else
        eax_6 = arg3[0x541]
        
        if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
            eax_6 = sub_61b1b0(eax_6, 0x23, eax_6 == 2, arg2, var_8, nullptr, nullptr, nullptr, 
                nullptr, 0, 0, 0, 0, 0)
    
    if (*eax_4 == 6)
        (*(eax_4 + 0x14))()
        int32_t result = sub_573400()
        
        if (*(result + 0x34) == 0)
            uint32_t edx_4 = var_8
            
            if (edx_4 != 0)
                result = sub_5757f0(result, edx_4.w, arg3, 0, 0x40)
                
                if (result.b != 0)
                    result = arg3[0x541]
                    
                    if (result != 3 && result != 5 && result != 4 && result != 6)
                        result = sub_61b1b0(result, 0x25, result == 2, arg2, var_8, var_c, 1, 
                            nullptr, nullptr, 0, 0, 0, 0, 0)
        
        if (arg4:3.b != 0)
            result = arg3[0x541]
            
            if (result != 3 && result != 5 && result != 4 && result != 6 && arg3[0x540].b == 0)
                uint32_t eax_12 = arg2
                
                if (arg2 == arg3[0x673])
                    eax_12 = arg3[0x674]
                
                return sub_59f9b0(eax_12, arg2, arg3, eax_12, 0x20, 0, nullptr, 0, 0, 0, 0, 0)
        
        return result
    
    char const* const var_24_4 = "TriggerAbilityFn"
    var_28 = 0x1483
    ecx_3 = "Halt"
else
    char const* const var_24_3 = "TriggerAbilityFn"
    var_28 = 0x146b
    ecx_3 = "what != CARD_NONE"

sub_63b870(eax_6, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_28, 
    "TriggerAbilityFn")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
