// 函数: sub_4b5140
// 地址: 0x4b5140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_4b50b0(*arg1)
void* ecx_1 = data_cc8d5c

if (ecx_1 == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* result = sub_4bb050(ecx_1 + 0x507c, eax)
int32_t* result_1 = result

if (arg1[2].b != 0 && result_1[0x4bf] == 1)
    result = sub_4b0e60(sub_4b50b0(arg1[1]))
    result_1[0x4bf] = 2

return result
