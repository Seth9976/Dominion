// 函数: sub_5c8fd0
// 地址: 0x5c8fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* eax = data_ccea0c
int32_t var_1c
char const* const var_18
char* ecx

if (eax != 0)
    eax = eax(arg1)
    void* esi_1 = eax
    
    if (data_ccea08 != 0)
        eax = data_ccea10(arg2)
        int32_t ecx_1 = *eax
        
        if (ecx_1 == arg1)
            eax[9] = ecx_1
            void* ebx_1 = esi_1 + 4
            *eax = 0
            int32_t edi_1 = 0
            *(esi_1 + 8) = 0
            
            if (*ebx_1 s<= 0)
            label_5c907f:
                *ebx_1 -= 1
                return eax
            
            while (true)
                int32_t ecx_2 = *esi_1
                
                if (ecx_2 == 0)
                    var_18 = "PileRemove"
                    var_1c = 0x11c
                    ecx = "*cur"
                    goto label_5c90d1
                
                if (ecx_2 == arg2)
                    if (data_ccea08 != 0)
                        int32_t eax_5 = *(data_ccea10(ecx_2) + 4)
                        *esi_1 = eax_5
                        *ebx_1 -= 1
                        return eax_5
                    
                    var_18 = "GetItemData"
                    var_1c = 0x3a
                    ecx = "gPile.fnItemCompare"
                    goto label_5c90d1
                
                if (data_ccea08 == 0)
                    break
                
                eax = data_ccea10(ecx_2)
                edi_1 += 1
                esi_1 = &eax[1]
                
                if (edi_1 s>= *ebx_1)
                    goto label_5c907f
            
            goto label_5c9009
        
        var_18 = "PileRemove"
        var_1c = 0x112
        ecx = "item.pile == hPile"
    else
    label_5c9009:
        var_18 = "GetItemData"
        var_1c = 0x3a
        ecx = "gPile.fnItemCompare"
else
    var_18 = "GetPileData"
    var_1c = 0x34
    ecx = "gPile.fnGetPileData"

label_5c90d1:
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
