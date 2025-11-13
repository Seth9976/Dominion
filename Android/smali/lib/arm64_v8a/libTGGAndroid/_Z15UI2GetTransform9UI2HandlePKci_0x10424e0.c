// 函数: _Z15UI2GetTransform9UI2HandlePKci
// 地址: 0x10424e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = UI2SelectByName(arg1, arg2, arg3)
void* x8_1 = *gUI2 + mulu.dp.d(result.d & 0xffff, 0x19a8)
v1 = *(x8_1 + 0x16c0)
int128_t* entry_x8
*entry_x8 = *(x8_1 + 0x16b0)
entry_x8[1] = v1
return result
