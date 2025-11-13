// 函数: _Z19ScorescreenNumPagesv
// 地址: 0xb9d140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(gScoreDlg + 0x232f8)
int64_t x9 = sx.q(*(gScoreDlg + 0x232fc))

if (x10 == 0)
    int64_t x8_8 = muls.dp.d(*(gScoreDlg + x9 * 0x5dd4 + 0x578c) + 0xb, 0x2aaaaaab)
    return zx.q((x8_8 s>> 0x21).d + (x8_8 u>> 0x3f).d)

if (x10 != 1)
    pthread_kill(pthread_self(), 6)
    CampaignStatus* x0_3
    char* x1
    x0_3, x1 = XNoReturn()
    return TwitterExportCampaign(x0_3, x1) __tailcall

int32_t x8_4 = (*(gScoreDlg + x9 * 0x5dd4 + 0x5dd0) + 0xe) s/ 0xf

if (x8_4 s> 1)
    return zx.q(x8_4)

return 1
