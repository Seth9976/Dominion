// 函数: sub_4bb950
// 地址: 0x4bb950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax + 0x18) != 3)
    eax.b = 0
    return eax

void* eax_1 = *(eax + 0x14)
void* ecx_1 = data_147abf4

if (eax_1 != 0)
    uint32_t edx_1 = zx.d(eax_1.w)
    
    if (edx_1 u< *(ecx_1 + 4))
        void* esi_2 = edx_1 * 0x64 + *ecx_1
        
        if (*(esi_2 + 0x60) == eax_1 && esi_2 != 0)
            int32_t var_10_1 = 0xf42d1
            sub_689be0(sub_689e00(eax_1, 0x10, esi_2 + 0x50), 0x10, esi_2 + 0x50, arg1)

eax_1.b = 1
return eax_1
