// 函数: sub_550640
// 地址: 0x550640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg3
int32_t* ecx = data_cce9bc
int32_t result = 0
int32_t* var_14 = ecx

if (eax s<= 0)
    goto label_550698

while (*(arg2 + (result << 2)) != 0)
    result += 1
    
    if (result s>= eax)
        break

if (result s< 0xf)
    ecx = var_14
label_550698:
    
    while (true)
        if ((*(arg1 + 0xc80) != 0 || *(arg1 + 0x1904) != 0) && result s< eax)
            int32_t eax_1
            int32_t edx_2
            eax_1, edx_2 = sub_58dcc0(eax, ecx, arg1, 0)
            int32_t edi_1 = 0
            int32_t ecx_3 = 0
            int32_t edi_2
            
            while (true)
                if (*(ecx_3 + &data_7bfae8) == edx_2)
                    int32_t eax_2 = edi_1 * 9
                    int32_t eax_3 = *((eax_2 << 3) + &data_7bfaec)
                    
                    if (eax_3 != 0)
                        edi_2 = *((eax_2 << 3) + &data_7bfaf0 + (sub_63ed10(var_14, eax_3) << 2))
                    else
                        edi_2 = edx_2
                    
                    break
                
                ecx_3 += 0x48
                edi_1 += 1
                
                if (ecx_3 u>= 0x3f0)
                    edi_2 = edx_2
                    break
            
            int32_t eax_5 = sub_5502f0(edi_2)
            
            if (eax_5 == 0)
                int32_t ecx_6 = *(arg1 + 0x3e8c)
                
                if (ecx_6 s< 0x320)
                    *(arg1 + (ecx_6 << 3) + 0x258c) = eax_1
                    *(arg1 + (ecx_6 << 3) + 0x2590) = edx_2
                    *(arg1 + 0x3e8c) += 1
                    eax = arg3
                    ecx = var_14
                    continue
                
                sub_63b870(eax_5, &data_801800, "deck.numRejects < MAX_CARDS", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4140, "RandomizerDeck_Reject")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            else
                ecx = var_14
                *(arg2 + (result << 2)) = edi_2
                result += 1
                eax = arg3
                continue
        
        sub_58dd90(arg1)
        break

return result
