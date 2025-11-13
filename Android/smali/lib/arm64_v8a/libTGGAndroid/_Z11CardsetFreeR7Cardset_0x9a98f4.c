// 函数: _Z11CardsetFreeR7Cardset
// 地址: 0x9a98f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result

for (int64_t i = 0; i != 0x258; i += 4)
    result = arg1 + i
    
    if (*result != 0)
        result = UI2Free(result)

uint32_t x11 = zx.d(*(arg1 + 0x1568))
int32_t x9 = *(gCardset + 0x14)
*(arg1 + 0x1568) = *(gCardset + 0x10)
*(gCardset + 0x10) = x11
*(gCardset + 0x14) = x9 - 1
return result
