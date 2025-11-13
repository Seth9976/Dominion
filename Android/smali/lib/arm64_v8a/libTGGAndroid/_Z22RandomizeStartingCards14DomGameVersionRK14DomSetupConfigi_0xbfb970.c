// 函数: _Z22RandomizeStartingCards14DomGameVersionRK14DomSetupConfigi
// 地址: 0xbfb970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg1
DomKingdom* entry_x8
memset(entry_x8, 0, 0x534)
int64_t x0_2
int64_t x1
x0_2, x1 = RandomPCGSet(sx.q(arg3), 0)
int64_t var_48 = x0_2
int64_t var_40 = x1
*gPregameContext = zx.o(0)
*(gPregameContext + 0x10) = zx.o(0)
*(gPregameContext + 0x20) = zx.o(0)
*(gPregameContext + 0x30) = zx.o(0)
*(gPregameContext + 0x20) = entry_x8
*(gPregameContext + 0x28) = arg2
*gPregameContext = x22
*(gPregameContext + 0x10) = &var_48
*(gPregameContext + 0x18) = 0
RollKingdom_MergeSpecificCards(arg2, entry_x8)
RandomizerDeck var_3ed8
*(gPregameContext + 0x18) = &var_3ed8
RandomizerDeck_Generate(&var_3ed8, arg2, entry_x8, zx.q(x22), 0)
RollKingdom_SetupSpecificCards(entry_x8)
RollKingdom_AddRequiredCards(arg2)
RollKingdom_AddRandomCards(arg2)

if (*(gPregameContext + 0x38) s>= 1)
    int64_t i = 0
    
    do
        RollKingdom_SetupPile(zx.q(*(gPregameContext + (i << 2) + 0x34)), 0x4000)
        i += 1
    while (i s< sx.q(*(gPregameContext + 0x38)))

RollKingdom_LandscapeTargetSetup(entry_x8)
RollKingdom_ColoniesShelters()
bool (* var_38)(DomCardEnum, DomCardEnum) = SortCardsByCostName
return std::__ndk1::__sort<bool (*&)(DomCardEnum, DomCardEnum), DomCardEnum*>(entry_x8, 
    entry_x8 + 0x28, &var_38)
