// 函数: sub_5dc990
// 地址: 0x5dc990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t ecx = *(arg1 + 0x2c)

if (ecx != 0 && ecx != 3)
    if (ecx != 1)
        int32_t eax
        sub_63b870(eax, &data_801800, 
            "gfx.type == DOMGFX_CARD || gfx.type == DOMGFX_PILE || gfx.type == DOMGFX_CARD_PLACEHOLDER", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3974, "CardGetLayer")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(arg1 + 0x174) == 3)
        return 0x2e18
    
    if (*(arg1 + 0x1a18) == 0)
        int32_t eax_1 = *(arg1 + 0x370)
        
        if (eax_1 != ecx)
        label_5dc9f4:
            int32_t eax_2 = *(arg1 + 0x370)
            
            if (eax_2 != 1)
                return 0x2e7d
            
            if (*(arg1 + 0x378) == 0x23)
                return 0x2ecd
            
            if (eax_2 != eax_2)
                return 0x2e7d
            
            if (*(arg1 + 0x378) == 0x24)
                return 0x2ed6
            
            if (*(arg1 + 0x1a18) == 0)
                return 0x2e7d
            
        label_5dca2e:
            
            if (*(arg1 + 0x2e8) != 1)
                if (*(arg1 + 0x418) != 1 || *(arg1 + 0x420) != 0x24)
                    return 0x2e7d
                
                return 0x2ed6
            
            if (*(arg1 + 0x2f0) == 0x24 || (*(arg1 + 0x418) == 1 && *(arg1 + 0x420) == 0x24))
                return 0x2ed6
            
            return 0x2e7d
        
        if (*(arg1 + 0x378) != 0x21 && (eax_1 != ecx || *(arg1 + 0x378) != 0x22))
            goto label_5dc9f4
    else if ((*(arg1 + 0x2e8) != 1 || *(arg1 + 0x2f0) != 0x21)
            && (*(arg1 + 0x418) != 1 || *(arg1 + 0x420) != 0x21))
        int32_t eax_4 = *(arg1 + 0x2e8)
        
        if (eax_4 != 1 || *(arg1 + 0x2f0) != 0x22)
            int32_t ecx_2 = *(arg1 + 0x418)
            
            if (ecx_2 != 1 || *(arg1 + 0x420) != 0x22)
                if ((eax_4 != 1 || *(arg1 + 0x2f0) != 0x23)
                        && (ecx_2 != 1 || *(arg1 + 0x420) != 0x23))
                    goto label_5dca2e
                
                return 0x2ecd
    
    return 0x2eb8

if (data_b7fcd0 == *(arg1 + 0x1c28))
    return 0x2e18

if (ecx == 0 && *(arg1 + 0x128) != ecx)
    return 0x2d44

