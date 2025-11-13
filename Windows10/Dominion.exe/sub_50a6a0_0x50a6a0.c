// 函数: sub_50a6a0
// 地址: 0x50a6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 == 0)
label_50ab5f:
    arg1.b = 0
    return arg1

void* eax = sub_571b30(arg3, 0x18)
arg1 = *(eax + 0x9c) & 0x940
int32_t var_38
char const* const ecx

if (((*(eax + 0x98) & 0x7f000400) | arg1) == 0)
    arg1 = data_cca780 + 0xc + (data_cca784 << 0xb)
    int32_t esi_4 = 0
    int32_t var_18_3 = arg1
    
    while (true)
        int32_t* ebx_5 = arg1 + (esi_4 << 2)
        arg1 = *ebx_5
        
        if (arg1 == arg3)
            goto label_50ab5f
        
        if (arg1 == 0)
            *ebx_5 = arg3
            char eax_49 = sub_58e890(arg3, 0)
            
            if (eax_49 == 0)
                *ebx_5 = 0
                return eax_49
            
            *ebx_5 = arg3
            *(var_18_3 + (esi_4 << 2) + 0x548) = arg5
            arg1 = data_cce9b4
            
            if (esi_4 == arg1)
                data_cce9b4 = arg1 + 1
                int32_t eax_51
                eax_51.b = 1
                return eax_51
            
            char const* const var_34_7 = "CampaignKingdomAdd"
            var_38 = 0x1b9
            ecx = "i == c.numKingdom"
            break
        
        arg1 = var_18_3
        esi_4 += 1
        
        if (esi_4 s>= 0xa)
            goto label_50ab5f
