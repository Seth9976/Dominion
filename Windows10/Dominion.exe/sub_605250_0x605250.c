// 函数: sub_605250
// 地址: 0x605250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_14 = data_b7d424
int32_t var_8
uint32_t eax
char const* const ecx

if (eax_14 == 1)
    int32_t edx_6 = data_b7d434
    
    if (edx_6 == 0)
        eax.b = 0
        return eax
    
    eax = zx.d(edx_6.w)
    
    if (eax u>= data_b809e4)
        eax.b = 0
        return eax
    
    eax = eax * 0x1c30 + data_b809e0
    
    if (*(eax + 0x1c28) != edx_6 || eax == 0)
        eax.b = 0
        return eax
    
    if (*(eax + 0x2c) == 1)
        eax = *(eax + 0x178)
        
        if (eax != 0)
            int32_t eax_13
            eax_13.b = sub_5ee900(eax, arg1) != 0
            return eax_13
        
        eax.b = 0
        return eax
    
    char const* const var_4_3 = "CanSwipe"
    var_8 = 0x99ee
    ecx = "gfxZoom->type == DOMGFX_CARD_PLACEHOLDER"
else
    eax = eax_14 - 2
    
    if (eax_14 == 2)
        if (arg1 == 0)
            eax.b = data_b7f4c4 s> arg1
            return eax
        
        if (arg1 == 1)
            int32_t ecx_4 = data_b7fccc + 0x3e
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = muls.dp.d(0x82082083, ecx_4)
            int32_t edx_5 = (edx_3 + ecx_4) s>> 5
            int32_t eax_10
            eax_10.b = data_b7f4c4 s< (edx_5 u>> 0x1f) - 1 + edx_5
            return eax_10
        
        char const* const var_4_2 = "CanSwipe"
        var_8 = 0x99fe
        ecx = "Halt"
    else
        uint32_t temp2_1 = eax
        eax -= 1
        
        if (temp2_1 == 1)
            if (arg1 == 0)
                eax.b = data_b7f4c8 s> arg1
                return eax
            
            if (arg1 == 1)
                int32_t eax_1
                int32_t edx_1
                edx_1:eax_1 = muls.dp.d(0x2aaaaaab, data_b7f4bc + 0xb)
                int32_t edx_2 = edx_1 s>> 1
                int32_t eax_5
                eax_5.b = data_b7f4c8 s< (edx_2 u>> 0x1f) - 1 + edx_2
                return eax_5
            
            char const* const var_4_1 = "CanSwipe"
            var_8 = 0x99f8
            ecx = "Halt"
        else
            char const* const var_4 = "CanSwipe"
            var_8 = 0x9a00
            ecx = "Halt"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_8, 
    "CanSwipe")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
