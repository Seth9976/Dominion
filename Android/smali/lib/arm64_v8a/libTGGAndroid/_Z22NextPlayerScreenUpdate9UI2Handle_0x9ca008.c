// 函数: _Z22NextPlayerScreenUpdate9UI2Handle
// 地址: 0x9ca008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, NextPlayerClick)
int32_t var_14

if ((GameSpecific_CanUndoPassAndPlayOne(&var_14) & 1) != 0)
    UI2SetState(zx.q(x19), &data_11d0298, 0xffffffff, 0)
    
    if (var_14 == 2)
        UI2SetState(zx.q(x19), &data_11d02b0, 0xffffffff, 0)

UI2StateDecl* x1_1

if ((ExtraTallAspectRatio() & 1) != 0)
    x1_1 = UIS_EXTRA_TALL_ASPECT_RATIO
else
    x1_1 = UIS_EXTRA_WIDE_ASPECT_RATIO

UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)

if (LocalWho() == 0xffffffff)
    UI2SetState(zx.q(x19), &data_11d0280, 0xffffffff, 0)
else
    GameSetup* x20_1 = ActiveGame() + 8
    int32_t var_18
    PlayerGetNameAvatar(x20_1, GameGetPlayer(x20_1, zx.q(LocalWho())), &var_18)
    void var_28
    UI2SetText(zx.q(x19), &data_11ce6a8, &var_28, 0xffffffff)
    UI2SetState(zx.q(x19), GameAvatarGet(zx.q(var_18)), 0xffffffff, 0)
    XString::~XString()

int64_t x8_2 = sx.q(*gNextTurnStyle)

if (x8_2.d u< 3)
    return UI2SetState(zx.q(x19), (&data_11231e0)[x8_2], 0xffffffff, 0)

pthread_kill(pthread_self(), 6)
return TitleMoreButtons(XNoReturn()) __tailcall