if (*(arg1 + 0x1a18) != 0)
    int32_t ecx_65 = *(arg1 + 0x2e8)
    
    if (ecx_65 == 1 && *(arg1 + 0x2f0) == 0xa)
        return 0x2d42
    
    int32_t edx_24 = *(arg1 + 0x418)
    
    if (edx_24 == 1 && *(arg1 + 0x420) == 0xa)
        return 0x2d42
    
    void* edi_3
    
    if (ecx_65 != 1)
        edi_3 = arg1 + 0x420
    else
        if (*(arg1 + 0x2f0) == 0xc)
            return 0x2d42
        
        edi_3 = arg1 + 0x420
    
    if ((edx_24 == 1 && *(arg1 + 0x420) == 0xc) || (ecx_65 == 1 && *(arg1 + 0x2f0) == 0xb)
            || (edx_24 == 1 && *edi_3 == 0xb))
        return 0x2d42
    
    void* eax_53 = arg1 + 0x2f0
    
    if ((*(arg1 + 0x2e8) == 1 && *eax_53 == 0xd)
            || (*(arg1 + 0x418) == 1 && *(arg1 + 0x420) == 0xd))
        return 0x2d42
    
    int32_t edi_5
    
    if (*(arg1 + 0x1a18) == 0)
        edi_5 = *(arg1 + 0x1a18)
    else
        int32_t edx_25 = *(arg1 + 0x2e8)
        
        if (edx_25 == 1)
            if (*eax_53 == 0xe)
                return 0x2d42
            
            eax_53 = arg1 + 0x2f0
        
        int32_t edi_4 = *(arg1 + 0x418)
        void* ecx_66 = arg1 + 0x420
        
        if (edi_4 == 1 && *ecx_66 == 0xe)
            return 0x2d42
        
        if (edx_25 == 1)
            if (*eax_53 == 0x21)
            label_5dd628:
                int32_t xmm1_1 = *(arg1 + 0x1a24)
                
                if (not(0.5f f<= xmm1_1) && *ecx_66 == 0x21)
                    return 0x2eb8
                
                if (xmm1_1 f<= 0.5f)
                    return 0x2eb9
                
                int32_t eax_56
                eax_56.b = *ecx_66 == 0x21
                return eax_56 + 0x2eb8
            
            ecx_66 = arg1 + 0x420
        
        if (edi_4 == 1 && *ecx_66 == 0x21)
            goto label_5dd628
        
        edi_5 = *(arg1 + 0x1a18)
        
        if (*(arg1 + 0x2e8) == 1)
            if (*(arg1 + 0x2f0) == 0x22)
                goto label_5dd628
            
            ecx_66 = arg1 + 0x420
        
        if (*(arg1 + 0x418) == 1 && *ecx_66 == 0x22)
            goto label_5dd628
    
    if (sub_5d78e0(arg1, 0x3ea) == 0 && sub_5d78e0(arg1, 0x3ea) == 0)
        void* ecx_71
        
        if (edi_5 == 0)
        label_5dd753:
            ecx_71 = arg1 + 0x420
        label_5dd76d:
            int32_t edx_27
            
            if (*(arg1 + 0x418) == 1 && *(arg1 + 0x260) == 1)
                edx_27 = *ecx_71
            
            if (*(arg1 + 0x418) == 1 && *(arg1 + 0x260) == 1 && edx_27 == *(arg1 + 0x268)
                    && *(arg1 + 0x424) == *(arg1 + 0x26c))
                if (edx_27 == 6)
                    if (*(ecx_71 + 4) == 0x3ea)
                        return 0x2d33
                else if (edx_27 == 7 && *(ecx_71 + 4) == 0x3ea)
                    return 0x2d33
                
                int32_t eax_73 = *(arg1 + 0x420)
                
                if ((eax_73 == 6 || eax_73 == 7) && *(arg1 + 0x424) == 0x3eb)
                    return 0x2d42
                
                int32_t eax_74 = *(arg1 + 0x420)
                
                if (eax_74 == 6)
                    if (*(arg1 + 0x424) != 0x3e9)
                        return 0x2b35
                else if (eax_74 != 7 || *(arg1 + 0x424) != 0x3e9)
                    return 0x2b35
                
                return 0x2b5c
            
            if (sub_5d78e0(arg1, 0x3eb) == 0)
                if (sub_5dc7e0(arg1) != 0)
                    int32_t eax_80
                    
                    if (*(arg1 + 0x1a18) == 0 && *(arg1 + 0x370) == 1)
                        eax_80 = *(arg1 + 0x378)
                    
                    if (*(arg1 + 0x1a18) != 0 || *(arg1 + 0x370) != 1
                            || (eax_80 != 6 && eax_80 != 7) || *(arg1 + 0x37c) != 0x3e9)
                        return 0x2b94
                
                if (*(arg1 + 0x418) == 1)
                    int32_t eax_82 = *(arg1 + 0x420)
                    
                    if (eax_82 == 6)
                        if (*(arg1 + 0x424) == 0x3ec)
                            return 0x2d3e
                    else if (eax_82 == 7 && *(arg1 + 0x424) == 0x3ec)
                        return 0x2d3e
                    
                    int32_t eax_83 = *(arg1 + 0x420)
                    
                    if (eax_83 == 6)
                        if (*(arg1 + 0x424) == 2)
                            return 0x2d3e
                    else if (eax_83 == 7 && *(arg1 + 0x424) == 2)
                        return 0x2d3e
                
                int32_t eax_84 = *(arg1 + 0x2e8)
                
                if (eax_84 == 1)
                    int32_t ecx_77 = *(arg1 + 0x2f0)
                    
                    if (ecx_77 == 6)
                        if (*(arg1 + 0x2f4) == 0x3eb)
                            return 0x2d3e
                    else if (ecx_77 == 7 && *(arg1 + 0x2f4) == 0x3eb)
                        return 0x2d3e
                
                if (*(arg1 + 0x1a18) == 0)
                    return 0x2b5c
                
                if (eax_84 != 1 || *(arg1 + 0x2f0) != 0xf)
                    if (*(arg1 + 0x418) == 1 && *(arg1 + 0x420) == 0xf)
                        goto label_5dd8e0
                    
                    return 0x2b5c
                
            label_5dd8e0:
                int32_t ecx_79 = data_b604e0
                
                if (ecx_79 == 0xffffffff)
                    ecx_79 = 0
                
                if (*(arg1 + 0xa0) == ecx_79)
                    return 0x2b71
                
                return 0x2b95
        else if (*(arg1 + 0x260) != 1 || *(arg1 + 0x268) != 0x15)
            int32_t eax_61 = *(arg1 + 0x2e8)
            
            if (eax_61 != 1 || *(arg1 + 0x2f0) != 0x15)
                int32_t edx_26 = *(arg1 + 0x418)
                ecx_71 = arg1 + 0x420
                
                if (edx_26 != 1 || *ecx_71 != 0x15)
                    if (eax_61 != 1)
                        goto label_5dd71f
                    
                    int32_t eax_62 = *(arg1 + 0x2f0)
                    
                    if (eax_62 != 6 && eax_62 != 7)
                        goto label_5dd71f
                    
                    int32_t eax_63 = *(arg1 + 0x2f4)
                    
                    if (eax_63 != 0x3ee && eax_63 != 0x3ef && eax_63 != 0x3f0)
                        ecx_71 = arg1 + 0x420
                    label_5dd71f:
                        
                        if (edx_26 != 1)
                            goto label_5dd76d
                        
                        int32_t eax_67 = *ecx_71
                        
                        if (eax_67 != 6 && eax_67 != 7)
                            goto label_5dd76d
                        
                        int32_t eax_68 = *(arg1 + 0x424)
                        
                        if (eax_68 != 0x3ee && eax_68 != 0x3ef && eax_68 != 0x3f0)
                            goto label_5dd753
