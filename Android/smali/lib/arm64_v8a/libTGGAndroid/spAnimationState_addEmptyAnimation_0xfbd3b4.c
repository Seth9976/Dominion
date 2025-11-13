// 函数: spAnimationState_addEmptyAnimation
// 地址: 0xfbd3b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg3

if (arg4 > 0f)
    arg3 = arg4
else
    arg3 = arg4 - arg3

void* result = spAnimationState_addAnimation(arg1, arg2, data_2422590, 0, arg3)
*(result + 0x70) = v8
*(result + 0x60) = v8
return result
