// 函数: sub_615d00
// 地址: 0x615d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = sub_5cc410(arg2, arg3, arg2, 0, 0)

if (eax_1 == 0)
    sub_63b870(eax_1, &data_801800, "pPile", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x9b0, 
        "DomPileGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 0x70)
uint32_t result

while (true)
    if (eax_2 == 0)
        return 0
    
    result = sub_5cba00(eax_2)
    int32_t ecx_2 = 0
    eax_2 = *(result + 0x1b94)
    
    if (arg6 s<= 0)
    label_615d7c:
        
        if (sub_575830(eax_2, (*(result + 0x98)).w, 0xb80ad8, arg4) != 0)
            break
    else
        while (*(arg5 + (ecx_2 << 2)) != *(result + 0x98))
            ecx_2 += 1
            
            if (ecx_2 s>= arg6)
                goto label_615d7c

return result
