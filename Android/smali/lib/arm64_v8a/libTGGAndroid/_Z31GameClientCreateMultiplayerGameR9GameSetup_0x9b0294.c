// 函数: _Z31GameClientCreateMultiplayerGameR9GameSetup
// 地址: 0x9b0294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ValidateOwnership(arg1, 4, 0)
data_11ca764 = *(arg1 + 0x14)
data_11ca758 = *(arg1 + 8)
data_11ca778 = *(arg1 + 0x2c)
data_11ca780 = XString::GetString()
data_11ca788 = XString::GetString()
int64_t x0_5
int128_t v0_1
int128_t v1
int128_t v2
int128_t v3
x0_5, v0_1, v1, v2, v3 = XString::GetString()
data_11ca790 = x0_5
v0_1.q = *(arg1 + 0x20)
data_11ca76c = v0_1.q
v1 = data_11ca778.o
v0_1 = data_11ca788.o
data_11ca774 = *(arg1 + 0x28)
v2 = data_11ca758.o
v3 = data_11ca764:4.o
data_11ca7d0 = v0_1
data_11ca7c0 = v1
data_11ca7a0 = v2
data_11ca7b0 = v3
data_11ca7e4 = *(arg1 + 0x11ac)
data_11ca7e0 = *(arg1 + 0x48)
data_11ca798 = *arg1
memcpy(0x11ca7e8, arg1 + 0x4c, 0x1160)
void var_1200
memcpy(&var_1200, &data_11ca798, 0x11b0)
int32_t var_11dc = GameLatestVersion(GameSpecific_GameType(), true)
void* x0_9 = GetActiveProfile()
uint8_t* var_50 = x0_9 + 0x5964
int64_t x8_6 = sx.q(*(x0_9 + 0x6454))
int32_t var_48 = x8_6.d
int32_t var_44 = memcrc32(x0_9 + 0x5964, x8_6 << 2, 0)
uint8_t* var_40 = x0_9 + 0x5760
int64_t x8_7 = sx.q(*(x0_9 + 0x5960))
int32_t var_38 = x8_7.d
int32_t var_34 = memcrc32(x0_9 + 0x5760, x8_7 << 3, 0)
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendDef(zx.q(*(result + 0x14)), 0xf42c9, *defMapCreateGame, &var_1200)