else if (arg4 s> 0)
    void* ebx_3 = data_cca780 + 0xc + (data_cca784 << 0xb)
    int32_t var_18
    var_18.q = 0
    int32_t var_20_1
    int32_t var_1c_1
    int32_t esi_1
    
    if ((*(sub_571b30(arg3, 0x17) + 0x9c) & 0x800) == 0)
        int32_t var_14
        esi_1 = var_14
        var_1c_1 = esi_1
        var_20_1 = var_18
    label_50a7b9:
        int32_t eax_7 = *(sub_571b30(arg3, 0x17) + 0x9c) & 0x40
        
        if (eax_7 != 0)
            esi_1 = 0x40
            var_20_1 = 0
            var_1c_1 = 0x40
            
            if (sub_50a640(0x80000000, 0) == 0)
                sub_50ae80(0x80000000, 0)
            
            arg1 = sub_50a640(0x80000000, 0)
        
        if (eax_7 == 0 || arg1.b != 0)
            int32_t edx_3
            
            if ((*(sub_571b30(arg3, 0x17) + 0x98) & 0x10000000) == 0)
                if ((var_20_1 | esi_1) != 0)
                    goto label_50a84d
                
            label_50a8a7:
                edx_3 = arg5
            label_50a8aa:
                int32_t i = 0
                void* ecx_14 = ebx_3 + 0x28
                
                do
                    if (*ecx_14 == arg3)
                        *(ebx_3 + (i << 2) + 0x570) |= edx_3
                        i.b = 1
                        return i
                    
                    i += 1
                    ecx_14 += 0x3c
                while (i s< 4)
                
                void* eax_19 = ebx_3 + 0x28
                int32_t esi_3 = 0
                void* var_18_2 = eax_19
                
                while (true)
                    int32_t ecx_15 = *eax_19
                    
                    if (ecx_15 == 0)
                        *eax_19 = arg3
                        int32_t eax_43 = esi_3 * 0xf
                        *(ebx_3 + (eax_43 << 2) + 0x2c) = zx.o(0)
                        *(ebx_3 + (eax_43 << 2) + 0x3c) = zx.o(0)
                        *(ebx_3 + (eax_43 << 2) + 0x4c) = zx.o(0)
                        *(ebx_3 + (eax_43 << 2) + 0x5c) = 0
                        *(ebx_3 + (esi_3 << 2) + 0x570) = arg5
                        arg1 = data_cce9b8
                        
                        if (esi_3 == arg1)
                            data_cce9b8 = arg1 + 1
                            sub_58e890(arg3, 0)
                            int32_t eax_46
                            eax_46.b = 1
                            return eax_46
                        
                        char const* const var_34_6 = "CampaignKingdomAdd"
                        var_38 = 0x18c
                        ecx = "i == c.numLandscapes"
                        break
                    
                    if ((*(sub_571b30(ecx_15, 0x17) + 0x98) & 0x10000000) != 0
                            && var_20_1 == 0x10000000 && var_1c_1 == 0)
                        if ((arg5.b & 1) == 0)
                            goto label_50ab5f
                        
                        *(ebx_3 + esi_3 * 0x3c + 0x28) = arg3
                        *(ebx_3 + (esi_3 << 2) + 0x570) = arg5
                        sub_58e890(arg3, 0)
                        int32_t eax_33
                        eax_33.b = 1
                        return eax_33
                    
                    esi_3 += 1
                    eax_19 = var_18_2 + 0x3c
                    var_18_2 = eax_19
                    
                    if (esi_3 s>= arg4)
                        arg1 = arg5
                        
                        if ((arg1.b & 1) == 0)
                            goto label_50ab5f
                        
                        if (arg4 == 4)
                            int32_t i_1 = 0
                            void* ebx_4 = ebx_3 + 0x28
                            
                            do
                                arg1 = *(sub_571b30(*ebx_4, 0x17) + 0x9c) & 0x800
                                
                                if (arg1 == 0)
                                    arg1 = *(sub_571b30(*ebx_4, arg1 + 0x17) + 0x9c) & 0x40
                                    
                                    if (arg1 == 0)
                                        *(ebx_3 + i_1 * 0x3c + 0x28) = arg3
                                        *(ebx_3 + (i_1 << 2) + 0x570) = arg5
                                        sub_58e890(arg3, 0)
                                        int32_t eax_40
                                        eax_40.b = 1
                                        return eax_40
                                
                                i_1 += 1
                                ebx_4 += 0x3c
                            while (i_1 s< 4)
                            
                            char const* const var_34_5 = "CampaignKingdomAdd"
                            var_38 = 0x1a1
                            ecx = "Halt"
                        else
                            char const* const var_34_3 = "CampaignKingdomAdd"
                            var_38 = 0x195
                            ecx = "landscapeLimit == MAX_LANDSCAPE_CARDS"
                        
                        break
            else
                var_20_1 = 0x10000000
                var_1c_1 = 0
            label_50a84d:
                edx_3 = arg5
                
                if ((edx_3.b & 1) == 0)
                    goto label_50a8aa
                
                int32_t* eax_15 = ebx_3 + 0x28
                int32_t esi_2 = 0
                int32_t* var_18_1 = eax_15
                
                while (true)
                    int32_t ecx_10 = *eax_15
                    
                    if (ecx_10 == arg3)
                        *(ebx_3 + (esi_2 << 2) + 0x570) |= arg5
                        int32_t eax_29
                        eax_29.b = 1
                        return eax_29
                    
                    if (ecx_10 == 0)
                        goto label_50a8a7
                    
                    void* eax_16 = sub_571b30(ecx_10, 0x17)
                    arg1 = *(eax_16 + 0x9c) & var_1c_1
                    
                    if (((var_20_1 & *(eax_16 + 0x98)) | arg1) != 0)
                        if ((var_20_1 != 0x10000000 || var_1c_1 != 0)
                                && (*(ebx_3 + (esi_2 << 2) + 0x570) & 1) != 0)
                            char const* const var_34_4 = "CampaignKingdomAdd"
                            var_38 = 0x14f
                            ecx = "(mission.landscapeMissionFlags[i] & "
                            "CAMPAIGNMISSIONPILEFLAG_FROM_THEME) == 0"
                            break
                        
                        int32_t eax_26 = esi_2 * 0xf
                        
                        if (*(ebx_3 + (eax_26 << 2) + 0x28) == 0x121a)
                            *(ebx_3 + 0x170) = 0
                        
                        if (*(ebx_3 + (eax_26 << 2) + 0x28) == 0x121c)
                            __builtin_memset(ebx_3 + 0x130, 0, 0x3c)
                        
                        *(ebx_3 + (eax_26 << 2) + 0x28) = arg3
                        *(ebx_3 + (eax_26 << 2) + 0x2c) = zx.o(0)
                        *(ebx_3 + (eax_26 << 2) + 0x3c) = zx.o(0)
                        *(ebx_3 + (eax_26 << 2) + 0x4c) = zx.o(0)
                        *(ebx_3 + (eax_26 << 2) + 0x5c) = 0
                        *(ebx_3 + (esi_2 << 2) + 0x570) = arg5
                        sub_58e890(arg3, 0)
                        int32_t eax_28
                        eax_28.b = 1
                        return eax_28
                    
                    esi_2 += 1
                    eax_15 = &var_18_1[0xf]
                    var_18_1 = eax_15
                    
                    if (esi_2 s>= 4)
                        goto label_50a8a7
        else
            char const* const var_34_2 = "CampaignKingdomAdd"
            var_38 = 0x13b
            ecx = "CampaignKingdomHas(LIAISON)"
    else
        esi_1 = 0x800
        var_20_1 = 0
        var_1c_1 = 0x800
        
        if (sub_50a640(0, 0x400) == 0)
            sub_50ae80(0, 0x400)
        
        arg1 = sub_50a640(0, 0x400)
        
        if (arg1.b != 0)
            goto label_50a7b9
        
        char const* const var_34_1 = "CampaignKingdomAdd"
        var_38 = 0x132
        ecx = "CampaignKingdomHas(OMEN)"
else
    char const* const var_34 = "CampaignKingdomAdd"
    var_38 = 0x126
    ecx = "landscapeLimit > 0"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_38, 
    "CampaignKingdomAdd")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
