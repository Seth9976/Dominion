// 函数: sub_511230
// 地址: 0x511230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_cca790
int32_t var_24
char const* const var_20_1
int32_t eax
char* ecx

if (esi == arg1)
    int32_t* esi_3
    
    if (esi != 2)
        esi_3 = data_cca780 + ((esi + 0xa02) << 3)
    else
        esi_3 = data_cca780 + 0x540 + (data_cca784 << 0xb)
    
    if (*esi_3 != 0)
    label_511319:
        int32_t eax_9 = sub_516f30(*esi_3)
        int32_t ecx_7 = 0
        int32_t edx_4 = eax_9
        int32_t var_10
        int32_t esi_5
        
        while (true)
            if (*(edx_4 + 0xc) == 3)
                esi_5 = edx_4 + 0x10
                eax = *(ecx_7 * 0x26c + eax_9 + 0x270)
                break
            
            ecx_7 += 1
            edx_4 += 0x26c
            
            if (ecx_7 s>= 4)
                esi_5 = var_10
                eax = 0
                break
        
        if (arg2 s< 0)
            var_20_1 = "RollMissionBlueprint"
            var_24 = 0x1241
            ecx = "themeLetter >= 0"
        else if (arg2 s< eax)
            int32_t result = *(esi_5 + (arg2 << 2))
            eax = *(sub_516f30(result) + 8)
            
            if (eax == 0x325 || eax == 0x324)
                return result
            
            if (eax == 0x323)
                int32_t eax_13 = sub_50af00(sub_516f30(result), &var_10)
                result = sub_50af60(eax_13, var_10, &data_cc8de0, eax_13)
                eax = sub_516f30(result)
                int32_t ecx_12 = *(eax + 8)
                
                if (ecx_12 == 0x325 || ecx_12 == 0x324)
                    return result
                
                var_20_1 = "RollMissionBlueprint"
                var_24 = 0x124d
                ecx = "defThemeFinal.type == CTHEME_BLUEPRINT || defThemeFinal.type == CTHEME_BLUEPRINT_FN"
            else
                var_20_1 = "RollMissionBlueprint"
                var_24 = 0x1249
                ecx = "defTheme.type == CTHEME_BLUEPRINT_TABLE"
        else
            var_20_1 = "RollMissionBlueprint"
            var_24 = 0x1242
            ecx = "themeLetter < numPieces"
    else
        int32_t eax_4
        int32_t edx_1
        
        if (sub_50e490() s> 2)
            int32_t var_c
            eax_4 = sub_50af00(sub_516f30(0x322), &var_c)
            edx_1 = var_c
        else
            int32_t var_8
            eax_4 = sub_50af00(sub_516f30(0x321), &var_8)
            edx_1 = var_8
        
        int32_t eax_6 = sub_50af60(eax_4, edx_1, &data_cc8de0, eax_4)
        *esi_3 = eax_6
        eax = sub_516f30(eax_6)
        int32_t i = 0
        int32_t* edx_3 = eax + 0xc
        
        do
            if (*edx_3 == 1)
                (*(i * 0x26c + eax + 0x10))()
                goto label_511319
            
            i += 1
            edx_3 = &edx_3[0x9b]
        while (i s< 4)
        
        var_20_1 = "CampaignPieceDefGetFn"
        var_24 = 0x30a
        ecx = "Halt"
else
    var_20_1 = "RollMissionBlueprint"
    var_24 = 0x122b
    ecx = "gCampaignSetup.currentThemeIndex == themeIndex"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_24, 
    var_20_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
