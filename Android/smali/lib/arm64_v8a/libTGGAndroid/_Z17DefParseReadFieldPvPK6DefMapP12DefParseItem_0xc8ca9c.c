// 函数: _Z17DefParseReadFieldPvPK6DefMapP12DefParseItem
// 地址: 0xc8ca9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = DefIterGetFirst(arg2)
int32_t i = i_1

if (i_1 != 0xffffffff)
    do
        DefField* x0_3 = DefIterGetNext(arg2, &i)
        int32_t x8_2 = *(x0_3 + 0x50)
        
        if ((x8_2 & 8) == 0 && (x8_2 & 0x40) == 0 && *(*(x0_3 + 0x18) + 0x18) != 6
                && strcasecmp(*(x0_3 + 8), XString::operator char const*()) == 0)
            DefParseReadFieldType(arg1, x0_3, arg3)
            return 1
    while (i != 0xffffffff)

return 0
