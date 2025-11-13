// 函数: sub_58f630
// 地址: 0x58f630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = data_cce9b4
char var_5 = 0
void* esi = data_cce9c0
int32_t var_34
char const* const var_30
int32_t* eax_1
char* ecx_34

if (ebx s>= 0xa)
label_58fa23:
    eax_1 = sub_58dd90(esi)
    
    if (data_cce9b4 s>= 0xa)
        return sub_58dd90(esi)
    
    while (true)
        if (*(esi + 0xc80) == 0 && *(esi + 0x1904) == 0)
            return sub_58dd90(esi)
        
        int32_t eax_42
        int32_t edx_19
        eax_42, edx_19 = sub_58dcc0(eax_1, data_cce9bc, esi, 0)
        
        if (edx_19 == 0)
            return sub_58dd90(esi)
        
        void* eax_43 = sub_571b30(edx_19, data_cce9b0)
        
        if (((*(eax_43 + 0x98) & 0x7f000400) | (*(eax_43 + 0x9c) & 0x940)) == 0)
            eax_1 = sub_58efc0(edx_19)
        else
            eax_1 = *(esi + 0x3e8c)
            
            if (eax_1 s>= 0x320)
                break
            
            *(esi + (eax_1 << 3) + 0x258c) = eax_42
            *(esi + (eax_1 << 3) + 0x2590) = edx_19
            *(esi + 0x3e8c) += 1
        
        if (data_cce9b4 s>= 0xa)
            return sub_58dd90(esi)
    
label_58fb09:
    var_30 = "RandomizerDeck_Reject"
    ecx_34 = "deck.numRejects < MAX_CARDS"
    var_34 = 0x4140
