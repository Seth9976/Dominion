// 函数: sub_5cb0f0
// 地址: 0x5cb0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1

if (arg1 - 1 u> 9)
    return 

char const* const var_18
int32_t var_14
char const* const var_10
void* eax
char* ecx_1
void* i_1

switch (arg1)
    case 1
        sub_614ca0()
        void* i = data_b809e0
        
        for (eax = data_b809e4 * 0x1c30 + i; i u< eax; i += 0x1c30)
            if ((*(i + 0x1c28) & 0xffff0000) != 0)
                while (i != 0xffffffff)
                    if (*(i + 0x2c) == 3 && *(i + 0x30) == arg2)
                        sub_5d09f0(i, 1)
                        return 
                    
                    i += 0x1c30
                    
                    if (i u>= eax)
                        break
                    
                    while ((*(i + 0x1c28) & 0xffff0000) == 0)
                        i += 0x1c30
                        
                        if (i u>= eax)
                            goto label_5cb2f6
                
                break
        
    label_5cb2f6:
        var_10 = "GetPile"
        var_14 = 0x74e
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_1 = "Halt"
        goto label_5cb4a7
    case 2, 4, 0xa
        sub_614ca0()
    case 3
        sub_614ca0()
        int32_t edx_2 = data_b809e4
        void* i_3 = data_b809e0
        i_1 = i_3
        
        for (eax = edx_2 * 0x1c30 + i_1; i_1 u< eax; i_1 += 0x1c30)
            if ((*(i_1 + 0x1c28) & 0xffff0000) != 0)
                while (i_1 != 0xffffffff)
                    if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa4) == 0x3ea)
                        if (sub_5cbb20(i_1) == arg2)
                            int32_t eax_8 = data_b604e0
                            
                            if (eax_8 == 0xffffffff)
                                eax_8 = 0
                            
                            if (*(i_1 + 0xa0) == eax_8)
                                goto label_5cb1dd
                        
                        edx_2 = data_b809e4
                        i_3 = data_b809e0
                    
                    i_1 += 0x1c30
                    eax = edx_2 * 0x1c30 + i_3
                    
                    if (i_1 u>= eax)
                        break
                    
                    while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                        i_1 += 0x1c30
                        
                        if (i_1 u>= eax)
                            goto label_5cb2a1
                
                break
        
    label_5cb2a1:
        var_10 = "GetCardInHand"
        var_14 = 0x769
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_1 = "Halt"
        goto label_5cb4a7
    case 5
        sub_614ca0()
        int32_t edx_4 = data_b809e4
        void* i_4 = data_b809e0
        i_1 = i_4
        
        for (eax = edx_4 * 0x1c30 + i_1; i_1 u< eax; i_1 += 0x1c30)
            if ((*(i_1 + 0x1c28) & 0xffff0000) != 0)
                while (i_1 != 0xffffffff)
                    if (*(i_1 + 0x2c) == 0)
                        if (sub_5cbb20(i_1) == arg2)
                        label_5cb1dd:
                            sub_5d0ab0(i_1, 1)
                            return 
                        
                        edx_4 = data_b809e4
                        i_4 = data_b809e0
                    
                    i_1 += 0x1c30
                    eax = edx_4 * 0x1c30 + i_4
                    
                    if (i_1 u>= eax)
                        break
                    
                    while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                        i_1 += 0x1c30
                        
                        if (i_1 u>= eax)
                            goto label_5cb3f0
                
                break
        
    label_5cb3f0:
        var_10 = "GetCardAnywhere"
        var_14 = 0x783
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_1 = "Halt"
        goto label_5cb4a7
    case 8
        eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        void* ecx_11 = data_cc8d5c
        
        if (ecx_11 == 0)
        label_5cb491:
            var_10 = "GetClient"
            var_14 = 0x7b
            ecx_1 = "gClient"
            var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        label_5cb4a7:
            sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (*(ecx_11 + 0x5068) != 0)
            int32_t ecx_13 = sub_4b93f0()[7] - 0x65
            
            if (ecx_13 s<= 8)
                int32_t eax_17 = *(eax + 0x42d0)
                
                if (eax_17 s<= ecx_13 + 1)
                    eax_17 = ecx_13 + 1
                
                *(eax + 0x42d0) = eax_17
            
            data_cc8dc8
            eax = sub_4d8ad0(eax)
            ecx_11 = data_cc8d5c
        
        if (ecx_11 == 0)
            goto label_5cb491
        
        *(ecx_11 + 0x5044) = 7
        *(ecx_11 + 0x5064) = 0
        *(ecx_11 + 0x5060) = 0
    case 9
        sub_614ca0()
        int32_t edx = data_b809e4
        void* i_2 = data_b809e0
        i_1 = i_2
        
        for (eax = edx * 0x1c30 + i_1; i_1 u< eax; i_1 += 0x1c30)
            if ((*(i_1 + 0x1c28) & 0xffff0000) != 0)
                while (i_1 != 0xffffffff)
                    if (*(i_1 + 0x2c) == 0)
                        if (sub_5cbb20(i_1) == arg2)
                            int32_t eax_3 = data_b604e0
                            
                            if (eax_3 == 0xffffffff)
                                eax_3 = 0
                            
                            if (*(i_1 + 0xa0) == eax_3 && *(i_1 + 0xa4) == 0x3e9)
                                goto label_5cb1dd
                        
                        edx = data_b809e4
                        i_2 = data_b809e0
                    
                    i_1 += 0x1c30
                    eax = edx * 0x1c30 + i_2
                    
                    if (i_1 u>= eax)
                        break
                    
                    while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                        i_1 += 0x1c30
                        
                        if (i_1 u>= eax)
                            goto label_5cb146
                
                break
        
    label_5cb146:
        var_10 = "GetCardInPlay"
        var_14 = 0x777
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_1 = "Halt"
        goto label_5cb4a7
