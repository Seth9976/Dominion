// 函数: sub_5003d0
// 地址: 0x5003d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t ecx
eax, ecx = sub_573400()
int32_t* esi = *(eax + 0x64)

if (*esi != 0)
    sub_63b870(eax, &data_801800, "c.triggerInfo->type == TRIGGERINFO_GAIN", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1c90, "CostAtGainMoment")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi_1 = esi[3]
int32_t var_8 = ecx
char result
int32_t ecx_1
result, ecx_1 = sub_568240(esi_1, 3)

if (result == 0)
    int32_t var_8_1 = ecx_1
    result = sub_568240(esi_1, 4)
    
    if (result == 0)
        return result

return 1
