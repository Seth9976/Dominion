// 函数: sub_622830
// 地址: 0x622830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
void* eax_1 = sub_4b9680(&sub_4b9480()[2], arg2)
int32_t ecx_1 = *(eax_1 + 0x228)
void* edx_1 = eax_1 + 0x28

if (ecx_1 s< 0)
    sub_63b870(eax_1, &data_801800, "player.smartplays.numSmartplays >= 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xe534, "PlayerGetSmartplays")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = 0

if (ecx_1 s> 0)
    do
        if (*edx_1 == arg3)
            int32_t eax_4
            eax_4.b = *(edx_1 + 4) == arg4
            return eax_4
        
        eax_2 += 1
        edx_1 += 8
    while (eax_2 s< ecx_1)

int32_t eax_3
eax_3.b = sub_61cee0() == arg4
return eax_3