else
    while (true)
        eax_1 = data_cce9b0
        int32_t edi_1 = 0
        int32_t ecx = data_cce9c4
        int32_t* var_14 = eax_1
        int32_t var_10_1 = ecx
        
        if (ebx s> 0)
            while (true)
                eax_1 = *(sub_571b30(*(ecx + (edi_1 << 2)), eax_1) + 0x98) & 0x20
                
                if (eax_1 != 0)
                    int32_t ebx_1 = data_cce9b4
                    int32_t edi_2 = 0
                    eax_1 = data_cce9b0
                    int32_t ecx_2 = data_cce9c4
                    var_14 = eax_1
                    int32_t var_10_2 = ecx_2
                    
                    if (ebx_1 s<= 0)
                    label_58f70d:
                        var_14 = 4
                        eax_1 = sub_58f190(eax_1, &var_14, arg1, 1)
                        goto label_58f71c
                    
                    while (true)
                        eax_1 = sub_571b30(*(ecx_2 + (edi_2 << 2)), eax_1)
                        int32_t edx_3 = eax_1[6]
                        int32_t ecx_4 = eax_1[7]
                        
                        if (edx_3 != 0 || ecx_4 != 1)
                            if (eax_1[8] != 0xffffffff)
                                var_30 = "CardHasProp"
                                var_34 = 0x4036
                                ecx_34 = "def.props[0].abilityIndex == ABILITY_INDEX_PLAY"
                                break
                            
                            if (ecx_4 s>= 0 && (ecx_4 s> 0 || edx_3 u>= 0))
                                eax_1 = ecx_4 & 2
                                
                                if (eax_1 != 0)
                                    goto label_58f71c
                        
                        edi_2 += 1
                        
                        if (edi_2 s>= ebx_1)
                            goto label_58f70d
                        
                        eax_1 = var_14
                        ecx_2 = var_10_2
                    
                    goto label_58fb22
                
                edi_1 += 1
                
                if (edi_1 s>= ebx)
                label_58f71c:
                    ebx = data_cce9b4
                    break
                
                eax_1 = var_14
                ecx = var_10_1
        
        if (ebx s>= 0xa)
            goto label_58fa23
        
        int32_t eax_5
        int32_t* edx_6
        eax_5, edx_6 = sub_58dcc0(eax_1, data_cce9bc, esi, 0)
        int32_t edx_7 = data_cce9b0
        var_14 = edx_6
        void* eax_6
        int32_t* edx_8
        eax_6, edx_8 = sub_571b30(edx_6, edx_7)
        void* edi_3 = data_cce9c8
        
        if (((*(eax_6 + 0x98) & 0x7f000400) | (*(eax_6 + 0x9c) & 0x940)) != 0)
            void* var_c_2 = edi_3
            
            if (data_cce9b8 s>= *(edi_3 + 0xbcc))
            label_58f9c2:
                eax_1 = *(esi + 0x3e8c)
                
                if (eax_1 s>= 0x320)
                    goto label_58fb09
                
                *(esi + (eax_1 << 3) + 0x258c) = eax_5
                *(esi + (eax_1 << 3) + 0x2590) = edx_6
                *(esi + 0x3e8c) += 1
                edx_8.b = var_5
            else
                if ((*(sub_571b30(edx_6, data_cce9b0) + 0x98) & 0x400) == 0)
                    goto label_58f8e3
                
                int32_t edi_7 = *(edi_3 + 0xbd4)
                int32_t eax_21
                eax_21, edx_8 = sub_58df00(0x400, 0)
                
                if (eax_21 s>= edi_7)
                    goto label_58f9c2
                
                edi_3 = var_c_2
            label_58f8e3:
                int32_t eax_24 = *(sub_571b30(edx_6, data_cce9b0) + 0x98) & 0x20000000
                int32_t eax_26
                int32_t edi_8
                
                if (eax_24 != 0)
                    edi_8 = *(edi_3 + 0xbdc)
                    eax_26, edx_8 = sub_58df00(0x20000000, 0)
                
                if (eax_24 != 0 && eax_26 s>= edi_8)
                    goto label_58f9c2
                
                int32_t eax_29 = *(sub_571b30(edx_6, data_cce9b0) + 0x98) & 0x8000000
                int32_t eax_31
                int32_t edi_10
                
                if (eax_29 != 0)
                    edi_10 = *(var_c_2 + 0xbe4)
                    eax_31, edx_8 = sub_58df00(0x8000000, 0)
                
                if (eax_29 != 0 && eax_31 s>= edi_10)
                    goto label_58f9c2
                
                int32_t eax_34 = *(sub_571b30(edx_6, data_cce9b0) + 0x98) & 0x10000000
                int32_t eax_37
                int32_t edi_11
                
                if (eax_34 != 0)
                    edi_11 = *(var_c_2 + 0xbec)
                    eax_37, edx_8 = sub_58df00(0x10000000, 0)
                
                if (eax_34 != 0 && eax_37 s>= edi_11)
                    goto label_58f9c2
                
                int32_t eax_39 = *(sub_571b30(edx_6, data_cce9b0) + 0x9c) & 0x100
                int32_t eax_41
                int32_t edi_12
                
                if (eax_39 != 0)
                    edi_12 = *(var_c_2 + 0xbf4)
                    eax_41, edx_8 = sub_58df00(0, 0x100)
                
                if (eax_39 != 0 && eax_41 s>= edi_12)
                    goto label_58f9c2
                
                eax_1, edx_8 = sub_58f080(edx_6, 0)
                edx_8.b = var_5
        else
            int32_t* edi_4 = edi_3 + 0x9c8
            int32_t eax_10
            char edx_9
            edx_9:eax_10 = sx.q(edx_6)
            int32_t ebx_4 = (zx.d(edx_9) + eax_10) s>> 8
            int32_t ecx_12 = 0
            
            while (true)
                edx_8 = *edi_4
                
                if (edx_8 == 0)
                    goto label_58f7a3
                
                if (edx_8 == ebx_4)
                    break
                
                ecx_12 += 1
                edi_4 = &edi_4[4]
                
                if (ecx_12 s>= 0x20)
                    goto label_58f7a3
            
            if (edi_4 == 0 || (edi_4[2] == 0 && edi_4[3] == 0))
            label_58f7a3:
                int32_t* edi_5 = var_14
                eax_1, edx_8 = sub_58efc0(edi_5)
                
                if (eax_1.b != 0)
                    edx_8.b = var_5
                else
                    eax_1 = *(esi + 0x3e8c)
                    
                    if (eax_1 s>= 0x320)
                        goto label_58fb09
                    
                    *(esi + (eax_1 << 3) + 0x258c) = eax_5
                    *(esi + (eax_1 << 3) + 0x2590) = edi_5
                    *(esi + 0x3e8c) += 1
                    edx_8.b = var_5
            else
                eax_1 = nullptr
                int32_t i = 0
                int32_t* var_c_1 = nullptr
                
                if (data_cce9b4 s> 0)
                    do
                        if (ebx_4 == 0)
                            var_30 = "IsExpansion"
                            var_34 = 0x1002
                            ecx_34 = "exp != DOM_EXP_NONE"
                            goto label_58fb22
                        
                        int32_t eax_13
                        char edx_11
                        edx_11:eax_13 = sx.q(*(data_cce9c4 + (i << 2)))
                        int32_t* ecx_16 = var_c_1 + 1
                        
                        if ((eax_13 + zx.d(edx_11)) s>> 8 != ebx_4)
                            ecx_16 = var_c_1
                        
                        eax_1 = ecx_16
                        i += 1
                        var_c_1 = eax_1
                    while (i s< data_cce9b4)
                
                if (eax_1 s< edi_4[3])
                    goto label_58f7a3
                
                edx_8.b = var_5
                
                if (edx_8.b != 0)
                    goto label_58f7a3
                
                eax_1 = *(esi + 0x3e8c)
                
                if (eax_1 s>= 0x320)
                    goto label_58fb09
                
                int32_t* edi_6 = var_14
                *(esi + (eax_1 << 3) + 0x258c) = eax_5
                *(esi + (eax_1 << 3) + 0x2590) = edi_6
                *(esi + 0x3e8c) += 1
        
        if (*(esi + 0xc80) == 0 && *(esi + 0x1904) == 0)
            if (edx_8.b != 0)
                var_30 = "RollKingdom_AddRandomCards"
                var_34 = 0x46db
                ecx_34 = "ignoreConstraints == false"
                break
            
            sub_58dd90(esi)
            var_5 = 1
        
        ebx = data_cce9b4
        
        if (ebx s>= 0xa)
            goto label_58fa23

label_58fb22:
sub_63b870(eax_1, &data_801800, ecx_34, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_34, 
    var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
