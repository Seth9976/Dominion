// 函数: sub_64f350
// 地址: 0x64f350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_20
char* ecx
char const* const edx

if (arg3 != 0)
    if (arg3[1] == 0x22)
        int32_t** eax = sub_5af880(arg3)
        
        if (eax[2] != 0)
            void var_18
            *arg4 = *sub_64f140(eax, nullptr, *eax, &var_18, 0)
            return arg4
        
        *arg4 = data_7ff520
        return arg4
    
    char const* const var_1c_1 = "UI2DefGet"
    var_20 = 0xc17
    edx = &data_801800
    ecx = "ptr->assetType == ASSET_TYPE_UI2"
else
    char const* const var_1c = "UI2DefGet"
    var_20 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx = &data_874470

sub_63b870(arg1, edx, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_20, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
