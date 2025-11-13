// 函数: _vp_global_look
// 地址: 0x108900c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(arg1 + 0x30) + 0x1350
int32_t* result = calloc(1, 0x28)
int32_t x8_1 = *(arg1 + 4)
*result = 0xc61c3c00
result[1] = x8_1
*(result + 8) = x20
return result
