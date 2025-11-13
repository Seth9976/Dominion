// 函数: sub_5156c0
// 地址: 0x5156c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_8 = eax_1
int32_t var_6c
char const* const var_68
char* ecx

if (arg1 s>= 3)
    eax_1 = (arg1 - 3) * 0x9c + 0x790198
    
    if (*eax_1 == arg1)
        int32_t ebx_1 = data_cca784
        int32_t ecx_1 = 0
        int32_t i = 0
        int32_t var_50_1 = 0
        eax_1 = &eax_1[0x11]
        int32_t* var_58_1 = eax_1
        int32_t* var_54_1 = eax_1
        int32_t var_4c[0x11]
        
        do
            if (*eax_1 != 0)
                int32_t edx_1 = 0
                
                if (ebx_1 s> 0)
                    int32_t* eax_5 = data_cca780 + 0x54c
                    
                    do
                        if (eax_5[-1] == arg1)
                            ebx_1 = data_cca784
                            
                            if (*eax_5 == var_58_1[i])
                                ecx_1 = var_50_1
                                eax_1 = var_54_1
                                goto label_51577c
                        
                        edx_1 += 1
                        eax_5 = &eax_5[0x200]
                    while (edx_1 s< ebx_1)
                    
                    ecx_1 = var_50_1
                    eax_1 = var_54_1
                
                var_4c[ecx_1] = *eax_1
                ecx_1 += 1
                var_50_1 = ecx_1
            
        label_51577c:
            i += 1
            eax_1 = &eax_1[1]
            var_54_1 = eax_1
        while (i s< 0x10)
        
        if (ecx_1 s> 0)
            uint32_t result = var_4c[sub_63ed10(&data_cc8de0, ecx_1)]
            CookieCheckFunction(result)
            return result
        
        var_68 = "RandomSubtheme"
        var_6c = 0x198b
        ecx = "numCategories > 0"
    else
        var_68 = "ExpansionCampaignDefGet"
        var_6c = 0x672
        ecx = "retval.exp == exp"
else
    var_68 = "ExpansionCampaignDefGet"
    var_6c = 0x669
    ecx = "exp >= DOM_EXP_INTRIGUE"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_6c, var_68)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
