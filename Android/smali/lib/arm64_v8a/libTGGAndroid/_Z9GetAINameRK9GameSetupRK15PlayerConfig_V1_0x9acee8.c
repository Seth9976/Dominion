// 函数: _Z9GetAINameRK9GameSetupRK15PlayerConfig_V1
// 地址: 0x9acee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = L("dom_ui_player_ai_name", nullptr)
int64_t x8 = sx.q(*(arg2 + 0x18))

if (x8.d u>= 4)
    pthread_kill(pthread_self(), 6)
    GameSetup* x0_9
    PlayerConfig_V1* x1_2
    PlayerAvatarType* x2_2
    x0_9, x1_2, x2_2 = XNoReturn()
    return PlayerGetNameAvatar(x0_9, x1_2, x2_2) __tailcall

StringReplace(x0, "[level]", L((&data_11229e8)[x8], nullptr))
int32_t x0_5 =
    ComputeAIIndex(arg1, zx.q(((arg2 - arg1 - 0x4c) u>> 2).d * 0x70586723), zx.q(*(arg2 + 0x18)))
NameIndexReplace(XString::operator char const*(), x0_5)
return XString::~XString()
