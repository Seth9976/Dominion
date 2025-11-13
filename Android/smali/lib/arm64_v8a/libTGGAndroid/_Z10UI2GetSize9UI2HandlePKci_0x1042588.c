// 函数: _Z10UI2GetSize9UI2HandlePKci
// 地址: 0x1042588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = UI2SelectByName(arg1, arg2, arg3)
void* x8_1 = *gUI2 + mulu.dp.d(result.d & 0xffff, 0x19a8)
void* x9_2

if (result.d == 0)
    x9_2 = V20
else
    x9_2 = x8_1 + 0x175c

void* x8_3

if (result.d == 0)
    x8_3 = V20 + 4
else
    x8_3 = x8_1 + 0x1760

v1.d = *x8_3
v0.d = *x9_2
return result
