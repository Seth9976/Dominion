// 函数: sub_1102a74
// 地址: 0x1102a74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20_1

if (zx.d(arg1[0x4d].b) != 0)
    x20_1 = 0
else if (zx.d(*(arg1 + 0x26a)) == 0)
    int32_t x0_6 = sub_1102eec(arg1[1], (*(*arg1 + 0x18))(arg1, 0xffffffff), arg1[0x4b], &arg1[2], 
        arg1 + 0x269)
    x20_1 = x0_6
    
    if (x0_6 == 1)
        goto label_1102b34
else
    void var_240
    memset(&var_240, 0, 0x210)
    sub_1102dc8(arg1)
    x20_1 = 1
label_1102b34:
    (*(*arg1 + 0x68))(arg1, 1)
    
    if (zx.d(arg1[0x4d].b) != 0)
        x20_1 = 0

return zx.q(x20_1)
