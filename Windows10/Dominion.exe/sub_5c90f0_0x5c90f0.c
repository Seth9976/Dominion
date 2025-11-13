// 函数: sub_5c90f0
// 地址: 0x5c90f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_5c9240(arg3, arg2)
void* result = data_ccea0c
int32_t var_20
char const* const var_1c_1
char* ecx

if (result != 0)
    result = result(arg3)
    void* result_1 = result
    int32_t ebx_1 = 0
    int32_t edi_1 = *(result + 8)
    
    if (edi_1 == 0)
    label_5c91db:
        
        if (ebx_1 == *(result + 0xc))
            return result
        
        var_1c_1 = "PileUpdateStacking"
        var_20 = 0x152
        ecx = "idxStack == pileData.numStacks"
    else
        while (data_ccea08 != 0)
            result = data_ccea10(edi_1)
            int32_t esi_1 = edi_1
            
            while (true)
                if (data_ccea08 == 0)
                    goto label_5c91e2
                
                void* eax_1 = data_ccea10(esi_1)
                *(eax_1 + 0x28) = *(eax_1 + 0x1c)
                *(eax_1 + 0x2c) = *(eax_1 + 0x20)
                int32_t ecx_2
                ecx_2.b = esi_1 == edi_1
                *(eax_1 + 0x18) = ecx_2.b
                *(eax_1 + 0x1c) = ebx_1
                result = *(result_1 + 0xc)
                *(eax_1 + 0x20) = result
                *(eax_1 + 0x10) = edi_1
                
                if (ebx_1 s>= *(result_1 + 0xc))
                    var_1c_1 = "PileUpdateStacking"
                    var_20 = 0x147
                    ecx = "idxStack < pileData.numStacks"
                    goto label_5c9221
                
                if (data_ccea08 == 0)
                    goto label_5c91e2
                
                result = data_ccea10(esi_1)
                esi_1 = *(result + 8)
                
                if (esi_1 == 0)
                    ebx_1 += 1
                    
                    if (data_ccea08 == esi_1)
                        goto label_5c91e2
                    
                    result = data_ccea10(edi_1)
                    edi_1 = *(result + 0x14)
                    
                    if (edi_1 != 0)
                        break
                    
                    result = result_1
                    goto label_5c91db
        
    label_5c91e2:
        var_1c_1 = "GetItemData"
        var_20 = 0x3a
        ecx = "gPile.fnItemCompare"
else
    var_1c_1 = "GetPileData"
    var_20 = 0x34
    ecx = "gPile.fnGetPileData"

label_5c9221:
sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", var_20, 
    var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
