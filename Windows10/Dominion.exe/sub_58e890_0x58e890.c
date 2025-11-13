// 函数: sub_58e890
// 地址: 0x58e890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cce9c0
int32_t esi = arg1
int32_t var_7c = esi
sub_58dd90(eax)
void* const eax_1 = &data_820e90
void* const var_4c = &data_820e90
int32_t var_98_6
char const* const var_94_6
int32_t eax_17
char* ecx_41

while (true)
    uint128_t xmm0_1 = *eax_1
    int32_t xmm0_2 = (*(eax_1 + 0x10)).d
    void* eax_2 = sub_571b30(esi, data_cce9b0)
    int32_t edi_1 = xmm0_1:8.d
    int32_t ecx_2 = xmm0_1
    int32_t i = _mm_bsrli_si128(xmm0_1, 4)
    int32_t i_3 = i
    
    if (((ecx_2 & *(eax_2 + 0x98)) | (*(eax_2 + 0x9c) & i)) != 0)
        char eax_18
        
        if ((edi_1 | xmm0_1:0xc.d) == 0)
            void* eax_19 = data_cce9c4
            i = 0
            int32_t* ecx_18 = eax_19 + 0x28
            
            do
                int32_t esi_3 = *ecx_18
                
                if (esi_3 == 0)
                    break
                
                if (esi_3 == xmm0_2)
                    goto label_58eab7
                
                i += 1
                ecx_18 = &ecx_18[0xf]
            while (i s< 4)
            
            int32_t edi_4 = 0
            int32_t ecx_20
            
            for (int32_t* i_1 = 0x118; i_1 s< 0x198; )
                if (*(i_1 + eax_19) == 0)
                    ecx_20 = xmm0_2
                else
                    char eax_20
                    eax_20, i = sub_58e590(eax_19, edi_4)
                    
                    if ((arg2 & 0x20000) == 0)
                        if (eax_20 == 0)
                            goto label_58eba8
                        
                        eax_19 = data_cce9c4
                        ecx_20 = xmm0_2
                    else if (eax_20 == 0)
                        eax_19 = data_cce9c4
                        ecx_20 = xmm0_2
                    else
                    label_58eba8:
                        eax_19 = data_cce9c4
                        ecx_20 = xmm0_2
                        
                        if (*(i_1 + eax_19) == ecx_20)
                            goto label_58eab7
                
                i_1 = &i_1[1]
                edi_4 += 1
            
            eax_18, i = sub_58f080(ecx_20, arg2)
            
            if (eax_18 == 0)
                return 0
            
            goto label_58eab7
        
        int32_t esi_1 = 0
        void* ecx_9
        
        while (true)
            ecx_9 = data_cce9c4
            int32_t eax_7 = *(esi_1 + ecx_9 + 0x28)
            
            if (eax_7 == 0)
                break
            
            void* eax_8
            eax_8, i = sub_571b30(eax_7, data_cce9b0)
            
            if (((edi_1 & *(eax_8 + 0x98)) | (*(eax_8 + 0x9c) & xmm0_1:0xc.d)) != 0)
                goto label_58ebc3
            
            esi_1 += 0x3c
            
            if (esi_1 s>= 0xf0)
                ecx_9 = data_cce9c4
                break
        
        int32_t edi_2 = 0
        
        for (int32_t* i_2 = 0x118; i_2 s< 0x198; )
            if (*(i_2 + ecx_9) != 0)
                char eax_11 = sub_58e590(ecx_9, edi_2)
                
                if ((arg2 & 0x20000) != 0)
                    if (eax_11 != 0)
                    label_58e9af:
                        void* eax_13
                        eax_13, i = sub_571b30(*(i_2 + data_cce9c4), data_cce9b0)
                        
                        if (((edi_1 & *(eax_13 + 0x98)) | (*(eax_13 + 0x9c) & xmm0_1:0xc.d)) != 0)
                            goto label_58ebc3
                else if (eax_11 == 0)
                    goto label_58e9af
                
                ecx_9 = data_cce9c4
            
            i_2 = &i_2[1]
            edi_2 += 1
        
        uint32_t eax_16 = sub_58e330(edi_1, xmm0_1:0xc.d)
        eax_17 = sub_571b30(eax_16, data_cce9b0)
        
        if (((*(eax_17 + 0x98) & 0x7f000400) | (*(eax_17 + 0x9c) & 0x940)) == 0)
            var_94_6 = "RollKingdom_SetupPile"
            var_98_6 = 0x44dd
            ecx_41 = "PregameIsLandscape(whatLandscape)"
            break
        
        if (eax_16 == 0)
            var_94_6 = "RollKingdom_SetupPile"
            var_98_6 = 0x44de
            ecx_41 = "whatLandscape != CARD_NONE"
            break
        
        eax_18, i = sub_58f080(eax_16, arg2)
        
        if (eax_18 != 0)
            goto label_58ebc3
        
        return 0
    
