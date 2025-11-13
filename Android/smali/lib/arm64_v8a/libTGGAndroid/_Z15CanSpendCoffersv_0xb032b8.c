// 函数: _Z15CanSpendCoffersv
// 地址: 0xb032b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = 0
int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

if (*(gDomClient + 0x2079c) == x8_1)
    if (*(gDomClient + 0x207a0) != LocalWho())
        return 0
    
    int32_t x8_2 = *(gDomClient + 0x20758)
    result = 1
    
    if (x8_2 - 2 u>= 2 && x8_2 != 0xfd)
        return 0

return result
