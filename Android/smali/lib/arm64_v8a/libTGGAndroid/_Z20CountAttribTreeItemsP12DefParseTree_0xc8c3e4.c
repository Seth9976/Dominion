// 函数: _Z20CountAttribTreeItemsP12DefParseTree
// 地址: 0xc8c3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 8)
int32_t x19 = *(arg1 + 0x18)

while (i != 0)
    XString* x21_1 = *i
    i = i[1]
    
    if ((operator==(x21_1, **(arg1 + 0x20)) & 1) != 0)
        x19 += CountAttribTreeItems(*(x21_1 + 0x18))

return zx.q(x19)
