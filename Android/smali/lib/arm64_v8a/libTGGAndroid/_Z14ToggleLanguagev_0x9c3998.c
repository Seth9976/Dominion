// 函数: _Z14ToggleLanguagev
// 地址: 0x9c3998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetLocalSettings()
int32_t* var_38
int32_t i_1 = LocalizationGetSupportedTranslations(&var_38)

if (i_1 s>= 1)
    int64_t x22_1 = 0
    int64_t x20_1 = 0
    uint64_t i = zx.q(i_1)
    
    do
        if (*(var_38 + x22_1) == GetCurrentLanguage())
            int64_t x8_3
            
            if (i.d + x20_1.d == 1)
                x8_3 = 0
            else
                x8_3 = 1 - x20_1
            
            *(x0 + 0x10) = var_38[x8_3 * 4]
            break
        
        x20_1 -= 1
        x22_1 += 0x10
    while (i != neg.q(x20_1))

SetLanguage(zx.q(*(x0 + 0x10)))
SaveLocalSettings()
return GameSpecific_NotifyLanguageToggle()
