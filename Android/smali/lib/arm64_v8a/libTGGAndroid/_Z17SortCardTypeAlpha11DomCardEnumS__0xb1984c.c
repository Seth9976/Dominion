// 函数: _Z17SortCardTypeAlpha11DomCardEnumS_
// 地址: 0xb1984c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomCardDef* x0 = DomDefGet(arg1, 0x18)
DomCardDef* x0_2 = DomDefGet(zx.q(arg2), 0x18)
return zx.q(strcmp(DomDefNameSort(x0, 0, nullptr), DomDefNameSort(x0_2, 0, nullptr)) u>> 0x1f)
