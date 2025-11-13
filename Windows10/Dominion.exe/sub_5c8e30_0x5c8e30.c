// 函数: sub_5c8e30
// 地址: 0x5c8e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = data_ccea0c
int32_t var_24
char const* const var_20
char* ecx

if (eax != 0)
    eax = eax(arg3)
    int32_t* edi_1 = eax
    
    if (data_ccea08 != 0)
        eax = data_ccea10(arg2)
        int32_t* var_8_1 = eax
        
        if (arg2 == 0)
            var_20 = "PileAdd"
            var_24 = 0xd6
            ecx = "hItem"
        else if (*eax == 0)
            *eax = arg3
            int32_t result = arg4
            
            if (result == 0xffffffff)
                result = edi_1[1]
                
                if (result s>= 0)
                    goto label_5c8efa
                
                var_20 = "PileAdd"
                var_24 = 0xeb
                ecx = "slot >= 0"
            else if (result == 0)
                result = 0
            label_5c8efa:
                eax = edi_1[1]
                
                if (result s<= eax)
                    eax += 1
                    edi_1[2] = 0
                    int32_t i = 0
                    void* edx = edi_1
                    
                    if (eax s> 0)
                        do
                            int32_t ecx_1 = *edx
                            
                            if (i == result)
                                var_8_1[1] = ecx_1
                                eax = arg2
                                *edx = eax
                                break
                            
                            if (ecx_1 == 0)
                                var_20 = "PileAdd"
                                var_24 = 0xfb
                                ecx = "*cur"
                                goto label_5c8fb6
                            
                            if (data_ccea08 == 0)
                                goto label_5c8e6b
                            
                            eax = data_ccea10(ecx_1)
                            i += 1
                            edx = &eax[1]
                        while (i s< edi_1[1] + 1)
                    
                    edi_1[1] += 1
                    
                    if (*edi_1 != 0)
                        return result
                    
                    var_20 = "PileAdd"
                    var_24 = 0x100
                    ecx = "pileData.head != HITEM_NULL"
                else
                    var_20 = "PileAdd"
                    var_24 = 0xec
                    ecx = "slot <= pileData.numItems"
            else if (result s>= 0)
                if (result s<= edi_1[1])
                    goto label_5c8efa
                
                var_20 = "PileAdd"
                var_24 = 0xe6
                ecx = "loc <= pileData.numItems"
            else
                var_20 = "PileAdd"
                var_24 = 0xe5
                ecx = "loc >= 0"
        else
            var_20 = "PileAdd"
            var_24 = 0xd8
            ecx = "item.pile == HPILE_NULL"
    else
    label_5c8e6b:
        var_20 = "GetItemData"
        var_24 = 0x3a
        ecx = "gPile.fnItemCompare"
else
    var_20 = "GetPileData"
    var_24 = 0x34
    ecx = "gPile.fnGetPileData"

label_5c8fb6:
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
