// 函数: _Z26CardGalleryZoomHasPrevCardv
// 地址: 0xb3b810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gCardGallery + 0xc) == 0)
    return zx.q(GetCardsetZoom(*(gDomClient + 0x82e28)) != 0 ? 1 : 0)

return 1
