// 函数: sub_643ae0
// 地址: 0x643ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t* var_4 = ecx
int32_t result = data_cf6b14

if (result == 0)
    void* eax = sub_5af880(ecx)
    char ecx_1 = *(eax + 0x10)
    
    if (*(eax + 0x11) == 0)
        if (ecx_1 == 0)
            return 0x7d0
        
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Draw3d.cpp", 0x232, 
            "GetSortLayerFromMaterial")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = 0x3e8
    
    if (ecx_1 == 0)
        return 0x7d0

return result
