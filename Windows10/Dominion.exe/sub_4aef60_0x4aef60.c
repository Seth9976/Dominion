// 函数: sub_4aef60
// 地址: 0x4aef60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* result = data_cc8d5c
var_8:3.b = arg1.b

if (result == 0)
    sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(result + 0x18) == 3)
    result = *(result + 0x14)
    void* ecx = data_147abf4
    
    if (result != 0)
        uint32_t edx_1 = zx.d(result.w)
        
        if (edx_1 u< *(ecx + 4))
            void* esi_2 = edx_1 * 0x64 + *ecx
            
            if (*(esi_2 + 0x60) == result && esi_2 != 0)
                int32_t var_10_1 = 0xf42b4
                sub_689e00(result, 1, esi_2 + 0x50)
                return sub_689be0(&var_8:3, 1, esi_2 + 0x50, &var_8:3)

return result
