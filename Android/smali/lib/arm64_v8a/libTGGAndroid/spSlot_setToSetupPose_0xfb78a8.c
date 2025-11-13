// 函数: spSlot_setToSetupPose
// 地址: 0xfb78a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

spColor_setFromColor(&arg1[2], *arg1 + 0x20)
int64_t result = arg1[4]

if (result != 0)
    result = spColor_setFromColor(result, *(*arg1 + 0x30))

int32_t* x8_2 = *arg1
int64_t x2 = *(x8_2 + 0x18)
void* x8_3

if (x2 != 0)
    result = spSkeleton_getAttachmentForSlotIndex(*(arg1[1] + 8), zx.q(*x8_2), x2)
    arg1[5] = 0
    
    if (result != 0)
        x8_3 = arg1[1]
        arg1[5] = result
        goto label_fb7914
else if (arg1[5] != 0)
    x8_3 = arg1[1]
    arg1[5] = 0
label_fb7914:
    int32_t v0_1 = *(*(x8_3 + 8) + 0x80)
    *(arg1 + 0x34) = 0
    arg1[8].d = v0_1
return result
