// 函数: sub_4bc4b0
// 地址: 0x4bc4b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg1
int32_t* var_4 = arg1
void* ecx = data_cc8d5c

if (ecx != 0)
    eax = sub_4bb050(ecx + 0x507c, eax)
    int32_t* ecx_2 = data_cc8d5c
    eax[0x4c0].b = 1
    
    if (ecx_2 != 0)
        int32_t result = *ecx_2
        int32_t ecx_3 = ecx_2[1]
        eax[0x4c2] = result
        eax[0x4c3] = ecx_3
        return result

sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
