// 函数: sub_4b4f50
// 地址: 0x4b4f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_cc8d5c

if (ecx == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_1 = sub_4bb050(ecx + 0x507c, arg2)
void var_28
uint32_t eax_3 = sub_4b4cc0(&var_28, *(arg1 + 0xc), eax_1, &var_28)
int128_t result_1 = *eax_3
int64_t xmm0 = *(eax_3 + 0x10)
void* result = result_1
int128_t result_2 = result_1
int64_t var_40 = xmm0

if (result == 1)
    return sub_4b1fd0(result + 1, arg2)

if (result_2:0xc.d == 0xffffffff)
    return result

return sub_4b4e70(*eax_1, &result_2)
