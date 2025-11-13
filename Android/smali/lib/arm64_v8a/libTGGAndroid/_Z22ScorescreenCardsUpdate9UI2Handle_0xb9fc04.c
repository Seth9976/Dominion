// 函数: _Z22ScorescreenCardsUpdate9UI2Handle
// 地址: 0xb9fc04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, ScorescreenCardsClick)
void* result = GetClient()

if (*(result + 0x5068) == 0)
    return result

int32_t x20_1 = *(gScoreDlg + 0x232fc)
GameSetup* x21_1 = ActiveGame() + 8
void var_34
PlayerGetNameAvatar(x21_1, GameGetPlayer(x21_1, zx.q(x20_1)), &var_34)
void var_40
UI2SetText(zx.q(x19), &data_1832670, &var_40, 0xffffffff)
XString::~XString()
XStringFromInt(*(gScoreDlg + sx.q(*(gScoreDlg + 0x232fc)) * 0x5dd4))
UI2SetText(zx.q(x19), &data_1832688, &var_40, 0xffffffff)
XString::~XString()
int32_t x8_3 = *(gScoreDlg + 0x232f8)

if (x8_3 == 1)
    UI2SetState(zx.q(x19), &data_18329d0, 0xffffffff, 0)
    int64_t x1_4 = sx.q(*(gScoreDlg + 0x232fc))
    return ScorescreenUpdateCardsTab(zx.q(x19), x1_4, gScoreDlg + x1_4 * 0x5dd4)

if (x8_3 != 0)
    pthread_kill(pthread_self(), 6)
    UI2HitResult* x0_12
    int64_t x1_5
    x0_12, x1_5 = XNoReturn()
    return GameSpecific_DlgAllowsPassthrough(x0_12, x1_5) __tailcall

UI2SetState(zx.q(x19), &data_18329b8, 0xffffffff, 0)
int64_t x1_3 = sx.q(*(gScoreDlg + 0x232fc))
return ScoresBreakdownRowsUpdate(zx.q(x19), x1_3, gScoreDlg + x1_3 * 0x5dd4)
