// 函数: spSkeleton_setSkinByName
// 地址: 0xfb40b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    int64_t result = spSkeletonData_findSkin(*arg1)
    
    if (result == 0)
        return result
    
    int64_t x2_1 = arg1[0xd]
    
    if (x2_1 != result)
        if (x2_1 != 0)
            spSkin_attachAll(result, arg1, x2_1)
        else if (arg1[4].d s>= 1)
            int64_t i = 0
            
            do
                int64_t* x22_1 = *(arg1[5] + (i << 3))
                int64_t x2_2 = *(*x22_1 + 0x18)
                
                if (x2_2 != 0)
                    int64_t x0_4 = spSkin_getAttachment(result, zx.q(i.d), x2_2)
                    
                    if (x0_4 != 0)
                        spSlot_setAttachment(x22_1, x0_4)
                
                i += 1
            while (i s< sx.q(arg1[4].d))
        
        arg1[0xd] = result
        spSkeleton_updateCache(arg1)
else if (arg1[0xd] != 0)
    arg1[0xd] = 0
    spSkeleton_updateCache(arg1)

return 1
