// 函数: sub_611f30
// 地址: 0x611f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t eax
void* eax_1 = sub_5cc410(eax, arg1, 0x3eb, 0, 0)

if (eax_1 != 0)
    eax_1 = sub_5cc410(eax_1, arg1, 0x3eb, 0, 0)
    int32_t var_18
    char const* const var_14
    char* ecx
    
    if (eax_1 == 0)
        var_14 = "DomPileGet"
        var_18 = 0x9b0
        ecx = "pPile"
    label_611ffb:
        sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_18, var_14)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_1 = *(eax_1 + 0x70)
    
    if (ecx_1 != 0)
        eax_1 = zx.d(ecx_1.w)
        
        if (eax_1 u< data_b809e4)
            eax_1 = eax_1 * 0x1c30 + data_b809e0
            
            if (*(eax_1 + 0x1c28) == ecx_1 && eax_1 != 0)
                if (*(eax_1 + 0x2c) != 0)
                    var_14 = "CardIs"
                    var_18 = 0x8b1
                    ecx = "gfx.type == DOMGFX_CARD"
                    goto label_611ffb
                
                uint32_t esi_2 = zx.d((*(eax_1 + 0x98)).w)
                
                if (esi_2 u>= 0x320)
                    sub_591930()
                
                int32_t eax_3
                eax_3.b = *(esi_2 * 0x64 + &data_b82524) == 0x1309
                return eax_3

eax_1.b = 0
return eax_1
