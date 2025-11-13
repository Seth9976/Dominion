// 函数: sub_6b83a0
// 地址: 0x6b83a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
void* eax = data_147abe8

if (eax == 0)
    sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edx = *(eax + 0x10)

if (arg1 != 0)
    uint32_t eax_2 = zx.d(arg1.w)
    
    if (eax_2 u< *(edx + 4))
        void* const result = eax_2 * 0x7c + *edx
        
        if (*(result + 0x78) != arg1)
            return nullptr
        
        return result

return 0
