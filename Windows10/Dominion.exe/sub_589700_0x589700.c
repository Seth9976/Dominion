// 函数: sub_589700
// 地址: 0x589700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1

if (arg2 != 0xd30 && arg2 != 0xd3d)
    sub_591930()

if (arg2 == 0xd30 || arg2 == 0xd3d || arg2 != 0)
    int32_t result = 7
    int32_t* eax_1 = arg1 + 0x1594
    
    while (true)
        if (*eax_1 == arg2 || eax_1[1] == arg2)
            return result
        
        result += 1
        eax_1 = &eax_1[4]
        
        if (result s>= 0x48)
            break
        
        continue

return 0
