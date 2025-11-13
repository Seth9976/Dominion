// 函数: sub_4d2030
// 地址: 0x4d2030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* eax = data_cc8dc0

if (eax == 0)
    sub_63b870(eax, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_1 = *(eax + 0xc)
uint32_t eax_4
void** edx_1

if (eax_1 == 0)
    eax_4 = sub_64e7a0(ecx)
    edx_1 = &data_cadf60
else
    if (eax_1 != 1)
        return eax_1 - 1
    
    eax_4 = sub_64e7a0(ecx)
    edx_1 = &data_cadf54

return sub_665db0(eax_4, edx_1, eax_4, 0x3f800000, 0xffffffff, 0)
