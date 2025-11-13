// 函数: _Z27TranslationGetParticleStyleP11Translation24TranslationParticleStyle
// 地址: 0xc0bbf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0x1c))

if (result.d != 0)
    return result

XString::XString()
void var_18

if ((TranslationHasMod(arg1, "particle", &var_18) & 1) == 0)
    *(arg1 + 0x1c) = arg2
else
    if ((operator==(&var_18, "linking") & 1) != 0)
        *(arg1 + 0x1c) = 3
    
    if ((operator==(&var_18, "none") & 1) != 0)
        *(arg1 + 0x1c) = 1
    
    if ((operator==(&var_18, "object") & 1) != 0)
        *(arg1 + 0x1c) = 2

XString::~XString()
return zx.q(*(arg1 + 0x1c))
