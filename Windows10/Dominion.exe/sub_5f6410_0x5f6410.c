// 函数: sub_5f6410
// 地址: 0x5f6410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
void* edi = arg2
void* var_18 = edi
int32_t eax = *esi
char* eax_12
void* var_14
char* var_c

if (eax == 1)
    void* eax_20 = sub_571b30(esi[1], *(arg3 + 0x28))
    
    if (((*(eax_20 + 0x98) & 0x47004810) | (*(eax_20 + 0x9c) & 0x70200)) == 0)
        int32_t eax_22 = esi[1]
        eax_12 = sub_4daf40(&var_14, &var_c)
        int32_t esi_3 = 0
        var_c = eax_12
        
        if (eax_12 s> 0)
            while (sub_4db7a0(*(var_14 + (esi_3 << 2)), eax_22) == 0)
                esi_3 += 1
                
                if (esi_3 s>= var_c)
                    return 1
            
            int32_t eax_25 = sub_5cf7e0()
            int32_t* esi_4 = arg4
            int32_t ecx_27 = *esi_4
            
            if (ecx_27 != 1)
                if (ecx_27 != 3)
                    goto label_5f67ba
                
                int32_t ecx_30 = esi_4[3]
                int32_t eax_26 = esi_4[2]
                
                if (ecx_30 u> 0 || (ecx_30 u>= 0 && eax_26 u> 0x20000000))
                    if (eax_26 != 0 || (ecx_30 != 0x40 && (eax_26 != 0 || ecx_30 != 0x100)))
                        goto label_5f67ba
                    
                    goto label_5f6752
                
                if ((eax_26 != 0x20000000 || ecx_30 != 0) && (eax_26 != 0x400 || ecx_30 != 0)
                        && (eax_26 != 0x8000000 || ecx_30 != 0)
                        && (eax_26 != 0x10000000 || ecx_30 != 0))
                    goto label_5f67ba
                
                goto label_5f6752
            
            void* eax_30 = sub_571b30(esi_4[1], eax_25)
            
            if (((*(eax_30 + 0x98) & 0x7f000400) | (*(eax_30 + 0x9c) & 0x940)) != 0)
            label_5f6752:
                int32_t eax_27 = *esi_4
                
                if (eax_27 != 1)
                    if (eax_27 != 3 || esi_4[2] != eax_27 - 3 || esi_4[3] != 0x40)
                        goto label_5f688a
                    
                    goto label_5f681c
                
                int32_t esi_5
                
                if ((*(sub_571b30(esi_4[1], *(arg3 + 0x28)) + 0x9c) & 0x40) == 0)
                label_5f688a:
                    int32_t eax_44 = *esi_4
                    
                    if (eax_44 == 1)
                        if ((*(sub_571b30(esi_4[1], *(arg3 + 0x28)) + 0x9c) & 0x800) != 0)
                        label_5f68d6:
                            esi_5 = 0
                            void* edi_2 = edi + 0xa8
                            char* ecx_48 = *(arg3 + 0x28)
                            var_c = ecx_48
                            
                            while (true)
                                int32_t eax_51 = *(edi_2 - 8)
                                
                                if (eax_51 != 0)
                                    if (eax_51 == 1)
                                        if ((*(sub_571b30(*(edi_2 - 4), ecx_48) + 0x9c) & 0x800)
                                                != 0)
                                            goto label_5f684e
                                        
                                        ecx_48 = var_c
                                    else if (eax_51 == 3 && *edi_2 == eax_51 - 3
                                            && *(edi_2 + 4) == 0x800)
                                        goto label_5f684e
                                    
                                    esi_5 += 1
                                    edi_2 += 0x48
                                    
                                    if (esi_5 s< 4)
                                        continue
                                
                                esi_4 = arg4
                                break
                    else if (eax_44 == 3 && esi_4[2] == eax_44 - 3 && esi_4[3] == 0x800)
                        goto label_5f68d6
                    
                    eax_12 = nullptr
                    void* ecx_52 = var_18 + 0xa0
                    
                    while (*ecx_52 != 0)
                        eax_12 = &eax_12[1]
                        ecx_52 += 0x48
                        
                        if (eax_12 s>= 4)
                            eax_12.b = 1
                            return eax_12
                    
                    if (eax_12 s>= 0)
                        *(var_18 + eax_12 * 0x48 + 0xa0) = *esi_4
                        sub_4e4cb0(arg3)
                else
                label_5f681c:
                    esi_5 = 0
                    void* edi_1 = edi + 0xa8
                    char* ecx_40 = *(arg3 + 0x28)
                    var_c = ecx_40
                    
                    while (true)
                        int32_t eax_38 = *(edi_1 - 8)
                        
                        if (eax_38 != 0)
                            if (eax_38 == 1)
                                if ((*(sub_571b30(*(edi_1 - 4), ecx_40) + 0x9c) & 0x40) != 0)
                                label_5f684e:
                                    break
                                
                                ecx_40 = var_c
                            else if (eax_38 == 3 && *edi_1 == eax_38 - 3 && *(edi_1 + 4) == 0x40)
                                goto label_5f684e
                            
                            esi_5 += 1
                            edi_1 += 0x48
                            
                            if (esi_5 s< 4)
                                continue
                        
                        esi_4 = arg4
                        edi = var_18
                        goto label_5f688a
                    
                    *(var_18 + esi_5 * 0x48 + 0xa0) = *arg4
                    sub_4e4cb0(arg3)
            else
            label_5f67ba:
                eax_12 = nullptr
                void* ecx_35 = edi
                
                while (*ecx_35 != 0)
                    eax_12 = &eax_12[1]
                    ecx_35 += 0x10
                    
                    if (eax_12 s>= 0xa)
                        eax_12.b = 1
                        return eax_12
                
                if (eax_12 s>= 0)
                    *(edi + eax_12 * 0x10) = *esi_4
                    sub_4e4cb0(arg3)
                    char* eax_34
                    eax_34.b = 1
                    return eax_34
