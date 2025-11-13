// 函数: _Z22XmlReadKnownCloseBlockP9XmlReaderPKc
// 地址: 0x106291c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)

if (x8 != 3)
    goto label_1062948

if ((sub_1062630(arg1) & 1) != 0)
    x8 = *(arg1 + 8)
label_1062948:
    
    if (x8 == 4 && strncasecmp(arg2, *(arg1 + 0x18), sx.q(*(arg1 + 0x20))) == 0)
        return sub_1062630(arg1) __tailcall

return 0
