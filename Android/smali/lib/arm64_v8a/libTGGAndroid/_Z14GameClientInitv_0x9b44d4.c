// 函数: _Z14GameClientInitv
// 地址: 0x9b44d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XTraceAndLog("GameClientInit")
void* x0 = GetClient()
*(x0 + 0x7590) = XPooledCalloc(0x800)
*(x0 + 0x7598) = 0xff
*(x0 + 0x5080) = XMalloc(0x73500)
*(x0 + 0x508c) = 0x60
*(x0 + 0x50a0) = "networkGames"
*(x0 + 0x5098) = 0xdaed
*(x0 + 0x78f0) = XMalloc(0xc0)
*(x0 + 0x78fc) = 0x10
*(x0 + 0x7910) = "serverNotifications"
*(x0 + 0x7908) = 0xdab6
*(x0 + 0x75d8) = XPooledCalloc(0x2000)
*(x0 + 0x75e0) = 0x3ff
*(x0 + 0x75e8) = XPooledCalloc(0x2000)
*(x0 + 0x75f0) = 0x3ff
*(x0 + 0x5030) = -1
*(x0 + 0x5038) = -1
int32_t* x0_6 = GetLocalSettings()
SoundSetGlobalVolume(x0_6[1], *x0_6)
int32_t* x8 = GetActiveProfile() + 0x4324

if (*x8 != 1)
    *x8 = 0
    void* x0_8 = GetChannelSettings()
    void* x0_9 = GetClient()
    NetworkCloseConnection(zx.q(*(x0_9 + 0x14)))
    *(x0_9 + 0x14) = NetworkConnect(*(x0_8 + 0x10), *(x0_8 + 8))
    *(x0_9 + 0x18) = 1

LocalizationInit(GameSpecific_ProcessLocalizationMarkup, 0x11228b8, 0xc)
SetLanguage(GetCurrentLanguage())
int64_t x21 = sx.q(data_11cd548)
void* var_28
int32_t i_6
int128_t v0_1
int128_t v1_1
int128_t v2
i_6, v0_1, v1_1, v2 = GameSpecific_GetDlcs(3, &var_28)

if (i_6 s>= 1)
    void* x8_1 = var_28
    uint64_t i_3 = zx.q(i_6)
    void* x10_1 = &data_11cb948 + x21 * 0x38
    uint64_t i
    
    do
        v2 = *(x8_1 + 0x10)
        v0_1 = *(x8_1 + 0x20)
        int64_t x11_1 = *(x8_1 + 0x30)
        v1_1 = *x8_1
        x8_1 += 0x80
        i = i_3
        i_3 -= 1
        *(x10_1 + 0x10) = v2
        *(x10_1 + 0x20) = v0_1
        *(x10_1 + 0x30) = x11_1
        *x10_1 = v1_1
        x10_1 += 0x38
    while (i != 1)

int32_t x21_1 = data_11cd548 + i_6
data_11cd548 = x21_1
int32_t i_7
int128_t v0_2
int128_t v1_2
int128_t v2_1
i_7, v0_2, v1_2, v2_1 = GameSpecific_GetDlcs(0, &var_28)

if (i_7 s>= 1)
    void* x8_3 = var_28
    uint64_t i_4 = zx.q(i_7)
    void* x10_3 = &data_11cb948 + sx.q(x21_1) * 0x38
    uint64_t i_1
    
    do
        v2_1 = *(x8_3 + 0x10)
        v0_2 = *(x8_3 + 0x20)
        int64_t x11_2 = *(x8_3 + 0x30)
        v1_2 = *x8_3
        x8_3 += 0x80
        i_1 = i_4
        i_4 -= 1
        *(x10_3 + 0x10) = v2_1
        *(x10_3 + 0x20) = v0_2
        *(x10_3 + 0x30) = x11_2
        *x10_3 = v1_2
        x10_3 += 0x38
    while (i_1 != 1)

int32_t x21_2 = data_11cd548 + i_7
data_11cd548 = x21_2
int32_t i_8
int128_t v0_3
int128_t v1_3
int128_t v2_2
i_8, v0_3, v1_3, v2_2 = GameSpecific_GetDlcs(2, &var_28)

if (i_8 s>= 1)
    void* x8_5 = var_28
    uint64_t i_5 = zx.q(i_8)
    void* x10_5 = &data_11cb948 + sx.q(x21_2) * 0x38
    uint64_t i_2
    
    do
        v2_2 = *(x8_5 + 0x10)
        v0_3 = *(x8_5 + 0x20)
        int64_t x11_3 = *(x8_5 + 0x30)
        v1_3 = *x8_5
        x8_5 += 0x80
        i_2 = i_5
        i_5 -= 1
        *(x10_5 + 0x10) = v2_2
        *(x10_5 + 0x20) = v0_3
        *(x10_5 + 0x30) = x11_3
        *x10_5 = v1_3
        x10_5 += 0x38
    while (i_2 != 1)

int32_t x19_2 = data_11cd548 + i_8
data_11cd548 = x19_2
XTraceAndLog("GameGameCenterInitClient")
GameCenterConnect(4, &data_793a18, &data_11cb948, x19_2)
XTraceAndLog("Gamecenter complete")
UI2SetStyleSheet(*UI2_STYLE_SHEET)
GameDlgManagerInit()
GameDlgManagerShow(2, 0)
GameDlgManagerShow(1, 5)
GameDlgManagerShow(0x1d, 0xa)
CardsetsInit()
SpriteSetDefault3dMaterial(*MATERIAL_SYS_SPINETINT)
return GameSpecific_Init()
