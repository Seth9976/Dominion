// 函数: _Z25GameClientJoinNetworkGame9GameIndex
// 地址: 0x9b4c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_50 = *(*(GetClient() + 0x5080) + mulu.dp.d(zx.d(arg1), 0x1338))
void* x0_1 = GetActiveProfile()
void* const var_48 = &data_793a18
uint8_t* var_40 = x0_1 + 0x5964
int64_t x8_2 = sx.q(*(x0_1 + 0x6454))
int32_t var_38 = x8_2.d
int32_t var_34 = memcrc32(x0_1 + 0x5964, x8_2 << 2, 0)
uint8_t* var_30 = x0_1 + 0x5760
int64_t x8_3 = sx.q(*(x0_1 + 0x5960))
int32_t var_28 = x8_3.d
int32_t var_24 = memcrc32(x0_1 + 0x5760, x8_3 << 3, 0)
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendDef(zx.q(*(result + 0x14)), 0xf42ab, *defMapJoinGame, &var_50)
