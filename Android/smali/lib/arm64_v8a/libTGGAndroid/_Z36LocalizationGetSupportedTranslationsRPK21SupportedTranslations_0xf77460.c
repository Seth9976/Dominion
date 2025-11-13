// 函数: _Z36LocalizationGetSupportedTranslationsRPK21SupportedTranslations
// 地址: 0xf77460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = *gTranslations

if (x9 == 0)
    return 0

*arg1 = *(x9 + 0x2b0)
return zx.q(*(*gTranslations + 0x2b8))
