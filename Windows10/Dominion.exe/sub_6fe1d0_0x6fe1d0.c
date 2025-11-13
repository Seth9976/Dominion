// 函数: sub_6fe1d0
// 地址: 0x6fe1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abe8
arg4[1] = arg3
int32_t ecx = *arg3

if (eax == 0)
    sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi = *(eax + 0x14)

if (ecx != 0)
    uint32_t eax_2 = zx.d(ecx.w)
    
    if (eax_2 u< *(esi + 4))
        arg4[2].b = 0
        void* const eax_4 = eax_2 * 0x34 + *esi
        
        if (*(eax_4 + 0x30) != ecx)
            eax_4 = nullptr
        
        *arg4 = eax_4
        return arg4

*arg4 = 0
arg4[2].b = 0
return arg4