else
    int32_t eax_9 = *(arg1 + 0x370)
    
    if (eax_9 == 0)
        return 0x2e18
    
    if (eax_9 != 1)
    label_5dcb91:
        int32_t edx_1 = *(arg1 + 0x370)
        void* eax_15 = arg1 + 0x378
        
        if (edx_1 != 1)
        label_5dcbe8:
            int32_t edx_2 = *(arg1 + 0x370)
            
            if (edx_2 != 1)
            label_5dcc3c:
                int32_t edx_3 = *(arg1 + 0x370)
                
                if (edx_3 != 1)
                label_5dcc90:
                    int32_t edx_4 = *(arg1 + 0x370)
                    
                    if (edx_4 != 1)
                    label_5dcce4:
                        int32_t edx_5 = *(arg1 + 0x370)
                        
                        if (edx_5 != 1)
                        label_5dcd38:
                            int32_t edx_6 = *(arg1 + 0x370)
                            
                            if (edx_6 != 1)
                            label_5dcd8c:
                                int32_t edx_7 = *(arg1 + 0x370)
                                
                                if (edx_7 != 1)
                                label_5dcde0:
                                    int32_t edx_8 = *(arg1 + 0x370)
                                    
                                    if (edx_8 != 1)
                                    label_5dce34:
                                        int32_t edx_9 = *(arg1 + 0x370)
                                        
                                        if (edx_9 != 1)
                                        label_5dce88:
                                            int32_t edx_10 = *(arg1 + 0x370)
                                            
                                            if (edx_10 != 1)
                                            label_5dcedc:
                                                int32_t edx_11 = *(arg1 + 0x370)
                                                
                                                if (edx_11 != 1)
                                                label_5dcf30:
                                                    int32_t edx_12 = *(arg1 + 0x370)
                                                    
                                                    if (edx_12 != 1)
                                                    label_5dcf84:
                                                        int32_t edx_13 = *(arg1 + 0x370)
                                                        
                                                        if (edx_13 != 1)
                                                        label_5dcfd8:
                                                            int32_t edx_14 = *(arg1 + 0x370)
                                                            
                                                            if (edx_14 != 1)
                                                            label_5dd02c:
                                                                int32_t edx_15 = *(arg1 + 0x370)
                                                                
                                                                if (edx_15 != 1)
                                                                label_5dd080:
                                                                    int32_t edx_16 = *(arg1 + 0x370)
                                                                    
                                                                    if (edx_16 != 1)
                                                                    label_5dd0d4:
                                                                        int32_t edx_17 = *(arg1 + 0x370)
                                                                        
                                                                        if (edx_17 != 1)
                                                                        label_5dd128:
                                                                            int32_t edx_18 = *(arg1 + 0x370)
                                                                            
                                                                            if (edx_18 != 1)
                                                                            label_5dd179:
                                                                                int32_t edx_19 = *(arg1 + 0x370)
                                                                                
                                                                                if (edx_19 != 1)
                                                                                label_5dd1cd:
                                                                                    
                                                                                    if (*(arg1 + 0x370) != 1
                                                                                        || *eax_15 != 0x1e)
                                                                                    label_5dd1e3:
                                                                                        char eax_16 = sub_5dc7e0(arg1)
                                                                                        int32_t ecx_45 = *(arg1 + 0x1a18)
                                                                                        
                                                                                        if (eax_16 != 0)
                                                                                            if (ecx_45 == 0 && *(arg1 + 0x370) == 1)
                                                                                                if (*eax_15 != 0x1d)
                                                                                                    if (*(arg1 + 0x370) != 1
                                                                                                            || *(arg1 + 0x378) != 0x10)
                                                                                                        goto label_5dd258
                                                                                                    
                                                                                                    if (*(arg1 + 0xa0) != data_b604e4)
                                                                                                        return 0x2b8f
                                                                                                    
                                                                                                    return 0x2b99
                                                                                                
                                                                                            label_5dd208:
                                                                                                *(arg1 + 0x37c)
                                                                                                sub_5de930()
                                                                                                return sub_5dc990() - 1
                                                                                            
                                                                                        label_5dd258:
                                                                                            int32_t eax_22
                                                                                            
                                                                                            if (*(arg1 + 0x1a18) == 0
                                                                                                    && *(arg1 + 0x370) == 1)
                                                                                                eax_22 = *(arg1 + 0x378)
                                                                                            
                                                                                            if (*(arg1 + 0x1a18) == 0
                                                                                                    && *(arg1 + 0x370) == 1
                                                                                                    && (eax_22 == 6 || eax_22 == 7)
                                                                                                    && *(arg1 + 0x37c) == 0x3ec)
                                                                                                if (*(arg1 + 0xa0) != data_b604e4)
                                                                                                    return 0x2b8f
                                                                                                
                                                                                                return 0x2b99
                                                                                            
                                                                                            if (sub_5dc7e0(arg1) == 0
                                                                                                    || *(arg1 + 0x1a18) != 0
                                                                                                    || *(arg1 + 0x370) != 1)
                                                                                                return 0x2b8f
                                                                                            
                                                                                            int32_t eax_26 = *(arg1 + 0x378)
                                                                                            
                                                                                            if ((eax_26 == 6 || eax_26 == 7)
                                                                                                    && *(arg1 + 0x37c) == 0x3e9
                                                                                                    && *(arg1 + 0xa0) == data_b809cc)
                                                                                                return 0x2b5c
                                                                                            
                                                                                            return 0x2b8f
                                                                                        
                                                                                        int32_t eax_30
                                                                                        
                                                                                        if (ecx_45 == 0 && *(arg1 + 0x370) == 1)
                                                                                            int32_t eax_29 = *eax_15
                                                                                            
                                                                                            if (eax_29 == 6)
                                                                                                if (*(arg1 + 0x37c) == 0x3ed)
                                                                                                    return 0x2d33
                                                                                            else if (eax_29 == 7
                                                                                                    && *(arg1 + 0x37c) == 0x3ed)
                                                                                                return 0x2d33
                                                                                            
                                                                                            eax_30 = *(arg1 + 0x378)
                                                                                        
                                                                                        if (ecx_45 == 0 && *(arg1 + 0x370) == 1
                                                                                                && (eax_30 == 6 || eax_30 == 7)
                                                                                                && *(arg1 + 0x37c) == 0x3eb)
                                                                                            *(arg1 + 0xa0)
                                                                                            
                                                                                            if (sub_5cc500() == 0)
                                                                                                return 0x2d3e
                                                                                        else if (*(arg1 + 0x1a18) != 0
                                                                                            || *(arg1 + 0x370) != 1)
                                                                                        label_5dd3cc:
                                                                                            int32_t edi_2 = *(arg1 + 0x1a18)
                                                                                            int32_t eax_38
                                                                                            
                                                                                            if (edi_2 == 0 && *(arg1 + 0x370) == 1)
                                                                                                eax_38 = *(arg1 + 0x378)
                                                                                            
                                                                                            if (edi_2 == 0 && *(arg1 + 0x370) == 1
                                                                                                    && (eax_38 == 6 || eax_38 == 7)
                                                                                                    && *(arg1 + 0x37c) == 0x3e9)
                                                                                                if (not(*(arg1 + 0x1bd0) f<= 0f))
                                                                                                    return 0x2b5d
                                                                                                
                                                                                                return 0x2b5c
                                                                                            
                                                                                            int32_t eax_40
                                                                                            int32_t edx_22
                                                                                            eax_40, edx_22 = sub_5dc840(arg1)
                                                                                            
                                                                                            if (eax_40.b == 0)
                                                                                                if (sub_5dc8c0(arg1) == 0)
                                                                                                    if (edi_2 == 0)
                                                                                                        int32_t eax_47 = *(arg1 + 0x370)
                                                                                                        
                                                                                                        if (eax_47 == 1)
                                                                                                            if (*(arg1 + 0x378) == 0x1d)
                                                                                                                goto label_5dd208
                                                                                                            
                                                                                                            if (eax_47 == eax_47
                                                                                                                    && *(arg1 + 0x378) == 7)
                                                                                                                return 0x2b34
                                                                                                    
                                                                                                    if (*(arg1 + 0x2c) != 0)
                                                                                                        return 0x2b2a
                                                                                                    
                                                                                                    int32_t eax_49 = *(arg1 + 0xa4)
                                                                                                    
                                                                                                    if (eax_49 == 0x3f1)
                                                                                                        return 0x2d35
                                                                                                    
                                                                                                    if (eax_49 == 0x3eb)
                                                                                                        return 0x2d3e
                                                                                                    
                                                                                                    return 0x2b2a
                                                                                            else
                                                                                                if (*(arg1 + 0x2c) != 0)
                                                                                                label_5dd472:
                                                                                                    
                                                                                                    if (*(arg1 + 0x1bd0) f<= 0f)
                                                                                                        return 0x2b2a
                                                                                                    
                                                                                                    return 0x2b2b
                                                                                                
                                                                                                uint32_t eax_41
                                                                                                int32_t edx_23
                                                                                                eax_41, edx_23 = sub_5cbaa0(eax_40, 
                                                                                                    edx_22, arg1, 0x4000000, 0)
                                                                                                
                                                                                                if (eax_41.b != 0)
                                                                                                    return 0x2b34
                                                                                                
                                                                                                if (sub_5cbaa0(eax_41, edx_23, arg1, 
                                                                                                        0x40000000, 0) != 0)
                                                                                                    return 0x2b34
                                                                                                
                                                                                                if (*(arg1 + 0x2c) != 0
                                                                                                        || *(arg1 + 0x37c) - 0x27 u> 0x20)
                                                                                                    goto label_5dd472
                                                                                        else
                                                                                            int32_t eax_33 = *(arg1 + 0x378)
                                                                                            
                                                                                            if (eax_33 == 6)
                                                                                                if (*(arg1 + 0x37c) != 0x3ec)
                                                                                                    goto label_5dd392
                                                                                            else if (eax_33 != 7
                                                                                                || *(arg1 + 0x37c) != 0x3ec)
                                                                                            label_5dd392:
                                                                                                int32_t eax_36 = *(arg1 + 0x378)
                                                                                                
                                                                                                if ((eax_36 != 6 && eax_36 != 7)
                                                                                                        || *(arg1 + 0x37c) != 0x3ea)
                                                                                                    goto label_5dd3cc
                                                                                                
                                                                                                if (not(*(arg1 + 0x1bd0) f<= 0f))
                                                                                                    return 0x2d34
                                                                                                
                                                                                                return 0x2d33
                                                                                            
                                                                                            *(arg1 + 0xa0)
                                                                                            
                                                                                            if (sub_5cc500() == 0)
                                                                                                return 0x2d3e
                                                                                else
                                                                                    int32_t ecx_42 = *eax_15
                                                                                    
                                                                                    if (ecx_42 == 6)
                                                                                        goto label_5dd196
                                                                                    
                                                                                    if (ecx_42 != 7)
                                                                                    label_5dd1a6:
                                                                                        
                                                                                        if (edx_19 != 1)
                                                                                            goto label_5dd1cd
                                                                                        
                                                                                        int32_t ecx_43 = *eax_15
                                                                                        
                                                                                        if (ecx_43 == 6)
                                                                                            goto label_5dd1bd
                                                                                        
                                                                                        if (ecx_43 != 7)
                                                                                            goto label_5dd1cd
                                                                                        
                                                                                        eax_15 = arg1 + 0x378
                                                                                    label_5dd1bd:
                                                                                        
                                                                                        if (*(arg1 + 0x37c) != 0x450 && (
                                                                                                *(arg1 + 0x370) != 1
                                                                                                || *eax_15 != 0x1e))
                                                                                            goto label_5dd1e3
                                                                                    else
                                                                                        eax_15 = arg1 + 0x378
                                                                                    label_5dd196:
                                                                                        
                                                                                        if (*(arg1 + 0x37c) != 0x44e)
                                                                                            goto label_5dd1a6
                                                                            else
                                                                                int32_t ecx_40 = *eax_15
                                                                                
                                                                                if (ecx_40 == 6)
                                                                                    goto label_5dd145
                                                                                
                                                                                if (ecx_40 != 7)
                                                                                label_5dd152:
                                                                                    
                                                                                    if (edx_18 != 1)
                                                                                        goto label_5dd179
                                                                                    
                                                                                    int32_t ecx_41 = *eax_15
                                                                                    
                                                                                    if (ecx_41 != 6)
                                                                                        if (ecx_41 != 7)
                                                                                            goto label_5dd179
                                                                                        
                                                                                        eax_15 = arg1 + 0x378
                                                                                    
                                                                                    if (*(arg1 + 0x37c) != 0x44d)
                                                                                        goto label_5dd179
                                                                                else
                                                                                    eax_15 = arg1 + 0x378
                                                                                label_5dd145:
                                                                                    
                                                                                    if (*(arg1 + 0x37c) != 3)
                                                                                        goto label_5dd152
                                                                        else
                                                                            int32_t ecx_38 = *eax_15
                                                                            
                                                                            if (ecx_38 == 6)
                                                                                goto label_5dd0f1
                                                                            
                                                                            if (ecx_38 != 7)
                                                                            label_5dd101:
                                                                                
                                                                                if (edx_17 != 1)
                                                                                    goto label_5dd128
                                                                                
                                                                                int32_t ecx_39 = *eax_15
                                                                                
                                                                                if (ecx_39 != 6)
                                                                                    if (ecx_39 != 7)
                                                                                        goto label_5dd128
                                                                                    
                                                                                    eax_15 = arg1 + 0x378
                                                                                
                                                                                if (*(arg1 + 0x37c) != 0x46f)
                                                                                    goto label_5dd128
                                                                            else
                                                                                eax_15 = arg1 + 0x378
                                                                            label_5dd0f1:
                                                                                
                                                                                if (*(arg1 + 0x37c) != 0x470)
                                                                                    goto label_5dd101
                                                                    else
                                                                        int32_t ecx_36 = *eax_15
                                                                        
                                                                        if (ecx_36 == 6)
                                                                            goto label_5dd09d
                                                                        
                                                                        if (ecx_36 != 7)
                                                                        label_5dd0ad:
                                                                            
                                                                            if (edx_16 != 1)
                                                                                goto label_5dd0d4
                                                                            
                                                                            int32_t ecx_37 = *eax_15
                                                                            
                                                                            if (ecx_37 != 6)
                                                                                if (ecx_37 != 7)
                                                                                    goto label_5dd0d4
                                                                                
                                                                                eax_15 = arg1 + 0x378
                                                                            
                                                                            if (*(arg1 + 0x37c) != 0x471)
                                                                                goto label_5dd0d4
                                                                        else
                                                                            eax_15 = arg1 + 0x378
                                                                        label_5dd09d:
                                                                            
                                                                            if (*(arg1 + 0x37c) != 0x46e)
                                                                                goto label_5dd0ad
                                                                else
                                                                    int32_t ecx_34 = *eax_15
                                                                    
                                                                    if (ecx_34 == 6)
                                                                        goto label_5dd049
                                                                    
                                                                    if (ecx_34 != 7)
                                                                    label_5dd059:
                                                                        
                                                                        if (edx_15 != 1)
                                                                            goto label_5dd080
                                                                        
                                                                        int32_t ecx_35 = *eax_15
                                                                        
                                                                        if (ecx_35 != 6)
                                                                            if (ecx_35 != 7)
                                                                                goto label_5dd080
                                                                            
                                                                            eax_15 = arg1 + 0x378
                                                                        
                                                                        if (*(arg1 + 0x37c) != 0x46d)
                                                                            goto label_5dd080
                                                                    else
                                                                        eax_15 = arg1 + 0x378
                                                                    label_5dd049:
                                                                        
                                                                        if (*(arg1 + 0x37c) != 0x46c)
                                                                            goto label_5dd059
                                                            else
                                                                int32_t ecx_32 = *eax_15
                                                                
                                                                if (ecx_32 == 6)
                                                                    goto label_5dcff5
                                                                
                                                                if (ecx_32 != 7)
                                                                label_5dd005:
                                                                    
                                                                    if (edx_14 != 1)
                                                                        goto label_5dd02c
                                                                    
                                                                    int32_t ecx_33 = *eax_15
                                                                    
                                                                    if (ecx_33 != 6)
                                                                        if (ecx_33 != 7)
                                                                            goto label_5dd02c
                                                                        
                                                                        eax_15 = arg1 + 0x378
                                                                    
                                                                    if (*(arg1 + 0x37c) != 0x46b)
                                                                        goto label_5dd02c
                                                                else
                                                                    eax_15 = arg1 + 0x378
                                                                label_5dcff5:
                                                                    
                                                                    if (*(arg1 + 0x37c) != 0x46a)
                                                                        goto label_5dd005
                                                        else
                                                            int32_t ecx_30 = *eax_15
                                                            
                                                            if (ecx_30 == 6)
                                                                goto label_5dcfa1
                                                            
                                                            if (ecx_30 != 7)
                                                            label_5dcfb1:
                                                                
                                                                if (edx_13 != 1)
                                                                    goto label_5dcfd8
                                                                
                                                                int32_t ecx_31 = *eax_15
                                                                
                                                                if (ecx_31 != 6)
                                                                    if (ecx_31 != 7)
                                                                        goto label_5dcfd8
                                                                    
                                                                    eax_15 = arg1 + 0x378
                                                                
                                                                if (*(arg1 + 0x37c) != 0x469)
                                                                    goto label_5dcfd8
                                                            else
                                                                eax_15 = arg1 + 0x378
                                                            label_5dcfa1:
                                                                
                                                                if (*(arg1 + 0x37c) != 0x468)
                                                                    goto label_5dcfb1
                                                    else
                                                        int32_t ecx_28 = *eax_15
                                                        
                                                        if (ecx_28 == 6)
                                                            goto label_5dcf4d
                                                        
                                                        if (ecx_28 != 7)
                                                        label_5dcf5d:
                                                            
                                                            if (edx_12 != 1)
                                                                goto label_5dcf84
                                                            
                                                            int32_t ecx_29 = *eax_15
                                                            
                                                            if (ecx_29 != 6)
                                                                if (ecx_29 != 7)
                                                                    goto label_5dcf84
                                                                
                                                                eax_15 = arg1 + 0x378
                                                            
                                                            if (*(arg1 + 0x37c) != 0x467)
                                                                goto label_5dcf84
                                                        else
                                                            eax_15 = arg1 + 0x378
                                                        label_5dcf4d:
                                                            
                                                            if (*(arg1 + 0x37c) != 0x466)
                                                                goto label_5dcf5d
                                                else
                                                    int32_t ecx_26 = *eax_15
                                                    
                                                    if (ecx_26 == 6)
                                                        goto label_5dcef9
                                                    
                                                    if (ecx_26 != 7)
                                                    label_5dcf09:
                                                        
                                                        if (edx_11 != 1)
                                                            goto label_5dcf30
                                                        
                                                        int32_t ecx_27 = *eax_15
                                                        
                                                        if (ecx_27 != 6)
                                                            if (ecx_27 != 7)
                                                                goto label_5dcf30
                                                            
                                                            eax_15 = arg1 + 0x378
                                                        
                                                        if (*(arg1 + 0x37c) != 0x465)
                                                            goto label_5dcf30
                                                    else
                                                        eax_15 = arg1 + 0x378
                                                    label_5dcef9:
                                                        
                                                        if (*(arg1 + 0x37c) != 0x45c)
                                                            goto label_5dcf09
                                            else
                                                int32_t ecx_24 = *eax_15
                                                
                                                if (ecx_24 == 6)
                                                    goto label_5dcea5
                                                
                                                if (ecx_24 != 7)
                                                label_5dceb5:
                                                    
                                                    if (edx_10 != 1)
                                                        goto label_5dcedc
                                                    
                                                    int32_t ecx_25 = *eax_15
                                                    
                                                    if (ecx_25 != 6)
                                                        if (ecx_25 != 7)
                                                            goto label_5dcedc
                                                        
                                                        eax_15 = arg1 + 0x378
                                                    
                                                    if (*(arg1 + 0x37c) != 0x45e)
                                                        goto label_5dcedc
                                                else
                                                    eax_15 = arg1 + 0x378
                                                label_5dcea5:
                                                    
                                                    if (*(arg1 + 0x37c) != 0x45d)
                                                        goto label_5dceb5
                                        else
                                            int32_t ecx_22 = *eax_15
                                            
                                            if (ecx_22 == 6)
                                                goto label_5dce51
                                            
                                            if (ecx_22 != 7)
                                            label_5dce61:
                                                
                                                if (edx_9 != 1)
                                                    goto label_5dce88
                                                
                                                int32_t ecx_23 = *eax_15
                                                
                                                if (ecx_23 != 6)
                                                    if (ecx_23 != 7)
                                                        goto label_5dce88
                                                    
                                                    eax_15 = arg1 + 0x378
                                                
                                                if (*(arg1 + 0x37c) != 0x45a)
                                                    goto label_5dce88
                                            else
                                                eax_15 = arg1 + 0x378
                                            label_5dce51:
                                                
                                                if (*(arg1 + 0x37c) != 0x457)
                                                    goto label_5dce61
                                    else
                                        int32_t ecx_20 = *eax_15
                                        
                                        if (ecx_20 == 6)
                                            goto label_5dcdfd
                                        
                                        if (ecx_20 != 7)
                                        label_5dce0d:
                                            
                                            if (edx_8 != 1)
                                                goto label_5dce34
                                            
                                            int32_t ecx_21 = *eax_15
                                            
                                            if (ecx_21 != 6)
                                                if (ecx_21 != 7)
                                                    goto label_5dce34
                                                
                                                eax_15 = arg1 + 0x378
                                            
                                            if (*(arg1 + 0x37c) != 0x45b)
                                                goto label_5dce34
                                        else
                                            eax_15 = arg1 + 0x378
                                        label_5dcdfd:
                                            
                                            if (*(arg1 + 0x37c) != 0x456)
                                                goto label_5dce0d
                                else
                                    int32_t ecx_18 = *eax_15
                                    
                                    if (ecx_18 == 6)
                                        goto label_5dcda9
                                    
                                    if (ecx_18 != 7)
                                    label_5dcdb9:
                                        
                                        if (edx_7 != 1)
                                            goto label_5dcde0
                                        
                                        int32_t ecx_19 = *eax_15
                                        
                                        if (ecx_19 != 6)
                                            if (ecx_19 != 7)
                                                goto label_5dcde0
                                            
                                            eax_15 = arg1 + 0x378
                                        
                                        if (*(arg1 + 0x37c) != 0x455)
                                            goto label_5dcde0
                                    else
                                        eax_15 = arg1 + 0x378
                                    label_5dcda9:
                                        
                                        if (*(arg1 + 0x37c) != 0x459)
                                            goto label_5dcdb9
                            else
                                int32_t ecx_16 = *eax_15
                                
                                if (ecx_16 == 6)
                                    goto label_5dcd55
                                
                                if (ecx_16 != 7)
                                label_5dcd65:
                                    
                                    if (edx_6 != 1)
                                        goto label_5dcd8c
                                    
                                    int32_t ecx_17 = *eax_15
                                    
                                    if (ecx_17 != 6)
                                        if (ecx_17 != 7)
                                            goto label_5dcd8c
                                        
                                        eax_15 = arg1 + 0x378
                                    
                                    if (*(arg1 + 0x37c) != 0x458)
                                        goto label_5dcd8c
                                else
                                    eax_15 = arg1 + 0x378
                                label_5dcd55:
                                    
                                    if (*(arg1 + 0x37c) != 0x464)
                                        goto label_5dcd65
                        else
                            int32_t ecx_14 = *eax_15
                            
                            if (ecx_14 == 6)
                                goto label_5dcd01
                            
                            if (ecx_14 != 7)
                            label_5dcd11:
                                
                                if (edx_5 != 1)
                                    goto label_5dcd38
                                
                                int32_t ecx_15 = *eax_15
                                
                                if (ecx_15 != 6)
                                    if (ecx_15 != 7)
                                        goto label_5dcd38
                                    
                                    eax_15 = arg1 + 0x378
                                
                                if (*(arg1 + 0x37c) != 0x463)
                                    goto label_5dcd38
                            else
                                eax_15 = arg1 + 0x378
                            label_5dcd01:
                                
                                if (*(arg1 + 0x37c) != 0x462)
                                    goto label_5dcd11
                    else
                        int32_t ecx_12 = *eax_15
                        
                        if (ecx_12 == 6)
                            goto label_5dccad
                        
                        if (ecx_12 != 7)
                        label_5dccbd:
                            
                            if (edx_4 != 1)
                                goto label_5dcce4
                            
                            int32_t ecx_13 = *eax_15
                            
                            if (ecx_13 != 6)
                                if (ecx_13 != 7)
                                    goto label_5dcce4
                                
                                eax_15 = arg1 + 0x378
                            
                            if (*(arg1 + 0x37c) != 0x461)
                                goto label_5dcce4
                        else
                            eax_15 = arg1 + 0x378
                        label_5dccad:
                            
                            if (*(arg1 + 0x37c) != 0x460)
                                goto label_5dccbd
                else
                    int32_t ecx_10 = *eax_15
                    
                    if (ecx_10 == 6)
                        goto label_5dcc59
                    
                    if (ecx_10 != 7)
                    label_5dcc69:
                        
                        if (edx_3 != 1)
                            goto label_5dcc90
                        
                        int32_t ecx_11 = *eax_15
                        
                        if (ecx_11 != 6)
                            if (ecx_11 != 7)
                                goto label_5dcc90
                            
                            eax_15 = arg1 + 0x378
                        
                        if (*(arg1 + 0x37c) != 0x45f)
                            goto label_5dcc90
                    else
                        eax_15 = arg1 + 0x378
                    label_5dcc59:
                        
                        if (*(arg1 + 0x37c) != 0x454)
                            goto label_5dcc69
            else
                int32_t ecx_8 = *eax_15
                
                if (ecx_8 == 6)
                    goto label_5dcc05
                
                if (ecx_8 != 7)
                label_5dcc15:
                    
                    if (edx_2 != 1)
                        goto label_5dcc3c
                    
                    int32_t ecx_9 = *eax_15
                    
                    if (ecx_9 != 6)
                        if (ecx_9 != 7)
                            goto label_5dcc3c
                        
                        eax_15 = arg1 + 0x378
                    
                    if (*(arg1 + 0x37c) != 0x453)
                        goto label_5dcc3c
                else
                    eax_15 = arg1 + 0x378
                label_5dcc05:
                    
                    if (*(arg1 + 0x37c) != 0x452)
                        goto label_5dcc15
        else
            int32_t ecx_6 = *eax_15
            
            if (ecx_6 == 6)
                goto label_5dcbb4
            
            if (ecx_6 != 7)
            label_5dcbc1:
                
                if (edx_1 != 1)
                    goto label_5dcbe8
                
                int32_t ecx_7 = *eax_15
                
                if (ecx_7 != 6)
                    if (ecx_7 != 7)
                        goto label_5dcbe8
                    
                    eax_15 = arg1 + 0x378
                
                if (*(arg1 + 0x37c) != 0x451)
                    goto label_5dcbe8
            else
                eax_15 = arg1 + 0x378
            label_5dcbb4:
                
                if (*(arg1 + 0x37c) != 2)
                    goto label_5dcbc1
    else
        if (*(arg1 + 0x378) == 0x21 || *(arg1 + 0x378) == 0x22)
            return 0x2eb9
        
        int32_t eax_10 = *(arg1 + 0x378)
        
        if (eax_10 != 0x15)
            if (eax_10 != 6 && eax_10 != 7)
                goto label_5dcb91
            
            int32_t eax_11 = *(arg1 + 0x37c)
            
            if (eax_11 != 0x3ee && eax_11 != 0x3ef && eax_11 != 0x3f0)
                goto label_5dcb91

return 0x2cf7
