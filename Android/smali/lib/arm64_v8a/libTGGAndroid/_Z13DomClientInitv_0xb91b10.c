// 函数: _Z13DomClientInitv
// 地址: 0xb91b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = XMalloc(0x876000)
XAsset* x8 = *TRANSLATION_COMING_SOON_EN_US
*(gDomClient + 0x205ec) = 0x400
*(gDomClient + 0x205e0) = x0
*(gDomClient + 0x20600) = &data_743b01
*(gDomClient + 0x205f8) = 0xdb01
LocalizationLoadTranslation(x8)
*gCardTranslations = XPooledCalloc(0x2000)
*(gCardTranslations + 8) = 0x3ff
*(gDomClient + 0x82e28) = CardsetAlloc()
*(gDomClient + 0x82e30) = CardsetAlloc()
UI2SetFancyTable(&data_1817338)
InitThreadLocalDomContextStack()
PreloadTextureAllocatorInit(*TEXTURE_CARD_GEN_SHARED_CARD_ART_RESERVE, *TEXTURE_CARD_GEN_BASE_MOAT, 
    *TEXTURE_CARD_GEN_ADVENTURES_ADVENTURE_EVENT_CARDS_1)
void var_870
memcpy(gDomClient + 0x82eb8, &var_870, 0x850)
GameDlgManagerShow(0x7e8, 8)
MusicPlay(*SOUND_MUSIC_BASE, nullptr)
PileInit(DomCardCompare, DomPileData, DomItemData)
return DomMapInit() __tailcall
