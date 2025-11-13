// 函数: _Z34AttribTreeTotalChildrenWithSelfRecRP14AttribTreeItem
// 地址: 0x1039d08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AttribTreeItem* x8 = *arg1
int32_t x20 = *(x8 + 0x10)

if (x20 s< 1)
    return 1

*arg1 = x8 + 0x18
int32_t i_1 = x20 - 1
int32_t x20_1 = AttribTreeTotalChildrenWithSelfRec(arg1)

if (x20 != 1)
    int32_t i
    
    do
        *arg1 += 0x18
        i = i_1
        i_1 -= 1
        x20_1 += AttribTreeTotalChildrenWithSelfRec(arg1)
    while (i != 1)

return zx.q(x20_1 + 1)
