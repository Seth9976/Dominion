// 函数: _Z26DeclareCalendarCampaignDay9UI2HandleRK15WeeklyImageDatai
// 地址: 0xb3f3cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1

if (zx.d(*arg2) == 0)
    return UI2SetState(zx.q(x20), &data_1831050, arg3, 0) __tailcall

int64_t result = UI2SetState(zx.q(x20), &data_1831068, arg3, 0)

if (*(arg2 + 4) == 0xffffffff)
    return result

if (zx.d(*(arg2 + 1)) != 0)
    UI2SetState(zx.q(x20), &data_1831080, arg3, 0)

if (zx.d(*(arg2 + 0xc)) != 0)
    UI2SetState(zx.q(x20), &data_1830d50, arg3, 0)

int64_t x8_4 = sx.q(*(arg2 + 4))

if (x8_4.d u>= 4)
    pthread_kill(pthread_self(), 6)
    int64_t x0_7
    int64_t x1_2
    int32_t x2_6
    x0_7, x1_2, x2_6 = XNoReturn()
    return DeclareCalendarDay(x0_7, x1_2, x2_6) __tailcall

int32_t x8_5 = *(arg2 + 8)
int32_t var_30 = *(&data_71c4b0 + (x8_4 << 2))
int32_t var_2c_1 = x8_5 == 0xa ? 1 : 0
int32_t var_24_1 = x8_5
return DeclareCampaignMedal(zx.q(x20), &var_30, arg3)
