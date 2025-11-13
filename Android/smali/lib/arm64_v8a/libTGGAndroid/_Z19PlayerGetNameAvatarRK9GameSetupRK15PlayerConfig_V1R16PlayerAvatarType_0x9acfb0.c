// 函数: _Z19PlayerGetNameAvatarRK9GameSetupRK15PlayerConfig_V1R16PlayerAvatarType
// 地址: 0x9acfb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0xffffffff
uint64_t x9 = zx.q(*(arg2 + 0x14))
char* entry_x8

if (x9.d u> 3)
    if (x9.d != 0x3e8)
        if (x9.d == 0x3e9)
            *arg3 = *(arg2 + 0x10)
            int32_t x0_1 = ComputeGuestPlayerIndex(arg1, arg2)
            return NameIndexReplace(L("dom_ui_player_guest_name", nullptr), x0_1) __tailcall
        
        pthread_kill(pthread_self(), 6)
        return SetActiveTurn(XNoReturn()) __tailcall
    
    if (GameProfilesTryGetByIndex(zx.q(*(arg2 + 0x18))) == 0)
        *arg3 = *(arg2 + 0x10)
        return XString::XString(entry_x8) __tailcall
    
    GetProfileByIndex(zx.q(*(arg2 + 0x18)))
    void var_28
    XString::XString(&var_28)
    *arg3 = *(GetProfileByIndex(zx.q(*(arg2 + 0x18))) + 0x10)
    
    if ((operator==(&var_28, &data_793a18) & 1) == 0)
        XString::XString(entry_x8)
    else
        XString::XString(entry_x8)
    
    return XString::~XString()

switch (x9)
    case 0
        return XString::XString(entry_x8) __tailcall
    case 1
        *arg3 = *(arg2 + 0x10)
        return XString::XString(entry_x8) __tailcall
    case 2
        int32_t x8_3 = *(arg2 + 0x18)
        
        if (x8_3 == 1 || x8_3 == 0)
            return XString::XString(entry_x8) __tailcall
        
        pthread_kill(pthread_self(), 6)
        return SetActiveTurn(XNoReturn()) __tailcall
    case 3
        uint64_t x0_4 = zx.q(*(arg2 + 0x18))
        
        if (x0_4.d u<= 3)
            *arg3 = GameSpecific_AIAvatar(x0_4)
            return GetAIName(arg1, arg2) __tailcall
        
        pthread_kill(pthread_self(), 6)
        return SetActiveTurn(XNoReturn()) __tailcall
