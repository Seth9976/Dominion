// 函数: _Z21GameClientJoinRematch9GameIndexb
// 地址: 0x9b4e48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *(GetClient() + 0x5080) + mulu.dp.d(zx.d(arg1), 0x1338)
x8_1[0x4c1] = 1
int128_t var_50
__builtin_memset(&var_50, 0, 0x28)
var_50:4.b = arg2 & 1
var_50.d = *x8_1
void* x0_1 = GetActiveProfile()
var_50:8.q = x0_1 + 0x5964
int64_t x8_3 = sx.q(*(x0_1 + 0x6454))
int128_t var_40
var_40.d = x8_3.d
var_40:4.d = memcrc32(x0_1 + 0x5964, x8_3 << 2, 0)
var_40:8.q = x0_1 + 0x5760
int64_t x8_4 = sx.q(*(x0_1 + 0x5960))
int64_t var_30
var_30.d = x8_4.d
var_30:4.d = memcrc32(x0_1 + 0x5760, x8_4 << 3, 0)
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendDef(zx.q(*(result + 0x14)), 0xf42ae, *defMapRematchGameMessage, &var_50)
