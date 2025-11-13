// 函数: sub_57ff10
// 地址: 0x57ff10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = arg2
uint32_t var_24 = esi
uint32_t eax = *(arg3 + 0x1504)

if (eax != 3 && eax != 4 && eax != 5 && eax != 6)
    eax = arg4
    TEB* fsbase
    
    if (*(*fsbase->ThreadLocalStoragePointer + 0xf010) != 0 || eax == 0x1e || eax == 0x1d)
        int32_t* ebx_7
        
        if (eax - 4 u> 0x1a)
        label_58055d:
            ebx_7 = arg5
        label_580560:
            eax = sub_573400()
            
            if (*eax == 2)
                uint32_t eax_48 = zx.d((*(eax + 0x10)).w)
                
                if (eax_48 u>= 0x320)
                    sub_591930()
                
                eax = *(eax_48 * 0x64 + arg3 + 0x1a4c)
                
                if (eax != 0)
                    void* eax_50 = sub_57fac0(eax, esi, arg3, eax)
                    int32_t eax_51 = sub_57fe50(arg4)
                    return sub_57fbc0(eax_51, esi, arg3, eax, eax_50, eax_51, ebx_7, arg6)
        else
            eax = zx.d(*(eax + &jump_table_5806a4[8]))
            int32_t var_40_1
            char* ecx
            
            switch (eax)
                case 0
                    if (esi == 0xffffffff)
                        char const* const var_3c_3 = "TriggerEventAchievement"
                        var_40_1 = 0x25ed
                        ecx = "who != PLAYER_NONE"
                        goto label_58068b
                    
                    int32_t ebx_3 = 0
                    
                    while (true)
                        int32_t ecx_4 = *(arg3 + ebx_3 + 0x45d68)
                        
                        if (ecx_4 == 0)
                            break
                        
                        void* eax_8 = esi * 0x84 + 0x45d6c + ebx_3 + arg3
                        eax = sub_57fbc0(eax_8, esi, arg3, ecx_4, eax_8, 0x14, 0, 0)
                        ebx_3 += 0x31c
                        
                        if (ebx_3 s>= 0x9b780)
                            return eax
                case 1
                    eax = sub_573400()
                    
                    if (*eax == 2)
                        int32_t* eax_46 = *(eax + 8)
                        
                        if (eax_46 == 0 || *eax_46 != 2)
                            goto label_58055d
                        
                        int32_t ecx_31 = *(eax + 0x10)
                        
                        if (eax_46[4] != 0)
                            if (ecx_31 == 0)
                                goto label_58055d
                        else if (ecx_31 != 0)
                            goto label_58055d
                        
                        if (sub_5941b0(&eax_46[4], eax + 0x10) == 0)
                            goto label_58055d
                        
                        int32_t* ecx_36 = eax_46
                        
                        if (ecx_36[3] == *(eax + 0xc))
                            goto label_58055d
                        
                        uint32_t eax_55 = zx.d((ecx_36[4]).w)
                        
                        if (eax_55 u>= 0x320)
                            sub_591930()
                            ecx_36 = eax_46
                        
                        int32_t edx_29 = *(eax_55 * 0x64 + arg3 + 0x1a4c)
                        
                        if (edx_29 == 0)
                            goto label_58055d
                        
                        int32_t var_24_3
                        
                        if (arg4 == 5)
                            var_24_3 = 0xe
                        else
                            if (arg4 != 6)
                                goto label_58055d
                            
                            var_24_3 = 0xd
                        
                        int32_t eax_60 = ecx_36[3]
                        
                        if (eax_60 == esi)
                            goto label_58055d
                        
                        void* eax_61 = sub_57fac0(eax_60, eax_60, arg3, edx_29)
                        ebx_7 = arg5
                        sub_57fbc0(eax_61, esi, arg3, edx_29, eax_61, var_24_3, ebx_7, arg6)
                        goto label_580560
                case 2
                    if (arg6 != 1)
                        char const* const var_3c_19 = "TriggerEventAchievement"
                        var_40_1 = 0x261d
                        goto label_58067c
                    
                    ebx_7 = arg5
                    uint32_t eax_20 = zx.d((*ebx_7).w)
                    
                    if (eax_20 u>= 0x320)
                        sub_591930()
                    
                    eax = *(eax_20 * 0x64 + arg3 + 0x1a4c)
                    
                    if (eax != 0)
                        void* eax_22 = sub_57fac0(eax, esi, arg3, eax)
                        int32_t eax_23 = sub_57fe50(arg4)
                        sub_57fbc0(eax_23, esi, arg3, eax, eax_22, eax_23, ebx_7, 1)
                        goto label_580560
                case 3
                    if (arg6 != 1)
                        char const* const var_3c_5 = "TriggerEventAchievement"
                        var_40_1 = 0x260b
                    label_58067c:
                        ecx = "num == 1"
                        goto label_58068b
                    
                    ebx_7 = arg5
                    uint32_t eax_14 = zx.d((*ebx_7).w)
                    
                    if (eax_14 u>= 0x320)
                        sub_591930()
                    
                    eax = eax_14 * 0x64
                    
                    if (*(eax + arg3 + 0x1a4c) != 0)
                        int32_t i = 0
                        int32_t i_5 = 0
                        
                        do
                            int32_t edx_6 = *(i + arg3 + 0x45d68)
                            
                            if (edx_6 == 0)
                                break
                            
                            void* eax_18 = esi * 0x84 + 0x45d6c + i + arg3
                            sub_57fbc0(eax_18, esi, arg3, edx_6, eax_18, 0x12, ebx_7, 1)
                            i = i_5 + 0x31c
                            i_5 = i
                        while (i s< 0x9b780)
                        
                        goto label_580560
                case 4
                    void* eax_24 = sub_573400()
                    ebx_7 = arg5
                    
                    if (*eax_24 != 2)
                        goto label_580560
                    
                    uint32_t eax_26 = zx.d((*ebx_7).w)
                    
                    if (eax_26 u>= 0x320)
                        sub_591930()
                    
                    int32_t eax_28 = *(eax_26 * 0x64 + arg3 + 0x1a4c)
                    
                    if (eax_28 == 0)
                        goto label_580560
                    
                    void* eax_29 = sub_57fac0(eax_28, esi, arg3, eax_28)
                    int32_t eax_30 = sub_57fe50(arg4)
                    sub_57fbc0(eax_30, esi, arg3, eax_28, eax_29, eax_30, ebx_7, arg6)
                    
                    if (arg4 != 9)
                        if (arg4 == 0xa)
                            int32_t i_1 = 0
                            int32_t i_6 = 0
                            
                            do
                                int32_t edx_14 = *(i_1 + arg3 + 0x45d68)
                                
                                if (edx_14 == 0)
                                    break
                                
                                void* eax_37 = esi * 0x84 + 0x45d6c + i_1 + arg3
                                sub_57fbc0(eax_37, esi, arg3, edx_14, eax_37, 0x11, ebx_7, arg6)
                                i_1 = i_6 + 0x31c
                                i_6 = i_1
                            while (i_1 s< 0x9b780)
                        
                        goto label_580560
                    
                    eax = sub_5757f0(arg4 - 9, (*(eax_24 + 0x10)).w, arg3, 0x20, 0)
                    
                    if (eax.b == 0)
                        goto label_580560
                    
                    uint32_t i_2 = 0
                    
                    if (*(arg3 + 0xd38) s> 0)
                        void* eax_38 = nullptr
                        void* var_8_2 = nullptr
                        
                        do
                            if (i_2 != esi)
                                for (int32_t j = 0; j s< 0x9b780; j += 0x31c)
                                    int32_t ecx_22 = *(j + arg3 + 0x45d68)
                                    
                                    if (ecx_22 == 0)
                                        break
                                    
                                    void* eax_41 = eax_38 + 0x45d6c + j + arg3
                                    sub_57fbc0(eax_41, i_2, arg3, ecx_22, eax_41, 0xf, arg5, arg6)
                                    eax_38 = var_8_2
                                
                                esi = var_24
                            
                            i_2 += 1
                            eax_38 += 0x84
                            var_8_2 = eax_38
                        while (i_2 s< *(arg3 + 0xd38))
                        
                        return eax_38
                case 5
                    eax = sub_573400()
                    
                    if (*eax == 2)
                        int32_t* esi_3 = *(eax + 8)
                        
                        if (esi_3 != 0 && *esi_3 == 2)
                            int32_t ecx_26 = esi_3[4]
                            
                            if (ecx_26 == *(eax + 0x10))
                                uint32_t ebx_8 = zx.d(ecx_26.w)
                                
                                if (ebx_8 u>= 0x320)
                                    sub_591930()
                                
                                eax = ebx_8 * 0x64
                                int32_t ebx_9 = *(eax + arg3 + 0x1a4c)
                                
                                if (ebx_9 != 0)
                                    void* eax_43 = sub_57fac0(eax, esi_3[3], arg3, ebx_9)
                                    int32_t eax_44 = sub_57fe50(arg4)
                                    return sub_57fbc0(eax_44, esi_3[3], arg3, ebx_9, eax_43, 
                                        eax_44, arg5, arg6)
                case 6
                    if (esi != 0xffffffff)
                        char const* const var_3c_1 = "TriggerEventAchievement"
                        var_40_1 = 0x25dc
                        ecx = "who == PLAYER_NONE"
                    label_58068b:
                        sub_63b870(eax, &data_801800, ecx, 
                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_40_1, 
                            "TriggerEventAchievement")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax = 0x13
                    void* ecx_1 = arg3 + 0x1654
                    uint32_t var_c_1 = 0x13
                    void* var_8_1 = ecx_1
                    
                    while (true)
                        int32_t ebx_2 = *ecx_1
                        
                        if (ebx_2 == 0)
                            break
                        
                        uint32_t i_3 = 0
                        
                        if (*(arg3 + 0xd38) s> 0)
                            do
                                void* eax_4 = sub_57fac0(eax, i_3, arg3, ebx_2)
                                eax = sub_57fbc0(eax_4, i_3, arg3, ebx_2, eax_4, 0x13, 0, 0)
                                i_3 += 1
                            while (i_3 s< *(arg3 + 0xd38))
                            
                            eax = var_c_1
                            ecx_1 = var_8_1
                        
                        eax += 1
                        ecx_1 += 0x10
                        var_c_1 = eax
                        var_8_1 = ecx_1
                        
                        if (eax s>= 0x21)
                            return eax
                case 7
                    if (esi != 0xffffffff)
                        char const* const var_3c_4 = "TriggerEventAchievement"
                        var_40_1 = 0x25f7
                        ecx = "who == PLAYER_NONE"
                        goto label_58068b
                    
                    eax = sub_5931d0(arg3, 0x19ff338)
                    void* ecx_6 = arg3 + 0x45d6c
                    uint32_t var_20_1 = 0
                    void* var_24_1 = ecx_6
                    
                    while (true)
                        int32_t edx_3 = *(ecx_6 - 4)
                        int32_t var_28_1 = edx_3
                        
                        if (edx_3 == 0)
                            break
                        
                        uint32_t i_4 = 0
                        uint32_t i_7 = 0
                        
                        if (*(arg3 + 0xd38) s> 0)
                            void* ebx_4 = &data_19ff33c
                            void* var_18_1 = ecx_6
                            void* esi_1 = arg3 + 0x45d6d
                            void* var_14_1 = &data_19ff33c
                            void* var_1c_1 = esi_1
                            
                            do
                                sub_57fbc0(i_4, i_4, arg3, edx_3, ecx_6, 0x15, 0, 0)
                                int32_t eax_9 = *ebx_4
                                int32_t j_1 = 0
                                int32_t var_c_2 = eax_9
                                int32_t j_2 = 0
                                void* ebx_5 = arg3 + 0x45d68
                                
                                do
                                    int32_t edx_5 = *ebx_5
                                    
                                    if (edx_5 == 0)
                                        break
                                    
                                    if (*(esi_1 - 1) != 0 && (eax_9 == 0 || *esi_1 == 0))
                                        int32_t eax_10 = *(arg3 + 0x1504)
                                        
                                        if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4
                                                && eax_10 != 6)
                                            void* ecx_8
                                            ecx_8.b = *esi_1 == 0
                                            int32_t* ecx_9
                                            ecx_9.b = var_c_2 == 0
                                            int32_t* var_5c_1 = ecx_9
                                            ecx_9.b = eax_10 == 2
                                            sub_61b1b0(eax_10, 0x26, ecx_9.b, i_7, edx_5, var_5c_1, 
                                                ecx_8, nullptr, nullptr, 0, 0, 0, 0, 0)
                                            j_1 = j_2
                                        
                                        eax_9 = var_c_2
                                        *esi_1 = 1
                                    
                                    j_1 += 1
                                    ebx_5 += 0x31c
                                    esi_1 += 0x31c
                                    j_2 = j_1
                                while (j_1 s< 0x320)
                                
                                i_4 = i_7 + 1
                                ebx_4 = var_14_1 + 0x5dd4
                                ecx_6 = var_18_1 + 0x84
                                edx_3 = var_28_1
                                esi_1 = var_1c_1 + 0x84
                                i_7 = i_4
                                var_14_1 = ebx_4
                                var_18_1 = ecx_6
                                var_1c_1 = esi_1
                            while (i_4 s< *(arg3 + 0xd38))
                            
                            ecx_6 = var_24_1
                        
                        ecx_6 += 0x31c
                        eax = var_20_1 + 1
                        var_24_1 = ecx_6
                        var_20_1 = eax
                        
                        if (eax s>= 0x320)
                            return eax
                case 8
                    goto label_58055d

return eax
