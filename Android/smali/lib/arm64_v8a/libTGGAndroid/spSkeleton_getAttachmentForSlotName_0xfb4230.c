// 函数: spSkeleton_getAttachmentForSlotName
// 地址: 0xfb4230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = spSkeletonData_findSlotIndex(*arg1)

if (x0_1 != 0xffffffff)
    int64_t x0_2 = arg1[0xd]
    int64_t result
    
    if (x0_2 != 0)
        result = spSkin_getAttachment(x0_2, zx.q(x0_1), arg3)
    
    if (x0_2 != 0 && result != 0)
        return result
    
    int64_t x0_3 = *(*arg1 + 0x60)
    
    if (x0_3 != 0)
        result = spSkin_getAttachment(x0_3, zx.q(x0_1), arg3)
        
        if (result != 0)
            return result

return 0
