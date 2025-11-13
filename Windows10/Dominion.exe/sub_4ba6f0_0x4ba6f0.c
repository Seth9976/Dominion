// 函数: sub_4ba6f0
// 地址: 0x4ba6f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_cc8d5c
void* result = nullptr

if (ecx == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* i_1 = *(ecx + 0x7754)
void* i = i_1
void* edx = i_1 + *(ecx + 0x7758) * 0xc

if (i u< edx)
    while ((*(i + 8) & 0xffff0000) == 0)
        i += 0xc
        
        if (i u>= edx)
            return 0
    
    while (i != 0xffffffff)
        if (result == 0 || *(result + 4) s< *(i + 4))
            result = i
        
        if (i != 0)
            i += 0xc
            
            if (i u>= edx)
                break
        else
            i = i_1
        
        while ((*(i + 8) & 0xffff0000) == 0)
            i += 0xc
            
            if (i u>= edx)
                return result

return result
