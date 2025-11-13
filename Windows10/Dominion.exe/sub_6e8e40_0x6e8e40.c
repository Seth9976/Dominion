// 函数: sub_6e8e40
// 地址: 0x6e8e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3

if (arg3[1] != 0x18)
    sub_63b870(arg1, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax = sub_5af880(arg3)

if (arg2 == 0)
    *arg4 = arg2
    *arg5 = eax[0x16]
    *arg6 = eax[0x15]
    int32_t* eax_1
    eax_1.b = 1
    return eax_1

int32_t* eax_2 = sub_6e6890(eax, arg2)

if (eax_2 == 0)
    *arg4 = 0
    *arg5 = eax[0x16]
    *arg6 = eax[0x15]
    int32_t* eax_7
    eax_7.b = 0
    return eax_7

*arg4 = eax_2[2]
*arg5 = eax_2[3] - eax_2[2] + 1
*arg6 = eax_2[4]
int32_t* eax_4
eax_4.b = 1
return eax_4