else
    if (eax != 2)
        int32_t eax_3 = eax - 3
        int32_t var_30
        
        if (eax == 3)
            int32_t ecx = esi[3]
            eax_3 = esi[2]
            
            if (ecx u<= 0 && (ecx u< 0 || eax_3 u<= 0x20000000))
                if (eax_3 == 0x20000000 && ecx == 0)
                    int32_t eax_4 = *(edi + 0xbdc)
                    int32_t ecx_2 = *(edi + 0xbd8) + 1
                    *(edi + 0xbd8) = ecx_2
                    
                    if (ecx_2 s<= eax_4)
                        ecx_2 = eax_4
                    
                    *(edi + 0xbdc) = ecx_2
                    goto label_5f6595
                
                if (eax_3 == 0x400 && ecx == 0)
                    int32_t eax_5 = *(edi + 0xbd4)
                    int32_t ecx_4 = *(edi + 0xbd0) + 1
                    *(edi + 0xbd0) = ecx_4
                    
                    if (ecx_4 s<= eax_5)
                        ecx_4 = eax_5
                    
                    *(edi + 0xbd4) = ecx_4
                    goto label_5f6595
                
                if (eax_3 == 0x8000000 && ecx == 0)
                    int32_t eax_6 = *(edi + 0xbe4)
                    int32_t ecx_6 = *(edi + 0xbe0) + 1
                    *(edi + 0xbe0) = ecx_6
                    
                    if (ecx_6 s<= eax_6)
                        ecx_6 = eax_6
                    
                    *(edi + 0xbe4) = ecx_6
                    goto label_5f6595
                
                if (eax_3 == 0x10000000 && ecx == 0)
                    int32_t eax_7 = *(edi + 0xbec)
                    int32_t ecx_8 = *(edi + 0xbe8) + 1
                    *(edi + 0xbe8) = ecx_8
                    
                    if (ecx_8 s<= eax_7)
                        ecx_8 = eax_7
                    
                    *(edi + 0xbec) = ecx_8
                    goto label_5f6595
            else if (eax_3 == 0)
                if (ecx == 0x40)
                    *(edi + 0xbf8) = 1
                label_5f6595:
                    sub_5f6360(edi + 0xbc8, edi + 0x9c8)
                    sub_4e4cb0(arg3)
                    char* eax_10
                    eax_10.b = 0
                    return eax_10
                
                if (eax_3 == 0)
                    if (ecx == 0x100)
                        int32_t eax_8 = *(edi + 0xbf4)
                        int32_t ecx_10 = *(edi + 0xbf0) + 1
                        *(edi + 0xbf0) = ecx_10
                        
                        if (ecx_10 s<= eax_8)
                            ecx_10 = eax_8
                        
                        *(edi + 0xbf4) = ecx_10
                        goto label_5f6595
                    
                    if (eax_3 == 0 && ecx == 0x800)
                        *(edi + 0xbf9) = 1
                        goto label_5f6595
            
            char const* const var_2c_1 = "GameCreateAddCard"
            var_30 = 0x80f7
        else
            char const* const var_2c = "GameCreateAddCard"
            var_30 = 0x8100
        
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_30, "GameCreateAddCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_11 = esi[2]
    
    if (eax_11 == 2)
    label_5f660b:
        void* edx_4 = edi + 0x9c8
        int32_t esi_2 = esi[2]
        int32_t ecx_15 = 0
        int32_t var_10_2 = 0
        var_14 = nullptr
        
        while (true)
            int32_t eax_15 = *edx_4
            
            if (eax_15 != 0)
                if (eax_15 == esi_2)
                    break
                
                ecx_15 += 1
                edx_4 += 0x10
                
                if (ecx_15 s< 0x20)
                    continue
            
            edx_4 = (ecx_15 << 4) + 0x9c8 + edi
            int32_t eax_17 = (ecx_15 + 0x9d) * 2
            *edx_4 = zx.o(0)
            *(edi + (eax_17 << 3)) = var_10_2
            void* ecx_17 = var_14
            *edx_4 = esi_2
            *(edi + (eax_17 << 3) + 4) = ecx_17
            break
        
        int32_t ecx_19 = *(edx_4 + 8) + 1
        bool cond:1 = ecx_19 s<= *(edx_4 + 0xc)
        *(edx_4 + 8) = ecx_19
        
        if (cond:1)
            ecx_19 = *(edx_4 + 0xc)
        
        *(edx_4 + 0xc) = ecx_19
        sub_4e4cb0(arg3)
        char* eax_19
        eax_19.b = 0
        return eax_19
    
    eax_12 = sub_4daf40(&var_14, &var_c)
    int32_t esi_1 = 0
    
    if (eax_12 s> 0)
        while (true)
            if (sub_4db700(*(var_14 + (esi_1 << 2)), eax_11) != 0)
                esi = arg4
                break
            
            esi_1 += 1
            
            if (esi_1 s>= eax_12)
                return 1
        
        goto label_5f660b
eax_12.b = 1
return eax_12
