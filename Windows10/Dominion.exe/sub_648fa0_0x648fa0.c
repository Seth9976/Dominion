// 函数: sub_648fa0
// 地址: 0x648fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_147ab9c

if (result != 0)
    int32_t ecx_1 = data_147ab98
    int32_t edx_1
    
    if (ecx_1 s>= 0)
        edx_1 = data_e76b40
        result += ecx_1
    
    int32_t var_c
    char* ecx_4
    
    if (ecx_1 s< 0 || result s> edx_1)
        char const* const var_8_1 = "RenderDrawInstancedMeshes"
        var_c = 0x946
        ecx_4 = "sortIndex >= 0 && sortIndex + gDraw3DData.instancedMeshCount <= gDraw3DData.renderItemCount"
    label_64901f:
        sub_63b870(result, &data_801800, ecx_4, "C:\x\ax2017\Engine\Draw3d.cpp", var_c, 
            "RenderDrawInstancedMeshes")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = *((ecx_1 << 2) + &data_1476b90)
    
    if (result s< 0 || result s> edx_1)
        char const* const var_8 = "RenderDrawInstancedMeshes"
        var_c = 0x949
        ecx_4 = "firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount"
        goto label_64901f
    
    result = sub_6437e0(sub_642ef0(result * 0x180 + 0xcf6b40))
    data_147ab9c = 0

return result
