// 函数: _Z16DefParseItemCopyP12DefParseItem
// 地址: 0xc8dc64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* result = DefParseItemAlloc()
XString::operator=(result)
XString::operator=(result + 8)
XString::operator=(result + 0x10)
*(result + 0x20) = *(arg1 + 0x20)
*(result + 0x28) = *(arg1 + 0x28)
*(result + 0x29) = *(arg1 + 0x29)
DefParseTree* x0_2 = *(arg1 + 0x18)

if (x0_2 != 0)
    *(result + 0x18) = DefParseTreeCopy(x0_2)

return result
