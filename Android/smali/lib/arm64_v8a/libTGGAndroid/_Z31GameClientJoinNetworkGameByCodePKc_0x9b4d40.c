// 函数: _Z31GameClientJoinNetworkGameByCodePKc
// 地址: 0x9b4d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_50 = 0
void* x0 = GetActiveProfile()
char const* var_48 = arg1
uint8_t* var_40 = x0 + 0x5964
int64_t x8 = sx.q(*(x0 + 0x6454))
int32_t var_38 = x8.d
int32_t var_34 = memcrc32(x0 + 0x5964, x8 << 2, 0)
uint8_t* var_30 = x0 + 0x5760
int64_t x8_1 = sx.q(*(x0 + 0x5960))
int32_t var_28 = x8_1.d
int32_t var_24 = memcrc32(x0 + 0x5760, x8_1 << 3, 0)
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendDef(zx.q(*(result + 0x14)), 0xf42ab, *defMapJoinGame, &var_50)
