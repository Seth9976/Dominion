// 函数: sub_6da1f0
// 地址: 0x6da1f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = *arg2
int64_t var_24
float var_1c
int128_t xmm0_1

if (edx == data_177752c)
    var_24 = *(arg1 + 8)
    xmm0_1 = *(arg1 + 0x14)
    var_1c = arg1[4]
else if (edx == data_1777530)
    float xmm3_1 = arg1[0x11]
    float xmm2_3 = xmm3_1 * 0f * 0.5f
    var_24:4.d = xmm3_1 * 0.5f f+ arg1[3]
    var_24.d = xmm2_3 f+ arg1[2]
    xmm0_1 = *(arg1 + 0x14)
    var_1c = xmm2_3 f+ arg1[4]
else if (edx != data_1777534)
    float var_38
    sub_6d9e70(&var_38, edx, arg1, &var_38)
    int128_t var_34
    xmm0_1 = var_34
else
    float xmm1_1 = arg1[0x11]
    float xmm2_6 = xmm1_1 * 0f
    var_24:4.d = xmm1_1 f+ arg1[3]
    var_24.d = xmm2_6 f+ arg1[2]
    xmm0_1 = *(arg1 + 0x14)
    var_1c = xmm2_6 f+ arg1[4]

if (arg2[2] != 2)
    return sub_63b5f0("Unknown attachment type")

int32_t* result = sub_6db490(arg2[3])
*(result + 8) = var_24
result[4] = var_1c
*(result + 0x14) = xmm0_1
return result
