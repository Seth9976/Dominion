// 函数: sub_692c20
// 地址: 0x692c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg2
char** var_c = eax
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx

if (arg4 == 0)
    var_24 = "TranslationAddParticle"
    var_28 = 0x7dc
    var_2c = "C:\x\ax2017\Engine\Localization.cpp"
    ecx = "particleStyle != TRANSLATIONPARTICLE_DEFAULT"
label_693032:
    sub_63b870(eax, &data_801800, ecx, var_2c, var_28, var_24)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

if (arg3 == 0x11)
    char* ebx_1 = *eax
    char* const esi_1 = &data_801800
    char var_5_1 = 0
    
    if (ebx_1 != 0)
        esi_1 = ebx_1
    
    int32_t* edi_1 = nullptr
    arg3.b = *esi_1
    
    if (arg3.b != 0)
        while (true)
            if (arg3.b u< 0x80)
            label_692c96:
                char* const var_10 = esi_1
                eax = sub_5a0d00(&var_10)
                
                if (eax == 0x7b)
                    var_5_1 = 1
                else if (eax == 0x7d)
                    var_5_1 = 0
                else if (var_5_1 == 0)
                    edi_1 = eax
                
                char ecx_2 = *esi_1
                var_10 = esi_1
                
                if (ecx_2 u< 0x80)
                label_692ce4:
                    eax, arg3 = sub_5a0d00(&var_10)
                    esi_1 = var_10
                    arg3.b = *esi_1
                    
                    if (arg3.b == 0)
                        break
                    
                    continue
                else
                    eax.b = ecx_2
                    eax.b &= 0xe0
                    
                    if (eax.b == 0xc0)
                        goto label_692ce4
                    
                    eax.b = ecx_2
                    eax.b &= 0xf0
                    
                    if (eax.b == 0xe0 || (ecx_2 & 0xf8) == 0xf0)
                        goto label_692ce4
                    
                    var_24 = "Xutf8_next"
                    var_28 = 0x222
            else
                eax.b = arg3.b
                eax.b &= 0xe0
                
                if (eax.b == 0xc0)
                    goto label_692c96
                
                eax.b = arg3.b
                eax.b &= 0xf0
                
                if (eax.b == 0xe0)
                    goto label_692c96
                
                arg3.b &= 0xf8
                
                if (arg3.b == 0xf0)
                    goto label_692c96
                
                var_24 = "Xutf8_peek_next"
                var_28 = 0x21c
            
            ecx = "!Xutf8_is_invalid_lead_char(str)"
            var_2c = "C:\x\ax2017\Engine\Xutf8.cpp"
            goto label_693032
    
    if (arg4 == 2)
        if (&edi_1[-0x2b00] u<= 0x2ba3 && &edi_1[-0x2b00] != &edi_1[-0x2b00] s/ 0x1c * 0x1c)
            if (ebx_1 != 0 && *ebx_1 != 0)
                char* eax_18 = sub_63d4e0(var_c)
                int32_t* esi_6 = *(eax_18 + 8)
                sub_63d5e0(eax_18, esi_6 + 7, var_c, 1)
                char* eax_19 = *var_c
                *(esi_6 + eax_19) = 0x9dc2acc3
                *(esi_6 + eax_19 + 4) = 0x9e80e2
                return eax_19
            
            int32_t* eax_20 = sub_64bfd0(0x18)
            eax_20[3] += 1
            
            if (*eax_20 == 0)
                sub_64be70(eax_20)
            
            int32_t* ecx_25 = *eax_20
            void* const edx_11 = &data_878298
            *eax_20 = *ecx_25
            *ecx_25 = 0xfafafafa
            ecx_25[1] = 1
            ecx_25[2] = 7
            ecx_25[3] = 8
            char* ecx_26 = &ecx_25[4]
            *var_c = ecx_26
            int32_t eax_21
            
            do
                eax_21.b = *edx_11
                edx_11 += 1
                *ecx_26 = eax_21.b
                ecx_26 = &ecx_26[1]
            while (eax_21.b != 0)
            
            return eax_21
        
        if (ebx_1 != 0 && *ebx_1 != 0)
            char* eax_22 = sub_63d4e0(var_c)
            int32_t esi_8 = *(eax_22 + 8)
            sub_63d5e0(eax_22, esi_8 + 6, var_c, 1)
            char* ecx_29 = *var_c
            *(ecx_29 + esi_8) = 0xa5c2abc3
            *(ecx_29 + esi_8 + 4) = 0xbcc2
            ecx_29[esi_8 + 6] = 0
            return 0xa5c2bc00
        
        int32_t* eax_23 = sub_64bfd0(0x17)
        eax_23[3] += 1
        
        if (*eax_23 == 0)
            sub_64be70(eax_23)
        
        int32_t** ecx_31 = *eax_23
        int32_t* const edx_13 = &data_8782e0
        *eax_23 = *ecx_31
        *ecx_31 = 0xfafafafa
        ecx_31[1] = 1
        ecx_31[2] = 6
        ecx_31[3] = 7
        char* ecx_32 = &ecx_31[4]
        *var_c = ecx_32
        
        do
            eax.b = *edx_13
            edx_13 += 1
            *ecx_32 = eax.b
            ecx_32 = &ecx_32[1]
        while (eax.b != 0)
    else
        eax = arg4 - 3
        
        if (arg4 == 3)
            if (&edi_1[-0x2b00] u<= 0x2ba3 && &edi_1[-0x2b00] != &edi_1[-0x2b00] s/ 0x1c * 0x1c)
                if (ebx_1 != 0 && *ebx_1 != 0)
                    char* eax_7 = sub_63d4e0(var_c)
                    int32_t esi_2 = *(eax_7 + 8)
                    sub_63d5e0(eax_7, esi_2 + 8, var_c, 1)
                    char* ecx_9 = *var_c
                    *(ecx_9 + esi_2) = -0x537d1d5d7b1d533d
                    void* eax_8
                    eax_8.b = 0
                    ecx_9[esi_2 + 8] = 0
                    return eax_8
                
                int32_t* eax_9 = sub_64bfd0(0x19)
                eax_9[3] += 1
                
                if (*eax_9 == 0)
                    sub_64be70(eax_9)
                
                int32_t* ecx_11 = *eax_9
                int64_t* const edx_4 = &data_87825c
                *eax_9 = *ecx_11
                *ecx_11 = 0xfafafafa
                ecx_11[1] = 1
                ecx_11[2] = 8
                ecx_11[3] = 9
                char* ecx_12 = &ecx_11[4]
                *var_c = ecx_12
                int32_t eax_10
                
                do
                    eax_10.b = *edx_4
                    edx_4 += 1
                    *ecx_12 = eax_10.b
                    ecx_12 = &ecx_12[1]
                while (eax_10.b != 0)
                
                return eax_10
            
            if (ebx_1 != 0 && *ebx_1 != 0)
                char* eax_11 = sub_63d4e0(var_c)
                int32_t esi_4 = *(eax_11 + 8)
                sub_63d5e0(eax_11, esi_4 + 6, var_c, 1)
                char* ecx_15 = *var_c
                *(ecx_15 + esi_4) = 0xb3c2aac3
                *(ecx_15 + esi_4 + 4) = 0xbcc2
                ecx_15[esi_4 + 6] = 0
                return 0xb3c2bc00
            
            int32_t* eax_12 = sub_64bfd0(0x17)
            eax_12[3] += 1
            
            if (*eax_12 == 0)
                sub_64be70(eax_12)
            
            int32_t* ecx_17 = *eax_12
            int32_t* const edx_6 = &data_8782a0
            *eax_12 = *ecx_17
            *ecx_17 = 0xfafafafa
            ecx_17[1] = 1
            ecx_17[2] = 6
            ecx_17[3] = 7
            char* ecx_18 = &ecx_17[4]
            *var_c = ecx_18
            int32_t eax_13
            
            do
                eax_13.b = *edx_6
                edx_6 += 1
                *ecx_18 = eax_13.b
                ecx_18 = &ecx_18[1]
            while (eax_13.b != 0)
            
            return eax_13

return eax
