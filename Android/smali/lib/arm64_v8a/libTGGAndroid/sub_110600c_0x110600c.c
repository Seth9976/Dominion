// 函数: sub_110600c
// 地址: 0x110600c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q((arg1 & 0xf) - 1)
char const* const x3
int64_t (* x19)()

if (x8_1.d u> 0xb)
label_11060a8:
    SystemHintOp_BTI()
    x19 = __sF + 0x130
    x3 = "Unknown DWARF encoding for search table."
label_11060d4:
    fprintf(x19, "libunwind: %s - %s\n", "getTableEntrySize", x3)
    fflush(x19)
    abort()
    noreturn

switch (x8_1)
    case 0, 8
        SystemHintOp_BTI()
        x19 = __sF + 0x130
        x3 = "Can't binary search on variable length encoded data."
        goto label_11060d4
    case 1, 9
        SystemHintOp_BTI()
        return 4
    case 2, 0xa
        SystemHintOp_BTI()
        SystemHintOp_BTI()
        return 8
    case 3, 0xb
        SystemHintOp_BTI()
        return 0x10
    case 4, 5, 6, 7
        goto label_11060a8
