// 函数: sub_5e4ca0
// 地址: 0x5e4ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = 0x22
void* esi = &data_b8221c
void* eax_1

while (true)
    if (edi s>= 0x48)
        sub_591930()
    
    if (*esi != 0)
        eax_1 = data_cc8d5c
        
        if (eax_1 == 0)
            break
        
        int32_t edx_1
        
        if (*(eax_1 + 0x5068) == 0)
            edx_1 = 0x18
        else
            edx_1 = sub_4b9480()[0xc]
        
        if ((*(sub_571b30(*esi, edx_1) + 0x98) & 0x10000000) != 0)
            return *(esi + 8)
        
        esi += 0x10
        edi += 1
        
        if (esi s<= 0xb8225c)
            continue
    
    return 0

sub_63b870(eax_1, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
