// 函数: sub_65f080
// 地址: 0x65f080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0xffffffff

if (arg2 s<= arg4)
    int32_t eax = arg2 * 0x34
    
    while (true)
        if (eax s< 0 || arg2 s>= *(arg3 + 0x18))
            sub_63b870(eax, &data_801800, "index >= 0 && index < mSize", 
                "C:\x\ax2017\Engine\xDynArray.h", 0xe2, "XDynArray<struct TextEntry>::operator []")
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        int32_t* ecx = *(arg3 + 0x14)
        
        if ((*(ecx + eax + 4) & 1) == 0 && *(ecx + eax) != 1)
            result = arg2
        
        arg2 += 1
        eax += 0x34
        
        if (arg2 s> arg4)
            break
        
        continue

return result
