// 函数: spSkeleton_setSkin
// 地址: 0xfb417c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x2 = *(arg1 + 0x68)

if (x2 == arg2)
    return 

if (arg2 != 0)
    if (x2 != 0)
        spSkin_attachAll(arg2, arg1)
    else if (*(arg1 + 0x20) s>= 1)
        int64_t i = 0
        
        do
            int64_t* x22_1 = *(*(arg1 + 0x28) + (i << 3))
            int64_t x2_2 = *(*x22_1 + 0x18)
            
            if (x2_2 != 0)
                int64_t x0_4 = spSkin_getAttachment(arg2, zx.q(i.d), x2_2)
                
                if (x0_4 != 0)
                    spSlot_setAttachment(x22_1, x0_4)
            
            i += 1
        while (i s< sx.q(*(arg1 + 0x20)))

*(arg1 + 0x68) = arg2
return spSkeleton_updateCache(arg1) __tailcall
