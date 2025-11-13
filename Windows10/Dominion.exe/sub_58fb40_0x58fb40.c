// 函数: sub_58fb40
// 地址: 0x58fb40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 != 0x923)
    arg1 = 0
    
    while (true)
        int32_t edx = *(arg3 + (arg1 << 2))
        
        if (edx != 0)
            if (edx == arg2)
                break
            
            arg1 += 1
            
            if (arg1 s< 0xa)
                continue
        
        if (*(arg3 + 0x170) == arg2)
            break
        
        if (arg4 == 0 && *(arg3 + 0x118) == arg2)
            return sub_58fb40(1) != 0
        
        arg1.b = 0
        return arg1

arg1.b = 1
return arg1
