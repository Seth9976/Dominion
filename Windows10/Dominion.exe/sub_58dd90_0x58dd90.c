// 函数: sub_58dd90
// 地址: 0x58dd90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (*(arg1 + 0x3e8c) s> 0)
    void* edx_1 = arg1 + 0x2590
    
    do
        int32_t eax_1 = *(edx_1 - 4)
        int32_t eax_2 = eax_1 - 1
        int32_t var_10
        char const* const ecx
        
        if (eax_1 == 1)
            int32_t edi_3 = *(arg1 + 0xc80)
            
            if (edi_3 s>= 0x320)
                char const* const var_c_3 = "RandomizerDeck_ReturnRejects"
                var_10 = 0x414b
                ecx = "deck.numCards < MAX_CARDS"
            label_58de74:
                sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
                    var_10, "RandomizerDeck_ReturnRejects")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            *(arg1 + (edi_3 << 2)) = *edx_1
            *(arg1 + 0xc80) += 1
        else
            int32_t temp1_1 = eax_2
            eax_2 -= 1
            
            if (temp1_1 == 1)
                int32_t edi_2 = *(arg1 + 0x1904)
                
                if (edi_2 s>= 0x320)
                    char const* const var_c_2 = "RandomizerDeck_ReturnRejects"
                    var_10 = 0x414f
                    ecx = "deck.numCardsMore < MAX_CARDS"
                    goto label_58de74
                
                *(arg1 + (edi_2 << 2) + 0xc84) = *edx_1
                *(arg1 + 0x1904) += 1
            else
                int32_t temp2_1 = eax_2
                eax_2 -= 1
                
                if (temp2_1 != 1)
                    char const* const var_c_1 = "RandomizerDeck_ReturnRejects"
                    var_10 = 0x4157
                    ecx = "Halt"
                    goto label_58de74
                
                int32_t edi_1 = *(arg1 + 0x2588)
                
                if (edi_1 s>= 0x320)
                    char const* const var_c = "RandomizerDeck_ReturnRejects"
                    var_10 = 0x4153
                    ecx = "deck.numOthers < MAX_CARDS"
                    goto label_58de74
                
                *(arg1 + (edi_1 << 2) + 0x1908) = *edx_1
                *(arg1 + 0x2588) += 1
        i += 1
        edx_1 += 8
    while (i s< *(arg1 + 0x3e8c))

*(arg1 + 0x3e8c) = 0
