// 函数: _Z18ComputeReplacement19DomReplacementFlagsi24TranslationParticleStyle
// 地址: 0xb37ea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1 - 3)

if (x9.d u> 3)
    pthread_kill(pthread_self(), 6)
    int64_t x0_14
    uint64_t x1_10
    int64_t x2_6
    x0_14, x1_10, x2_6 = XNoReturn()
    return ComputeReplacement(x0_14, x1_10, x2_6) __tailcall

XString* entry_x8

switch (x9)
    case 0
        return PromptCoinFromCostAmount(arg2) __tailcall
    case 1
        return XStringFromInt(arg2) __tailcall
    case 2
        if (arg2 == 0xffffffff)
            return XString::XString(entry_x8) __tailcall
        
        GameSetup* x20 = ActiveGame() + 8
        PlayerAvatarType var_24
        return PlayerGetNameAvatar(x20, GameGetPlayer(x20, zx.q(arg2)), &var_24)
    case 3
        if (arg2 == 0)
            return XString::XString(entry_x8) __tailcall
        
        DomDefName(DomDefGet(gDomClient + 0x20728, zx.q(arg2)), 0, nullptr, false)
        int64_t result = GetCurrentLanguage()
        
        if (result.d != 0x11)
            return result
        
        return TranslationAddParticle(result, entry_x8, zx.q(arg3)) __tailcall
