// 函数: _Z14CampaignFormatPKciRb
// 地址: 0x9ef320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XFormatString("%s_%d")
void* result = LookupTranslationSafe(XString::operator char const*(), zx.q(GetCurrentLanguage()))

if (result != 0)
label_9ef380:
    
    if (zx.d(*arg3) != 0 && *(result + 0x20) == 1)
        *arg3 = false
else
    *arg3 = false
    result = LookupTranslationSafe(XString::operator char const*(), 1)
    
    if (result != 0)
        goto label_9ef380
    
    *arg3 = false

return result
