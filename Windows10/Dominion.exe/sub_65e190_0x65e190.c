// 函数: sub_65e190
// 地址: 0x65e190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *(arg1 + 0x50)
int32_t var_3c_1
char const* const var_38_1
char* ecx_2

if (ecx == 0)
    int32_t* ecx_4 = *(arg1 + 8)
    
    if (ecx_4 != 0)
        *ecx_4
        float eax_2 = sub_5a0e40()
        *(arg1 + 0x20)
        return eax_2
    
    var_38_1 = "FancyIconWidth"
    var_3c_1 = 0x28cc
    ecx_2 = "Halt"
    goto label_65e2b2

int32_t eax = *(arg1 + 0x54)
int32_t* ecx_1 = *ecx
int128_t var_14
int128_t* eax_1
int128_t xmm0
char const* const edx_1

if (eax == 0)
    if (ecx_1 == 0)
        var_38_1 = "UI2DefGet"
        var_3c_1 = 0xc16
        edx_1 = "UI2DefGet on null pointer"
        ecx_2 = &data_874470
        goto label_65e2bc
    
    if (ecx_1[1] != 0x22)
        var_38_1 = "UI2DefGet"
        var_3c_1 = 0xc17
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI2"
    label_65e2b2:
        edx_1 = &data_801800
    label_65e2bc:
        sub_63b870(eax, edx_1, ecx_2, "C:\x\ax2017\Engine\UI2.cpp", var_3c_1, var_38_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_1 = sub_5af880(ecx_1)
    
    if (*(eax_1 + 8) != 0)
        eax_1 = sub_64f140(eax_1, nullptr, *eax_1, &var_14, 0)
        xmm0 = *eax_1
    else
        xmm0 = data_7ff520
else
    int32_t var_30 = eax
    int32_t var_2c_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_28_1 = 0
    
    if (ecx_1 == 0)
        var_38_1 = "UI2DefGet"
        var_3c_1 = 0xc16
        edx_1 = "UI2DefGet on null pointer"
        ecx_2 = &data_874470
        goto label_65e2bc
    
    if (ecx_1[1] != 0x22)
        var_38_1 = "UI2DefGet"
        var_3c_1 = 0xc17
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI2"
        goto label_65e2b2
    
    eax_1 = sub_5af880(ecx_1)
    
    if (*(eax_1 + 8) == 0)
        xmm0 = data_7ff520
    else
        eax_1 = sub_64f140(eax_1, &var_30, *eax_1, &var_14, 1)
        xmm0 = *eax_1
var_14 = xmm0
*(arg1 + 0x20)
return eax_1