label_58ebc3:
    int32_t esi_8 = xmm0_1:0xc.d
    
    if ((edi_1 | esi_8) == 0)
    label_58eab7:
        eax_17 = xmm0_2
        
        if (eax_17 == 0)
            var_94_6 = "RollKingdom_SetupPile"
            var_98_6 = 0x44fa
            ecx_41 = "requirement.specificLandscape != CARD_NONE"
            break
        
        esi = var_7c
        
        if (esi == eax_17)
            if (sub_58e7d0(eax_17, i, arg2, ecx_2, i_3) != 0)
                esi = var_7c
            else
                uint32_t eax_22 = sub_58e330(ecx_2, i_3)
                
                if (eax_22 == 0)
                    esi = var_7c
                else
                    if (sub_58efc0(eax_22) == 0)
                        return 0
                    
                    esi = var_7c
    else
        void* eax_29
        int32_t edx_16
        eax_29, edx_16 = sub_571b30(var_7c, data_cce9b0)
        int32_t eax_31 = *(eax_29 + 0x9c) & esi_8
        
        if (((edi_1 & *(eax_29 + 0x98)) | eax_31) != 0
                && sub_58e7d0(eax_31, edx_16, arg2, ecx_2, i_3) == 0)
            uint32_t eax_33 = sub_58e330(ecx_2, i_3)
            
            if (eax_33 != 0)
                void* eax_34 = sub_571b30(eax_33, data_cce9b0)
                eax_17 = *(eax_34 + 0x9c) & 0x940
                
                if (((*(eax_34 + 0x98) & 0x7f000400) | eax_17) != 0)
                    var_94_6 = "RollKingdom_ForceAddCard"
                    var_98_6 = 0x45a1
                    ecx_41 = "!PregameIsLandscape(what)"
                    break
                
                int32_t ecx_33 = data_cce9b4
                
                if (ecx_33 s< 0xa)
                    *(data_cce9c4 + (ecx_33 << 2)) = eax_33
                    data_cce9b4 += 1
                    
                    if (sub_58e890() == 0)
                        int32_t eax_41 = data_cce9c4
                        int32_t ecx_40 = data_cce9b4 - 1
                        data_cce9b4 = ecx_40
                        *(eax_41 + (ecx_40 << 2)) = 0
                        eax_41.b = 0
                        return eax_41
                else
                    int32_t ecx_34 = data_cce9c4
                    int32_t eax_36 = data_cce9cc
                    int32_t edi_11 = *(ecx_34 + (eax_36 << 2))
                    *(ecx_34 + (eax_36 << 2)) = eax_33
                    data_cce9cc += 1
                    
                    if (sub_58e890() == 0)
                        int32_t eax_38 = data_cce9c4
                        int32_t ecx_37 = data_cce9cc - 1
                        data_cce9cc = ecx_37
                        *(eax_38 + (ecx_37 << 2)) = edi_11
                        eax_38.b = 0
                        return eax_38
        
        esi = var_7c
    
    eax_1 = var_4c + 0x18
    var_4c = eax_1
    
    if (eax_1 == &data_820ec0)
        void* eax_24 = sub_571b30(esi, data_cce9b0)
        int32_t edx_12 = 0
        void* ecx_24 = eax_24 + 0xc8
        
        while (true)
            int32_t esi_5 = *(ecx_24 - 0x20)
            
            if (esi_5 != 0)
                int32_t eax_25
                
                if (esi_5 == 0xd)
                    eax_25 = *ecx_24
                
                if (esi_5 == 0xd && eax_25 != 0)
                    int32_t eax_42 = edx_12 * 0xb4
                    int32_t esi_11 = *(eax_42 + eax_24 + 0xc0)
                    int32_t edx_19 = *(eax_42 + eax_24 + 0x154)
                    
                    if (esi_11 != 0)
                        if ((edx_19 & 0x4000) == 0 || (arg2 & 0x4000) != 0)
                            int32_t esi_12 = 0
                            int32_t var_70_2 = 0
                            eax_17 = data_cce9c4 + (*(eax_42 + eax_24 + 0xbc) << 2) + 0x118
                            int32_t var_60_2 = eax_17
                            
                            if (esi_11 s> 0)
                                while (true)
                                    if (*(eax_17 + (esi_12 << 2)) == 0)
                                        void* ecx_45 = eax
                                        
                                        while (true)
                                            if (*(ecx_45 + 0xc80) != 0 || *(ecx_45 + 0x1904) != 0)
                                                int32_t eax_45
                                                int32_t edx_22
                                                eax_45, edx_22 =
                                                    sub_58dcc0(eax_17, data_cce9bc, ecx_45, 0)
                                                int32_t edi_13 = edx_22
                                                
                                                if ((edx_19 & 0x8000) != 0)
                                                    int32_t ecx_46 = 0
                                                    int32_t eax_46 = 0
                                                    
                                                    while (true)
                                                        if (*(eax_46 + &data_7bfae8) == edx_22)
                                                            int32_t eax_47 = ecx_46 * 9
                                                            int32_t edx_23 =
                                                                *((eax_47 << 3) + &data_7bfaec)
                                                            
                                                            if (edx_23 != 0)
                                                                edi_13 = *((eax_47 << 3) + &data_7bfaf0
                                                                    + 
                                                                    (sub_63ed10(data_cce9bc, edx_23) << 2))
                                                            else
                                                                edi_13 = edx_22
                                                            
                                                            break
                                                        
                                                        eax_46 += 0x48
                                                        ecx_46 += 1
                                                        
                                                        if (eax_46 u>= 0x3f0)
                                                            edi_13 = edx_22
                                                            break
                                                
                                                if (eax_25(edi_13) != 0)
                                                    esi_12 = var_70_2
                                                    *(var_60_2 + (esi_12 << 2)) = edi_13
                                                    sub_58e890()
                                                    ecx_45 = eax
                                                else
                                                    ecx_45 = eax
                                                    eax_17 = *(ecx_45 + 0x3e8c)
                                                    
                                                    if (eax_17 s>= 0x320)
                                                        var_94_6 = "RandomizerDeck_Reject"
                                                        var_98_6 = 0x4140
                                                        ecx_41 = "deck.numRejects < MAX_CARDS"
                                                        break
                                                    
                                                    *(ecx_45 + (eax_17 << 3) + 0x258c) = eax_45
                                                    *(ecx_45 + (eax_17 << 3) + 0x2590) = edx_22
                                                    *(ecx_45 + 0x3e8c) += 1
                                                    continue
                                            else
                                                esi_12 = var_70_2
                                            
                                            sub_58dd90(ecx_45)
                                            goto label_58eeb5
                                        
                                        break
                                    
                                    sub_58e890()
                                label_58eeb5:
                                    esi_12 += 1
                                    var_70_2 = esi_12
                                    
                                    if (esi_12 s>= esi_11)
                                        goto label_58eb68
                                    
                                    eax_17 = var_60_2
                                
                                break
                        else
                            eax_17 = data_cce9d4
                            
                            if (eax_17 s>= 1)
                                var_94_6 = "RollKingdom_SetupPile"
                                var_98_6 = 0x4517
                                ecx_41 = "c.numDeferredSetup < MAX_DEFFERED_SETUP"
                                break
                            
                            *((eax_17 << 2) + &data_cce9d0) = var_7c
                            data_cce9d4 += 1
                else
                    edx_12 += 1
                    ecx_24 += 0xb4
                    
                    if (edx_12 s< 8)
                        continue
            
        label_58eb68:
            void* edi_7 = sub_571b30(var_7c, data_cce9b0)
            int32_t edx_14 = 0
            void* ecx_26 = edi_7 + 0xc4
            
            while (true)
                int32_t esi_6 = *(ecx_26 - 0x1c)
                void* eax_26
                
                if (esi_6 != 0)
                    int32_t esi_7
                    
                    if (esi_6 == 0xd)
                        esi_7 = *ecx_26
                    
                    if (esi_6 == 0xd && esi_7 != 0)
                        eax_26 = edx_14 * 0xb4
                        int32_t ecx_49 = *(eax_26 + edi_7 + 0xc0)
                        
                        if (ecx_49 != 0)
                            if ((*(eax_26 + edi_7 + 0x154) & 0x4000) != 0 && (arg2 & 0x4000) == 0)
                                break
                            
                            int32_t edi_15 = data_cce9c4 + 0x118 + (*(eax_26 + edi_7 + 0xbc) << 2)
                            eax_26 = esi_7(eax, edi_15, ecx_49)
                            int32_t esi_14 = 0
                            
                            if (eax_26 s> 0)
                                do
                                    *(edi_15 + (esi_14 << 2))
                                    sub_58e890()
                                    esi_14 += 1
                                while (esi_14 s< eax_26)
                    else
                        edx_14 += 1
                        ecx_26 += 0xb4
                        
                        if (edx_14 s< 8)
                            continue
                        
                        eax_26.b = 1
                        return eax_26
                
                eax_26.b = 1
                return eax_26
            
            eax_17 = data_cce9d4
            
            if (eax_17 s< 1)
                *((eax_17 << 2) + &data_cce9d0) = var_7c
                eax_17.b = 1
                data_cce9d4 += 1
                return eax_17
            
            var_94_6 = "RollKingdom_SetupPile"
            var_98_6 = 0x454d
            ecx_41 = "c.numDeferredSetup < MAX_DEFFERED_SETUP"
            break
        
        break

sub_63b870(eax_17, &data_801800, ecx_41, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_98_6, 
    var_94_6)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
