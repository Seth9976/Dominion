// 函数: sub_58f190
// 地址: 0x58f190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t var_10 = arg2
void* ebx = arg3
int32_t result_1 = 0
void* esi = data_cce9c0
void* var_18 = ebx

if (arg4 s> 0)
    while (true)
        int32_t ecx = data_cce9b4
        result = *(arg2 + (result << 2))
        int32_t result_2 = result
        
        if (ecx == 0xa)
            break
        
        if ((*(ebx + 0x16f4) & result) != 0)
            int32_t i = 0
            char var_5_1 = 0
            
            if (ecx s> 0)
                do
                    bool cond:0_1 =
                        sub_58d980(result, *(data_cce9c4 + (i << 2)), data_cce9b0, result) != 0
                    result = result_2
                    
                    if (cond:0_1)
                        var_5_1 = 1
                        break
                    
                    i += 1
                while (i s< data_cce9b4)
            
            int32_t i_1 = 0
            
            if (data_cce9b8 s> 0)
                int32_t ebx_1 = 0
                
                do
                    if (sub_58d980(result, *(ebx_1 + data_cce9c4 + 0x28), data_cce9b0, result) != 0)
                        goto label_58f341
                    
                    result = result_2
                    i_1 += 1
                    ebx_1 += 0x3c
                while (i_1 s< data_cce9b8)
            
            if (var_5_1 == 0)
                while (true)
                    if (*(esi + 0xc80) != 0 || *(esi + 0x1904) != 0)
                        int32_t eax_2
                        int32_t edx_5
                        eax_2, edx_5 = sub_58dcc0(result, data_cce9bc, esi, 0)
                        
                        if (sub_58d980(eax_2, edx_5, data_cce9b0, result_2) == 0)
                            result = *(esi + 0x3e8c)
                            
                            if (result s>= 0x320)
                                goto label_58f378
                            
                            *(esi + (result << 3) + 0x258c) = eax_2
                            *(esi + (result << 3) + 0x2590) = edx_5
                            *(esi + 0x3e8c) += 1
                            continue
                        
                        void* eax_4 = sub_571b30(edx_5, data_cce9b0)
                        
                        if (((*(eax_4 + 0x98) & 0x7f000400) | (*(eax_4 + 0x9c) & 0x940)) == 0)
                            if (sub_58efc0(edx_5) == 0)
                                result = *(esi + 0x3e8c)
                                
                                if (result s>= 0x320)
                                label_58f378:
                                    sub_63b870(result, &data_801800, "deck.numRejects < MAX_CARDS", 
                                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4140, 
                                        "RandomizerDeck_Reject")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                *(esi + (result << 3) + 0x258c) = eax_2
                                *(esi + (result << 3) + 0x2590) = edx_5
                                *(esi + 0x3e8c) += 1
                        else
                            sub_58f080(edx_5, 0)
                    
                    sub_58dd90(esi)
                    break
            
        label_58f341:
            arg2 = var_10
        
        result = result_1 + 1
        result_1 = result
        
        if (result s>= arg4)
            break
        
        ebx = var_18

return result
