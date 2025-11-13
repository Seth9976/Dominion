// 函数: sub_4b9510
// 地址: 0x4b9510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax + 0x5068) == 0)
    eax.b = 0
    return eax

int32_t* eax_1 = sub_4b9480()
int32_t edx = 0
int32_t i_1 = eax_1[0x46a]

if (i_1 s> 0)
    eax_1 = &eax_1[0x17]
    int32_t i
    
    do
        int32_t ecx_1 = *eax_1
        
        if (ecx_1 == 0x3e8 || ecx_1 == 0x3e9)
            edx += 1
        
        eax_1 = &eax_1[0x8b]
        i = i_1
        i_1 -= 1
    while (i != 1)

eax_1.b = edx s> 1
return eax_1
