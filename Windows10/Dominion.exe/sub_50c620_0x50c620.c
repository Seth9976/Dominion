// 函数: sub_50c620
// 地址: 0x50c620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = data_cca788
int32_t var_c
char const* const var_8
int32_t* result
char* ecx

if (i != 0)
    result = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    
    if (result == 0)
    label_50c6e3:
        var_8 = "CardMod_ShuffleSplitPile"
        var_c = 0x7e2
        ecx = "IsCategory(what, CATEGORY_SPLIT)"
    else
        while (i != *result)
            result = result[4]
            
            if (result == 0)
                goto label_50c6e3
        
        void* ecx_5 = &result[1]
        
        if (ecx_5 == 0)
            goto label_50c6e3
        
        result = nullptr
        int32_t ecx_6 = *(ecx_5 + 4)
        
        if (ecx_6 s<= 0)
            goto label_50c6e3
        
        while (true)
            if (*(*ecx_5 + (result << 2)) == 0x32)
                int32_t i_1 = 0
                result = data_cca780 + 0x58c + (data_cca784 << 0xb)
                
                do
                    if (*result == 0)
                        result[1] = i
                        *result = 0xdc1
                        result[2] = 0xffffffff
                        result[3] = 0
                        result[4] = 0
                        return result
                    
                    i_1 += 1
                    result = &result[5]
                while (i_1 s< 0x20)
                
                var_8 = "CampaignAddExtra"
                var_c = 0x242
                ecx = "Halt"
                break
            
            result += 1
            
            if (result s>= ecx_6)
                goto label_50c6e3
else
    var_8 = "CampaignContextFavoredPile"
    var_c = 0x6cf
    ecx = "gCampaignSetup.favoredPile != CARD_NONE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
