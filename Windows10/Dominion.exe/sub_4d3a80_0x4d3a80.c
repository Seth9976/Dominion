// 函数: sub_4d3a80
// 地址: 0x4d3a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(sub_64e7a0(arg1) + 0x18bc) = sub_4d3840
void* eax_1 = data_cc8d5c

if (eax_1 == 0)
    sub_63b870(eax_1, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t eax_3 = *(eax_1 + 0x7694)

if (eax_3 != 1 && eax_3 == 2)
    return eax_3 - 2

uint32_t eax_6 = sub_64e7a0(arg1)
return sub_665db0(eax_6, &data_8dc9d4, eax_6, 0x3f800000, 0xffffffff, 0)
