// 函数: _Zml9MCTSValued
// 地址: 0x9f4374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* x19 = arg1
int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = MCTSValue::operator*=(arg2)
v0 = x19[3]
v2 = *x19
v3 = x19[1]
int128_t* entry_x8
entry_x8[2] = x19[2]
entry_x8[3] = v0
*entry_x8 = v2
entry_x8[1] = v3
v3 = x19[5]
v1 = x19[6]
v2 = x19[4]
*(entry_x8 + 0x6c) = *(x19 + 0x6c)
entry_x8[5] = v3
entry_x8[6] = v1
entry_x8[4] = v2
return result
