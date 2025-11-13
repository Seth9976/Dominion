// 函数: sub_5cb070
// 地址: 0x5cb070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax + 0x5068) == 1)
    void** var_8
    int32_t eax_2 = sub_5b0500(sub_4b93f0()[7], &var_8)
    int32_t ecx_2 = data_b809d4
    
    if (ecx_2 s< eax_2)
        return &var_8[ecx_2 * 0x29]

return 0
