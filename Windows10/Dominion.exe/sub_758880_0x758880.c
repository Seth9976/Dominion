// 函数: sub_758880
// 地址: 0x758880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2[1] != 0x15)
    int32_t eax
    sub_63b870(eax, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
        "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = sub_5af880(arg2)
void* result_1 = result
int32_t* esi = *(result_1 + 0x28)

if (esi != 0)
    sub_75f610(*(arg1 + 4), esi)
    result = (*(*esi + 4))(1)
    *(result_1 + 0x28) = 0

return result
