// 函数: sub_748780
// 地址: 0x748780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

LRESULT result = data_151345c

if (result != 0)
    if (result s<= 0)
        sub_63b870(result, &data_801800, "gUI.s.activeSetCount > 0", 
            "C:\x\ax2017\Engine\Editor\UIEditor.cpp", 0x5b2, "LowestSelectedItem")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t esi_1 = sub_744e90(data_151245c)
    int32_t edi_1 = 1
    result = data_151345c
    
    if (result s> 1)
        do
            int32_t eax_1 = sub_744e90((&data_151245c)[edi_1])
            
            if (eax_1 s< esi_1)
                esi_1 = eax_1
            
            result = data_151345c
            edi_1 += 1
        while (edi_1 s< result)
    
    int32_t ecx_3
    
    if (esi_1 != 0)
        ecx_3 = esi_1 - 1
    label_7487da:
        sub_74ae80(ecx_3)
        char* ecx_4
        ecx_4.b = 1
        sub_744ce0(ecx_4)
        sub_6f6e30(data_1512450)
        return sub_74ac70()
    
    if (result != 0)
        ecx_3 = 0
        goto label_7487da

return result
