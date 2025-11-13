// 函数: sub_757b20
// 地址: 0x757b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t result

if (((*(arg1 + 0x10) u>> 0x11).b & 1) == 0)
    var_c = arg1 + 0x10
label_757b93:
    void* eax_3 = *(arg1 + 0x1c0)
    int32_t* ecx_4 = *(eax_3 + 0x68)
    
    if (ecx_4[1] != 0x15)
        sub_63b870(eax_3, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
            "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(sub_5af880(ecx_4) + 0x18) != 1)
        if ((*(arg1 + 0x10) & 1) == 0)
            result.b = 1
            return result
        
        if (((*var_c u>> 0x11).b & 1) != 0)
            ov_raw_seek(*(arg1 + 0x78c) * 0x2e0 + 0x1c8 + arg1, 0, 0)
            *(arg1 + 0x794) = 0
    else
        int32_t ecx_5 = *(arg1 + 0x78c)
        
        if (ecx_5 == 0)
            *(arg1 + 0x78c) = 1
            *(arg1 + 0x794) = 0
        else if (((*(arg1 + 0x10) u>> 0x11).b & 1) != 0)
            ov_raw_seek(ecx_5 * 0x2e0 + 0x1c8 + arg1, 0, 0)
            *(arg1 + 0x794) = 0
    
    *(arg1 + 0x790) = 0
else
    result = ov_read_float(*(arg1 + 0x78c) * 0x2e0 + 0x1c8 + arg1, arg1 + 0x798, 0x800, &var_c)
    
    if (result s< 0)
        sub_63b870(result, &data_801800, "result >= 0", "C:\x\ax2017\Engine\SoundOgg.cpp", 0x1a1, 
            "SoundOggReadFrameFloat")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(arg1 + 0x794) = result
    *(arg1 + 0x790) = 0
    
    if (result s<= 0)
        var_c = arg1 + 0x10
        goto label_757b93

result.b = 0
return result
