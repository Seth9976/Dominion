// 函数: spSkeleton_setAttachment
// 地址: 0xfb4310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = sx.q(arg1[4].d)

if (x24.d s>= 1)
    int64_t x25_1 = arg1[5]
    int64_t x22_1 = 0
    
    do
        int64_t* x20_1 = *(x25_1 + (x22_1 << 3))
        
        if (strcmp(*(*x20_1 + 8), arg2) == 0)
            int64_t* x0_3
            int64_t result_1
            
            if (arg3 == 0)
                x0_3 = x20_1
                result_1 = 0
            else
                int64_t x0_2 = arg1[0xd]
                int64_t result_2
                
                if (x0_2 != 0)
                    result_2 = spSkin_getAttachment(x0_2, zx.q(x22_1.d), arg3)
                    result_1 = result_2
                
                if (x0_2 == 0 || result_2 == 0)
                    int64_t result = *(*arg1 + 0x60)
                    
                    if (result == 0)
                        return result
                    
                    result = spSkin_getAttachment(result, zx.q(x22_1.d), arg3)
                    result_1 = result
                    
                    if (result == 0)
                        return result
                
                x0_3 = x20_1
            
            spSlot_setAttachment(x0_3, result_1)
            return 1
        
        x22_1 += 1
    while (x22_1 s< x24)

return 0
