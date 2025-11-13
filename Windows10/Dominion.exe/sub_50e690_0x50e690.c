// 函数: sub_50e690
// 地址: 0x50e690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, 0x17)
int32_t ecx = *(eax + 0x98)
int32_t* eax_1 = *(eax + 0x9c)
int32_t var_24
char const* const var_20_1
char* ecx_21
int32_t* var_10
int32_t edi_6

if (eax_1 u<= 0 && (eax_1 u< 0 || ecx u<= 0x20000000))
    if (ecx != 0x20000000 || eax_1 != 0)
        if (ecx != 0x400 || eax_1 != 0)
            if (ecx == 0x8000000 && eax_1 == 0)
                edi_6 = 0x14b4
                goto label_50eb23
            
            if (ecx != 0x10000000 || eax_1 != 0)
                goto label_50ec28
            
            edi_6 = 0x1518
            goto label_50eb23
        
        eax_1 = sub_516f30(0x13ec)
        int32_t ecx_5 = 0
        int32_t* edx_6 = eax_1
        
        while (true)
            if (edx_6[3] == 3)
                void* edx_7 = &edx_6[4]
                int32_t ebx_2 = 0
                void* var_c_2 = edx_7
                eax_1 = eax_1[ecx_5 * 0x9b + 0x9c]
                var_10 = eax_1
                
                if (eax_1 s> 0)
                    while (true)
                        int32_t eax_8 = *(edx_7 + (ebx_2 << 2))
                        int32_t eax_9 = sub_516f30(eax_8)
                        int32_t i = 0
                        int32_t* edx_8 = eax_9 + 0xc
                        
                        do
                            if (*edx_8 == 2)
                                eax_1 = i * 0x26c
                                int32_t ecx_12 = *(eax_1 + eax_9 + 0x10)
                                
                                if (ecx_12 == 0)
                                    goto label_50e8aa
                                
                                if (data_cca78c != 0)
                                    goto label_50eaf7
                                
                                data_cca78c = data_cca788
                                data_cca788 = arg1
                                eax_1 = ecx_12()
                                data_cca788 = data_cca78c
                                data_cca78c = 0
                                
                                if (eax_1.b != 0)
                                    goto label_50e8dc
                                
                                goto label_50e9ae
                            
                            i += 1
                            edx_8 = &edx_8[0x9b]
                        while (i s< 4)
                        
                    label_50e8aa:
                        int32_t ecx_7 = 0
                        int32_t* eax_10 = eax_9 + 0x274
                        
                        while (eax_10[-0x9a] != 6 || *eax_10 != 0)
                            ecx_7 += 1
                            eax_10 = &eax_10[0x9b]
                            
                            if (ecx_7 s>= 4)
                                goto label_50e8dc
                        
                        int32_t eax_16 = ecx_7 * 0x26c
                        int32_t ecx_14 = *(eax_16 + eax_9 + 0x270)
                        
                        if (ecx_14 == 0)
                        label_50e8dc:
                            int32_t eax_12 = sub_50af00(sub_516f30(eax_8), &var_10)
                            int32_t* eax_13
                            int32_t ecx_10
                            eax_13, ecx_10 = sub_50af60(eax_12, var_10, &data_cc8de0, eax_12)
                            int32_t* edi_5 = eax_13
                            
                            if (edi_5 == 0x1426)
                                void* const i_1
                                
                                for (i_1 = &data_8177cc; i_1 s< "Prizes"; i_1 += 4)
                                    if (*i_1 == arg1)
                                        int32_t var_20_5 = 0
                                        return sub_50ac80(eax_13, arg1, 0x1425, i_1, 0)
                                
                                int32_t var_20_4 = 0
                                return sub_50ac80(eax_13, arg1, edi_5, i_1, 0)
                            
                            if (edi_5 == 0x1422)
                                eax_13 = &data_8177c8
                                
                                while (*eax_13 != arg1)
                                    eax_13 = &eax_13[1]
                                    
                                    if (eax_13 s>= &data_8177cc)
                                        int32_t var_20_6 = 0
                                        return sub_50ac80(eax_13, arg1, edi_5, ecx_10, 0)
                                
                                edi_5 = 0x141e
                            
                            int32_t var_20_7 = 0
                            return sub_50ac80(eax_13, arg1, edi_5, ecx_10, 0)
                        
                        eax_1 = nullptr
                        
                        if (ecx_14 s> 0)
                            do
                                if (*(*(eax_16 + eax_9 + 0x10) + (eax_1 << 2)) == arg1)
                                    goto label_50e8dc
                                
                                eax_1 += 1
                            while (eax_1 s< ecx_14)
                        
                    label_50e9ae:
                        ebx_2 += 1
                        
                        if (ebx_2 s>= var_10)
                            break
                        
                        edx_7 = var_c_2
                
                break
            
            ecx_5 += 1
            edx_6 = &edx_6[0x9b]
            
            if (ecx_5 s>= 4)
                var_20_1 = "LandscapeMod"
                var_24 = 0xc28
                goto label_50ec32_2
        
        goto label_50e702
    
    eax_1 = sub_516f30(0x1450)
    int32_t i_2 = 0
    int32_t* edx_1 = eax_1
    
    do
        if (edx_1[3] == 3)
            int32_t* edx_2 = &edx_1[4]
            int32_t ebx_1 = 0
            var_10 = edx_2
            eax_1 = eax_1[i_2 * 0x9b + 0x9c]
            int32_t* var_c_1 = eax_1
            
            if (eax_1 s> 0)
                while (true)
                    int32_t eax_3 = edx_2[ebx_1]
                    int32_t eax_4 = sub_516f30(eax_3)
                    int32_t j = 0
                    int32_t* edx_3 = eax_4 + 0xc
                    int32_t ecx_2
                    
                    do
                        if (*edx_3 == 2)
                            eax_1 = j * 0x26c
                            int32_t ecx_4 = *(eax_1 + eax_4 + 0x10)
                            
                            if (ecx_4 == 0)
                                goto label_50e755
                            
                            if (data_cca78c != 0)
                                goto label_50eaf7
                            
                            data_cca78c = data_cca788
                            data_cca788 = arg1
                            eax_1 = ecx_4()
                            ecx_2 = data_cca78c
                            data_cca788 = ecx_2
                            data_cca78c = 0
                            
                            if (eax_1.b != 0)
                                goto label_50e779
                            
                            goto label_50e804
                        
                        j += 1
                        edx_3 = &edx_3[0x9b]
                    while (j s< 4)
                    
                label_50e755:
                    ecx_2 = 0
                    eax_1 = eax_4 + 0x274
                    
                    while (eax_1[-0x9a] != 6 || *eax_1 != 0)
                        ecx_2 += 1
                        eax_1 = &eax_1[0x9b]
                        
                        if (ecx_2 s>= 4)
                            goto label_50e779
                    
                    eax_1 = ecx_2 * 0x26c
                    ecx_2 = *(eax_1 + eax_4 + 0x270)
                    int32_t edx_5 = *(eax_1 + eax_4 + 0x10)
                    
                    if (ecx_2 == 0)
                    label_50e779:
                        int32_t var_20_2 = 0
                        return sub_50ac80(eax_1, arg1, eax_3, ecx_2, 0)
                    
                    eax_1 = nullptr
                    
                    if (ecx_2 s> 0)
                        do
                            if (*(edx_5 + (eax_1 << 2)) == arg1)
                                goto label_50e779
                            
                            eax_1 += 1
                        while (eax_1 s< ecx_2)
                    
                label_50e804:
                    ebx_1 += 1
                    
                    if (ebx_1 s>= var_c_1)
                        break
                    
                    edx_2 = var_10
            
            break
        
        i_2 += 1
        edx_1 = &edx_1[0x9b]
    while (i_2 s< 4)
    
