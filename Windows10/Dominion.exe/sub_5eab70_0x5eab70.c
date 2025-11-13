// 函数: sub_5eab70
// 地址: 0x5eab70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
uint32_t eax = data_b604e0

if (eax == 0xffffffff)
    eax = 0

uint32_t esi = *(arg1 + 0x4c)

if (esi == eax)
    int32_t edx_1 = *(arg1 + 0x10)
    eax = sub_5cda30(edx_1)
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_2
    
    if (eax u> 0xf)
        var_10 = "OpenDiscardIfNecessary"
        var_14 = 0x603a
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_2 = "Halt"
    label_5eae55:
        sub_63b870(eax, &data_801800, ecx_2, var_18, var_14, var_10)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edx_3
    
    switch (eax)
        case 0
            if (*(arg1 + 4) == 5)
                void* ecx_1 = data_cc8d5c
                
                if (ecx_1 == 0)
                    var_10 = "GetClient"
                    var_14 = 0x7b
                    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                    ecx_2 = "gClient"
                    goto label_5eae55
                
                eax = *(arg1 + 0x50)
                
                if (eax == *(ecx_1 + 0x7590))
                    int32_t eax_1
                    
                    if (edx_1 == 0x79)
                        eax_1.b = *(arg1 + 0x20) != 0
                    else if (edx_1 == 6)
                        eax_1 = edx_1 - 4
                    else if (edx_1 != 0x9f)
                        if (edx_1 != 4)
                            eax_1 = 0
                        
                        if (edx_1 == 4 || edx_1 == 0x95)
                            eax_1 = 4
                        
                        if (edx_1 == 5)
                            eax_1 = 5
                    else
                        eax_1 = 3
                    
                    int32_t edx_2 = data_b80b08
                    int32_t ecx_3 = data_b80b58
                    int32_t esi_1 = data_b80b18
                    data_8db5e8 = 0x3e9
                    data_b80984 = eax_1
                    data_b8098c = ecx_3
                    
                    if (edx_2 == 0x9f)
                        ecx_3 = esi_1
                        data_b8098c = ecx_3
                    
                    eax = data_b80b54
                    data_b80994 = 0
                    data_b80990 = eax
                    data_b80988 = ecx_3
                    
                    if (edx_2 == 6)
                        data_b80988 = esi_1
                    else if (edx_2 == 0x79)
                        int32_t eax_2 = data_b80b20
                        data_b80988 = eax_2
                        return eax_2
        case 1
            edx_3 = 0x3eb
        label_5eac9b:
            int32_t var_10_1 = 0
            return sub_5cbfe0(sub_5ce6d0(eax, edx_3, esi, 0, 0, 0), 0)
        case 2
            eax = sub_5d1210(eax, 0x3ec, esi, 0, 0)
            
            if (eax != 0)
            label_5eace5:
                int32_t var_10_2 = 0
                return sub_5cbfe0(sub_5ce6d0(eax, 0x3ec, *(arg1 + 0x4c), 0, 0, 0), 0)
            
            eax = *(arg1 + 0x10)
            
            if (eax == 0xd6 || eax == 0xe4 || eax == 0x63)
                goto label_5eace5
        case 3
            int32_t var_10_3 = 0
            return sub_5cbfe0(sub_5ce6d0(eax, 2, 0xffffffff, 0, 0, 0), 0)
        case 4
            edx_3 = 0x44e
            goto label_5eac9b
        case 5
            edx_3 = 0x44d
            goto label_5eac9b
        case 6
            int32_t edi_1 = 7
            void* esi_2 = &data_b8206c
            
            while (true)
                if (edi_1 s>= 0x48)
                    eax = sub_591930()
                
                if (*esi_2 == 0x70d)
                    break
                
                if (*(esi_2 + 4) == 0x70d)
                    break
                
                esi_2 += 0x10
                edi_1 += 1
                
                if (esi_2 s>= 0xb8247c)
                    edi_1 = 0
                    break
            
            eax = sub_5d1210(eax, edi_1, 0xffffffff, 0, 0)
            
            if (eax != 0)
                return sub_5cbfe0(sub_5eaab0(0x70d), 0)
        case 7
            int32_t var_10_4 = 0
            return sub_5cbfe0(sub_5ce6d0(eax, 3, 0xffffffff, 0, 0, 0), 0)
        case 8
            edx_3 = 0x462
            goto label_5eac9b
        case 9
            edx_3 = 0x469
            goto label_5eac9b
        case 0xa
            edx_3 = 0x46b
            goto label_5eac9b
        case 0xb
            int32_t var_10_5 = 0
            return sub_5cbfe0(sub_5ce6d0(eax, 0x3ee, esi, *(arg1 + 0x30), *(arg1 + 0x34), 0), 0)
        case 0xc
            int32_t edi_2 = 7
            void* esi_3 = &data_b8206c
            
            while (true)
                if (edi_2 s>= 0x48)
                    eax = sub_591930()
                
                if (*esi_3 == 0x718)
                    break
                
                if (*(esi_3 + 4) == 0x718)
                    break
                
                esi_3 += 0x10
                edi_2 += 1
                
                if (esi_3 s>= 0xb8247c)
                    edi_2 = 0
                    break
            
            eax = sub_5d1210(eax, edi_2, 0xffffffff, 0, 0)
            
            if (eax != 0)
                return sub_5cbfe0(sub_5eaab0(0x718), 0)
        case 0xd
            edx_3 = 0x46d
            goto label_5eac9b
        case 0xe
            edx_3 = 0x44f
            goto label_5eac9b
        case 0xf
            edx_3 = 0x450
            goto label_5eac9b

return eax
