// 函数: _Z15FieldGetPropDef9UI2Handlei
// 地址: 0x1031e58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_1030[0x100]
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = GetPropDefs(*gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8), &var_1030, nullptr)
void* x8_2 = &var_1030[sx.q(arg2) * 2]
v1 = *(x8_2 + 0x10)
int128_t* entry_x8
*entry_x8 = *x8_2
entry_x8[1] = v1
return result
