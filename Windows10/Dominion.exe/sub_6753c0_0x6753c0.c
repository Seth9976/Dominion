// 函数: sub_6753c0
// 地址: 0x6753c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_c28c58
int32_t var_c
char const* const var_8
void* result
char* ecx

if (esi s> 0)
    int32_t ecx_1 = 0xffffffff
    result = nullptr
    
    if (esi s> 0)
        do
            int32_t edx_1 = (&data_c27c58)[result]
            
            if (ecx_1 == 0xffffffff || ecx_1 s> edx_1)
                ecx_1 = edx_1
            
            result += 1
        while (result s< esi)
    
    if (esi s<= 0 || ecx_1 == 0xffffffff)
        var_8 = "UI2GetHighestEl"
        var_c = 0x4f61
        ecx = "bestIndex != -1"
    else
        int32_t esi_1 = data_c27c20
        int32_t var_c_1 = ecx_1
        uint32_t eax = sub_64e7a0(data_c27c24)
        result = sub_665950(eax, esi_1, eax, ecx_1)
        
        if (result != 0)
            return result
        
        var_8 = "UI2ElementByIndex"
        var_c = 0x360b
        ecx = "result"
else
    var_8 = "UI2GetHighestEl"
    var_c = 0x4f54
    ecx = "gUI2Editor.s.activeSetCount > 0"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
