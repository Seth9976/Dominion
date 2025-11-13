// 函数: _Z15GameClientLoginRK7XString
// 地址: 0x9afeb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int128_t var_168
__builtin_memset(&var_168, 0, 0x138)
int64_t x0_1 = GameSpecific_GameType()
int32_t var_16c = x0_1.d
int32_t var_170 = GetNetworkVersion(x0_1)
char* x0_4 = XString::operator char const*()
SafeStrcpy(&var_168:4, x0_4, 0x10)
int128_t var_158
var_158:4.d = *(x0 + 0x10)
char* x0_7 = XString::operator char const*()
SafeStrcpy(&var_158:8, x0_7, 0x20)
var_168.d = *(x0 + 0x42a8)
char* x0_9 = XString::operator char const*()
int128_t var_138
SafeStrcpy(&var_138:8, x0_9, 0xff)
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42a5, 0x140, &var_170)
