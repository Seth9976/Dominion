// 函数: sub_744e90
// 地址: 0x744e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_1512450
char const* const var_10
int32_t var_c
char const* const var_8
int32_t result
char* ecx_1

if (ecx[1] == 0x1e)
    int32_t* eax = sub_5af880(ecx)
    result = 0
    int32_t edx_1 = eax[2]
    
    if (edx_1 s> 0)
        int32_t* ecx_3 = *eax
        
        do
            if (*ecx_3 == arg1)
                return result
            
            result += 1
            ecx_3 = &ecx_3[0x5e]
        while (result s< edx_1)
    
    var_8 = "FindElementIndex"
    var_c = 0x117
    var_10 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
    ecx_1 = "Halt"
else
    var_8 = "UIDefGet"
    var_c = 0x127
    var_10 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(result, &data_801800, ecx_1, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
