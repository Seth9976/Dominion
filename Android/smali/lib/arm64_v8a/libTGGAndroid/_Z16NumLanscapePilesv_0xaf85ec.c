// 函数: _Z16NumLanscapePilesv
// 地址: 0xaf85ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x21e74) == 0)
    return 0

if (*(gDomClient + 0x21e84) == 0)
    return 1

if (*(gDomClient + 0x21e94) == 0)
    return 2

if (*(gDomClient + 0x21ea4) == 0)
    return 3

if (*(gDomClient + 0x21eb4) != 0)
    return 5

return 4
