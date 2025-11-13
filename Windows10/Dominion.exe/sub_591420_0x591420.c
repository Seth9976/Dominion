// 函数: sub_591420
// 地址: 0x591420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *((arg2 << 5) + arg1 + 0x152c8)

if (eax s<= 0xb00)
    if (eax == 0xb00)
        return 0xb27
    
    if (eax s> 0x600)
        if (eax == 0x601 || eax == 0xa00)
            goto label_59144c
        
        goto label_5914ec
    
    if (eax == 0x600)
        return 0x603
    
    int32_t eax_1 = eax - 0x400
    
    if (eax == 0x400)
        return 0x400
    
    eax = eax_1 - 1
    
    if (eax_1 != 1)
        goto label_5914ec
    
    goto label_59144c

if (eax s> 0xc00)
    int32_t temp0_1 = eax
    eax -= 0xe00
    int32_t var_8
    
    if (temp0_1 == 0xe00)
    label_59144c:
        char const* const var_4 = "TokenCardSource"
        var_8 = 0x4cd6
    else
        int32_t temp1_1 = eax
        eax -= 1
        
        if (temp1_1 == 1)
            char const* const var_4_2 = "TokenCardSource"
            var_8 = 0x4cd0
        else
        label_5914ec:
            char const* const var_4_1 = "TokenCardSource"
            var_8 = 0x4cd3
    
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_8, 
        "TokenCardSource")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

if (eax == 0xc00)
    return 0xc22

eax -= 0xb01

if (eax u> 9)
    goto label_5914ec

switch (eax)
    case 0, 6, 7, 8
        goto label_59144c
    case 1
        return 0xb30
    case 2
        return 0xb2f
    case 3
        return 0xb31
    case 4
        return 0xb2e
    case 5
        return 0xb2c
    case 9
        return 0xb27
