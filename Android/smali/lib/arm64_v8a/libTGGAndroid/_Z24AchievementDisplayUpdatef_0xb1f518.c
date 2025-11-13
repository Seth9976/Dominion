// 函数: _Z24AchievementDisplayUpdatef
// 地址: 0xb1f518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_20 = v8

if (*(gDomClient + 0x84418) == 0)
    return 

int64_t x0 = GameDlgMangerGetUI(0x7e8, 8, true)

if (zx.d(*(gDomClient + 0x84384)) == 0)
    *(gDomClient + 0x84384) = 1
    *(gDomClient + 0x84388) = 0x404ccccd
    return UI2SetStateEffect(x0, "notification", 1, false) __tailcall

float v0 = *(gDomClient + 0x84388) f- arg1.q.d
*(gDomClient + 0x84388) = v0

if (not(v0 > 0f))
    memcpy(gDomClient + 0x84378, gDomClient + 0x8438c, sx.q(*(gDomClient + 0x84418)) * 0x14 - 1)
    *(gDomClient + 0x84418) -= 1
