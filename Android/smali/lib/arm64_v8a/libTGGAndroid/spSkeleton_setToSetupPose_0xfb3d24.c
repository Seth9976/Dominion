// 函数: spSkeleton_setToSetupPose
// 地址: 0xfb3d24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

spSkeleton_setBonesToSetupPose()
int64_t result = memcpy(*(arg1 + 0x30), *(arg1 + 0x28), sx.q(*(arg1 + 0x20)) << 3)

if (*(arg1 + 0x20) s>= 1)
    int64_t i = 0
    
    do
        result = spSlot_setToSetupPose(*(*(arg1 + 0x28) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 0x20)))

return result
