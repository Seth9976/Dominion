// 函数: sub_64cc90
// 地址: 0x64cc90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *(arg1 + 0x1600)
int32_t var_c
char const* const var_8
int32_t* eax
char* ecx_1
char const* const edx

if (ecx != 0)
    if (ecx[1] == 0x22)
        eax = sub_5af880(ecx)
        int32_t ecx_2 = *(arg1 + 0x1604)
        
        if (ecx_2 s>= 0)
            if (ecx_2 s< eax[2])
                return *eax + ecx_2 * 0x18
            
            var_8 = "UI2GetAttribItem"
            var_c = 0xc25
            ecx_1 = "item.attribItemIndex < def.el.numItems"
        else
            var_8 = "UI2GetAttribItem"
            var_c = 0xc24
            ecx_1 = "item.attribItemIndex >= 0"
    else
        var_8 = "UI2DefGet"
        var_c = 0xc17
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx = &data_801800
else
    var_8 = "UI2DefGet"
    var_c = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx_1 = &data_874470

sub_63b870(eax, edx, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
