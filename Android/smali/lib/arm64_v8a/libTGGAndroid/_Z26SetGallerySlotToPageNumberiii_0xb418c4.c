// 函数: _Z26SetGallerySlotToPageNumberiii
// 地址: 0xb418c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10

x10 = arg3 s> 8 ? arg3 : 8

int32_t x9

if (arg2 - 4 s> x10 - 8)
    x9 = x10 - 8
else
    x9 = arg2 - 4

int32_t x9_1

x9_1 = arg2 s< 4 ? 0 : x9

return XStringFromInt(arg1 + x9_1 + 1) __tailcall
