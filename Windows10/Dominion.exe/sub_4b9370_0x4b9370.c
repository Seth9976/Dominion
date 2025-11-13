// 函数: sub_4b9370
// 地址: 0x4b9370
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

uint32_t result = *(ecx + 0x5068)

if (result != 0)
    if (result != 2)
        result.b = 1
        return result
    
    int32_t edx_1 = *(ecx + 0x506c)
    
    if (edx_1 != 0)
        result = zx.d(edx_1.w)
        
        if (result u< *(ecx + 0x5080) && *(result * 0x1330 + *(ecx + 0x507c) + 0x1328) == edx_1)
            result.b = 1
            return result

result.b = 0
return result
