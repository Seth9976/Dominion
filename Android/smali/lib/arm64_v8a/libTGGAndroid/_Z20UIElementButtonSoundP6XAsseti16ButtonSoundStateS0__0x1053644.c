// 函数: _Z20UIElementButtonSoundP6XAsseti16ButtonSoundStateS0_
// 地址: 0x1053644
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int32_t x20 = arg3

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

if (x20 u> 3)
    pthread_kill(pthread_self(), 6)
    XAsset* x0_7
    int32_t x1_3
    UITransform* x2_2
    Vec2* x3_2
    x0_7, x1_3, x2_2, x3_2 = XNoReturn()
    return UIRectContains(x0_7, x1_3, x2_2, x3_2) __tailcall

int64_t x8_3 = **x8
int64_t x9_1 = sx.q(arg2)

switch (x20)
    case 0
        arg1 = *(x8_3 + x9_1 * 0x178 + 0x158)
        
        if (arg1 != 0)
            return SoundPlay(arg1) __tailcall
    case 1
        return 
    case 2
        arg1 = *(x8_3 + x9_1 * 0x178 + 0x150)
        
        if (arg1 != 0)
            return SoundPlay(arg1) __tailcall
    case 3
        arg1 = *(x8_3 + x9_1 * 0x178 + 0x160)
        
        if (arg1 != 0)
            return SoundPlay(arg1) __tailcall

if (arg4 == 0)
    return 

return SoundPlay(arg4) __tailcall
