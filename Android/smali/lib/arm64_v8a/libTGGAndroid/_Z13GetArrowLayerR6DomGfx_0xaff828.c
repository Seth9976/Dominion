// 函数: _Z13GetArrowLayerR6DomGfx
// 地址: 0xaff828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x224)

if (x8 == 1)
    return 0x2b34

if (x8 != 0)
    pthread_kill(pthread_self(), 6)
    return GetTokenLayer(XNoReturn()) __tailcall

int32_t x9 = *(gDomClient + 0x38)
int32_t x9_1

x9_1 = x9 == 0xffffffff ? 0 : x9

if (*(arg1 + 0x228) == x9_1)
    return 0x2d35

if (*(gDomClient + 0x3c) == *(arg1 + 0x1e4))
    return 0x2b9a

return 0x2b96
