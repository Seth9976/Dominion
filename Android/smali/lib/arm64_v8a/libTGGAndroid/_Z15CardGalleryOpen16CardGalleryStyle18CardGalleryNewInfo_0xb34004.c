// 函数: _Z15CardGalleryOpen16CardGalleryStyle18CardGalleryNewInfo
// 地址: 0xb34004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
UI2ClearFocus(true)
*gCardGallery = x20
*(gCardGallery + 4) = arg2
int64_t x1

x1 = x20 == 1 ? 5 : 7

*(gCardGallery + 8) = 2
return GameDlgManagerShow(0x7e6, x1) __tailcall
