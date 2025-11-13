// 函数: sub_4b1f60
// 地址: 0x4b1f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_cc8d5c

if (esi == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(esi + 0x5068) == 2)
    int32_t eax_1 = sub_5d0e60()
    *(esi + 0x5068) = 0
    return eax_1

sub_5d0e60()
void* eax_2 = sub_4d6110(esi + 0x5098)
*(esi + 0x5068) = 0
return eax_2
