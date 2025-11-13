// 函数: _Z19DailySeed2DlgUpdate9UI2Handle
// 地址: 0xb3fd9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DailySeed2DlgClick)
L((&data_114da50)[zx.q(*(gDailyDlg + 0xc))], nullptr)
char var_18
XString::XString(&var_18)
UI2SetText(zx.q(x19), &data_1830e70, &var_18, 0xffffffff)
XString::~XString()
int32_t x8_1 = *gDailyDlg

if (x8_1 == 2)
    UI2SetState(zx.q(x19), &data_1830ab0, 0xffffffff, 0)
    return DailySeedStatsUpdate(zx.q(x19))

if (x8_1 == 1)
    UI2SetState(zx.q(x19), &data_1830a98, 0xffffffff, 0)
    return DailySeedCalendarUpdate(zx.q(x19))

if (x8_1 == 0)
    UI2SetState(zx.q(x19), &data_1830a80, 0xffffffff, 0)
    return DailySeedLeaderboardUpdate(zx.q(x19))

pthread_kill(pthread_self(), 6)
XNoReturn()
return DailySeed2DlgOpen() __tailcall
