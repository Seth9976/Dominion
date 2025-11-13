// 函数: _Z16CampaignPieceStr8Language13CampaignPiece
// 地址: 0xc0bca4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0_1 = CampaignPieceDefGet(zx.q(arg2))
Translation* x0_3 = LookupTranslationSafe(*(x0_1 + 8), zx.q(x20))
char* entry_x8

if (x0_3 == 0)
    *(x0_1 + 8)
    return XString::XString(entry_x8) __tailcall

TranslationString(zx.q(x20), x0_3, false)
return XString::XString(entry_x8) __tailcall
