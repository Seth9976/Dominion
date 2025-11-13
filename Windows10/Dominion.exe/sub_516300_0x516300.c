// 函数: sub_516300
// 地址: 0x516300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_cca780
int32_t var_28_1
char const* const var_24_1
int32_t* i
char* ecx_1

if (*ecx == 0)
    int32_t ecx_2 = ecx[1]
    
    if (ecx_2 s>= 3)
        i = (ecx_2 - 3) * 0x9c + 0x790198
        
        if (*i == ecx_2)
            int32_t esi_1 = i[arg1 * 2 + 4]
            int32_t edi_1 = i[arg1 * 2 + 5]
            
            if (esi_1 == 0)
            label_516501:
                return i
            
            i = sub_516f30(esi_1)
            int32_t* i_1 = i
            int32_t edx_1 = i_1[2]
            
            if (edx_1 s<= 0xdb0)
                int32_t var_24_2
                
                if (edx_1 == 0xdb0)
                    var_24_2 = 0
                    return sub_50ac80(i, edi_1, esi_1, esi_1, 0)
                
                if (edx_1 == 0xdad)
                    var_24_2 = 0
                    return sub_50ac80(i, edi_1, esi_1, esi_1, 0)
                
                if (edx_1 == 0x324 || edx_1 == 0x9cc)
                    return sub_516290()
                
                if (edx_1 == 0xdae)
                    var_24_2 = 0
                    return sub_50ac80(i, edi_1, esi_1, esi_1, 0)
                
                goto label_5163f9
            
            if (edx_1 == 0x157c)
                if (sub_50a6a0(i, edx_1, edi_1, 4, 0) == 0)
                    sub_63b5f0("couldn't add exp feature trait")
                
                i = nullptr
                void* ecx_11 = &i_1[3]
                
                do
                    if (*ecx_11 == 1)
                        i *= 0x26c
                        int32_t ecx_12 = *(i + i_1 + 0x10)
                        
                        if (data_cca78c != 0)
                            var_24_1 = "CampaignContextPushPile"
                            var_28_1 = 0x748
                            ecx_1 = "gCampaignSetup.favoredPileStack == CARD_NONE"
                            goto label_51651b
                        
                        data_cca78c = data_cca788
                        data_cca788 = edi_1
                        ecx_12()
                        i = data_cca78c
                        data_cca788 = i
                        data_cca78c = 0
                        goto label_516501_1
                    
                    i += 1
                    ecx_11 += 0x26c
                while (i s< 4)
                
                var_24_1 = "CampaignPieceDefGetFn"
                var_28_1 = 0x30a
                ecx_1 = "Halt"
            else
                if (edx_1 == 0x1770)
                    return sub_50b2a0(esi_1)
                
                if (edx_1 == 0x1b58)
                    int32_t var_10 = esi_1
                    int32_t* var_40_1 = &var_10
                    int32_t* var_48 = &std::_Func_impl_no_alloc<class <lambda_1a26e074cbf2dcc23cd5d8b5a34d12ea>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
                    int32_t var_44_1 = 1
                    int32_t** var_24_3 = &var_48
                    int32_t edx_3
                    i, edx_3 = sub_50ad20(&var_48, 0, &data_cca794, var_48)
                    
                    if (i == 0)
                    label_516501_1:
                        return i
                    
                    int32_t eax_5
                    int32_t ecx_7
                    eax_5, ecx_7 = sub_50a6a0(i, edx_3, i, 0, 0)
                    int32_t var_24_5 = 0
                    return sub_50ac80(eax_5, i, var_10, ecx_7, 0)
                
            label_5163f9:
                var_24_1 = "CampaignAddExpFeature"
                var_28_1 = 0x1b69
                ecx_1 = "Halt"
        else
            var_24_1 = "ExpansionCampaignDefGet"
            var_28_1 = 0x672
            ecx_1 = "retval.exp == exp"
    else
        var_24_1 = "ExpansionCampaignDefGet"
        var_28_1 = 0x669
        ecx_1 = "exp >= DOM_EXP_INTRIGUE"
else
    var_24_1 = "CampaignAddExpFeature"
    var_28_1 = 0x1b3d
    ecx_1 = "setup.params.type == CAMPAIGNTYPE_EXPANSION"

label_51651b:
sub_63b870(i, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
