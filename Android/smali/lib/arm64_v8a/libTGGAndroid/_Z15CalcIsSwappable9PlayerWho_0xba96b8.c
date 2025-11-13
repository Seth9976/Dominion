// 函数: _Z15CalcIsSwappable9PlayerWho
// 地址: 0xba96b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x0 = LocalWho()
int32_t x8_2

if (x0 == x19)
    int32_t x8_1 = *(gDomClient + 0x38)
    
    x8_2 = x8_1 == 0xffffffff ? 0 : x8_1

if (x0 != x19 || x8_2 == x19)
    int32_t x21_1 = *(gDomClient + 0x207a0)
    int32_t x0_1 = LocalWho()
    int32_t x8_5
    
    if (x21_1 == x0_1 && *(gDomClient + 0x207a0) != *(gDomClient + 0x2079c))
        int32_t x8_4 = *(gDomClient + 0x38)
        
        x8_5 = x8_4 == 0xffffffff ? 0 : x8_4
    
    if (x21_1 != x0_1 || *(gDomClient + 0x207a0) == *(gDomClient + 0x2079c)
            || zx.d(*(gDomClient + 0x22134)) != 0 || x8_5 == x19)
        return 0

return 1