label_50e702:
    var_20_1 = "LandscapeMod"
    var_24 = 0xc28
label_50ec32:
    ecx_21 = "Halt"
else if (ecx != 0)
label_50ec28:
    var_20_1 = "LandscapeMod"
    var_24 = 0xb77
label_50ec32_1:
    ecx_21 = "Halt"
else
    int32_t ecx_20
    
    if (eax_1 != 0x40)
        if (ecx != 0)
            goto label_50ec28
        
        if (eax_1 != 0x100)
            if (ecx != 0 || eax_1 != 0x800)
                goto label_50ec28
            
            edi_6 = 0x1644
            goto label_50eb23
        
        int32_t eax_21 = sub_50af00(sub_516f30(0x157c), &var_10)
        eax_1 = sub_516f30(sub_50af60(eax_21, var_10, &data_cc8de0, eax_21))
        int32_t* edi_7 = eax_1
        int32_t ecx_19 = 0
        void* edx_18 = &edi_7[3]
        
        while (true)
            if (*edx_18 == 1)
                eax_1 = ecx_19 * 0x26c
                ecx_20 = *(eax_1 + edi_7 + 0x10)
            label_50eaea:
                
                if (data_cca78c != 0)
                    break
                
                data_cca78c = data_cca788
                data_cca788 = arg1
                ecx_20()
                int32_t result = data_cca78c
                data_cca788 = result
                data_cca78c = 0
                return result
            
            ecx_19 += 1
            edx_18 += 0x26c
            
            if (ecx_19 s>= 4)
                var_20_1 = "CampaignPieceDefGetFn"
                var_24 = 0x30a
                goto label_50ec32_2
        
    label_50eaf7:
        var_20_1 = "CampaignContextPushPile"
        var_24 = 0x748
        ecx_21 = "gCampaignSetup.favoredPileStack == CARD_NONE"
    else
        edi_6 = 0x15e0
    label_50eb23:
        
        if (data_cca78c == 0)
            data_cca78c = data_cca788
            data_cca788 = arg1
            int32_t eax_25 = sub_50af00(sub_516f30(edi_6), &var_10)
            int32_t* eax_26 = sub_50af60(eax_25, var_10, &data_cc8de0, eax_25)
            int32_t ecx_24 = data_cca78c
            var_10 = eax_26
            data_cca788 = ecx_24
            data_cca78c = 0
            
            if (eax_26 == 0)
                return sub_63b5f0("no valid landmod")
            
            eax_1 = sub_516f30(eax_26)
            int32_t* ebx_3 = eax_1
            
            if (ebx_3[2] != edi_6)
                int32_t var_20_10 = 0
                return sub_50ac80(eax_1, arg1, var_10, eax_26, 0)
            
            int32_t i_3 = 0
            void* edx_21 = &ebx_3[3]
            
            do
                if (*edx_21 == 1)
                    eax_1 = i_3 * 0x26c
                    ecx_20 = *(eax_1 + ebx_3 + 0x10)
                    goto label_50eaea
                
                i_3 += 1
                edx_21 += 0x26c
            while (i_3 s< 4)
            
            var_20_1 = "CampaignPieceDefGetFn"
            var_24 = 0x30a
        label_50ec32_2:
            ecx_21 = "Halt"
        else
            var_20_1 = "CampaignContextPushPile"
            var_24 = 0x748
            ecx_21 = "gCampaignSetup.favoredPileStack == CARD_NONE"
sub_63b870(eax_1, &data_801800, ecx_21, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_24, var_20_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
