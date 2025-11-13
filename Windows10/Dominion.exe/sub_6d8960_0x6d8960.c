// 函数: sub_6d8960
// 地址: 0x6d8960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg3 + 0x3f4)
int32_t result = 0

if (esi s> 0)
    void* ecx = arg3 + 0x3f8
    
    while (*ecx != arg2)
        result += 1
        ecx += 0x14
        
        if (result s>= esi)
            return result
    
    void* eax = *(ecx + 0xc)
    
    if (*(eax + 0x10) != 0xf)
        sub_63b870(eax, &data_801800, "renderState.renderStateType->defType == DT_ASSET_PTR", 
            "C:\x\ax2017\Engine\Material.cpp", 0x30d, "MaterialStateReplaceTexture")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = arg4
    *(ecx + 0x10) = result

return result
