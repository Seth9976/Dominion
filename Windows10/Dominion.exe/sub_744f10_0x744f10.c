// 函数: sub_744f10
// 地址: 0x744f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* ecx = data_1512450
char const* const var_20
int32_t var_1c
char const* const var_18
int32_t* eax
char* ecx_1

if (ecx[1] == 0x1e)
    eax = sub_5af880(ecx)
    int32_t ecx_2 = 0
    int32_t esi_1 = eax[2]
    
    if (esi_1 s> 0)
        int32_t* edx = *eax
        
        do
            if (*edx == arg1)
                if (arg2 != 0)
                    *arg2 = ecx_2
                
                return ecx_2 * 0x178 + *eax
            
            ecx_2 += 1
            edx = &edx[0x5e]
        while (ecx_2 s< esi_1)
    
    var_18 = "FindElement"
    var_1c = 0x126
    var_20 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
    ecx_1 = "Halt"
else
    var_18 = "UIDefGet"
    var_1c = 0x127
    var_20 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax, &data_801800, ecx_1, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
