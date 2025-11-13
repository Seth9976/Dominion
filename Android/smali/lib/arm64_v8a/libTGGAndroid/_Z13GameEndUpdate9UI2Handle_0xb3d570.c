// 函数: _Z13GameEndUpdate9UI2Handle
// 地址: 0xb3d570
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
GameEndReasonStr(GetCurrentLanguage(), zx.q(*(gDomClient + 0x205b8)))
void var_18
UI2SetText(zx.q(x19), &data_18307e0, &var_18, 0xffffffff)
int64_t x8 = sx.q(*(gDomClient + 0x205a8))

if (x8.d u>= 3)
    pthread_kill(pthread_self(), 6)
    return MissingContentUpdate(XNoReturn()) __tailcall

UI2SetState(zx.q(x19), (&data_1153d60)[x8], 0xffffffff, 0)
int32_t var_28
int32_t var_24

if ((HasActiveGame() & 1) != 0
        && (IsWinner(ActiveGame(), zx.q(LocalWho()), &var_24, &var_28) & 1) != 0)
    UI2SetState(zx.q(x19), &data_18307c8, 0xffffffff, 0)

return XString::~XString()
