// 函数: sub_697380
// 地址: 0x697380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
char const* const var_8
void* eax
char* ecx

if (arg1[1] == 0x1e)
    eax = sub_5af880(arg1)
    
    if (arg2 s>= 0)
        if (arg2 s< *(eax + 8))
            return arg2 * 0x178 + *eax
        
        var_8 = "UIDefGetElement"
        var_c = 0x12f
        ecx = "index < def.numElements"
    else
        var_8 = "UIDefGetElement"
        var_c = 0x12e
        ecx = "index >= 0"
else
    var_8 = "UIDefGet"
    var_c = 0x127
    ecx = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\UIDef.cpp", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
