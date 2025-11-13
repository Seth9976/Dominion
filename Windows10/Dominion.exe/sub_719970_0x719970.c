// 函数: sub_719970
// 地址: 0x719970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 - 1 u<= 3)
    switch (arg3)
        case 1
            if (arg2 s>= 0)
                if (arg2 s>= arg4)
                    return arg4 - 1
                
                return arg2
        case 2
            if (arg2 s< 0)
                if (arg2 s< arg4)
                    return neg.d(arg2)
                
                return arg4 - 1
            
            if (arg2 s< arg4)
                return arg2
            
            int32_t eax_2 = arg4 * 2
            
            if (arg2 s< eax_2)
                return eax_2 - arg2 - 1
        case 3
            if (arg2 s>= 0)
                return mods.dp.d(sx.q(arg2), arg4)
            
            int32_t temp1_2 = mods.dp.d(sx.q(neg.d(arg2)), arg4)
            
            if (temp1_2 == 0)
                return temp1_2
            
            return arg4 - temp1_2

return 0
