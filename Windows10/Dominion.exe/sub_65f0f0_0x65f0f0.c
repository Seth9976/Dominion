// 函数: sub_65f0f0
// 地址: 0x65f0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0xffffffff

if (arg2 s<= arg4)
    int32_t* ecx = arg2 * 0x34
    
    while (true)
        int32_t result_1 = result
        
        if (ecx s< 0 || arg2 s>= *(arg3 + 0x18))
            sub_63b870(arg1, &data_801800, "index >= 0 && index < mSize", 
                "C:\x\ax2017\Engine\xDynArray.h", 0xe2, "XDynArray<struct TextEntry>::operator []")
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        arg1 = *(arg3 + 0x14)
        result = arg2
        
        if (*(ecx + arg1) == 1)
            result = result_1
        
        arg2 += 1
        ecx = &ecx[0xd]
        
        if (arg2 s> arg4)
            break
        
        continue

return result
