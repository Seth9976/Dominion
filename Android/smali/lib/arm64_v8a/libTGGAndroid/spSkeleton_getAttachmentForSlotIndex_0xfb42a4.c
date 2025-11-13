// 函数: spSkeleton_getAttachmentForSlotIndex
// 地址: 0xfb42a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0xffffffff)
    int64_t x0 = arg1[0xd]
    int64_t result
    
    if (x0 != 0)
        result = spSkin_getAttachment(x0, zx.q(arg2), arg3)
    
    if (x0 != 0 && result != 0)
        return result
    
    int64_t x0_1 = *(*arg1 + 0x60)
    
    if (x0_1 != 0)
        result = spSkin_getAttachment(x0_1, zx.q(arg2), arg3)
        
        if (result != 0)
            return result

return 0
