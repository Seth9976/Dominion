// 函数: _Z13UI2UpdateRoot9UI2Handlefb
// 地址: 0x1023f9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(arg1) & 0xffff
int32_t var_64 = arg1
int64_t x22 = *gUI2
UI2* x20 = x22 + mulu.dp.d(x23.d, 0x19a8)
UI2Reload(x20, *(x20 + 0x1688))
int32_t x8 = *(gUI2 + 0x50)

if (x8 != 0)
    uint64_t x9_1 = zx.q(x8.w)
    
    if (x9_1.d u< *(gUI2 + 8))
        int64_t x10_2 = *gUI2
        
        if (*(x10_2 + x9_1 * 0x19a8 + 0x19a0) == x8)
            void* i = x10_2 + x9_1 * 0x19a8
            
            do
                *(i + 0x1378) = 2
                i = *(i + 0x17d0)
            while (i != 0)

void* x19 = x22 + x23 * 0x19a8
UI2State* x0_1 = *(x19 + 0x1798)
int64_t x8_1 = sx.q(*(x19 + 0x17a0))
*(x19 + 0x1788) = x20
*(x19 + 0x1768) = x0_1
*(x19 + 0x1770) = x8_1.d
void var_68
std::__ndk1::__sort<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(x0_1, x0_1 + x8_1 * 0x30, 
    &var_68)
int64_t result = HashStateVars(*(x19 + 0x1798), *(x19 + 0x17a0), false)
int32_t x27 = *(x19 + 0x1970)
*(x19 + 0x1780) = result.d

if (x27 != 0)
    uint64_t x28_1 = 0
    bool cond:0_1
    
    do
        result = UI2Update(
            *gUI2 + zx.q(*(x22 + x23 * 0x19a8 + (x28_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, x20, 
            x20 + 0x16b0, false, arg2)
        cond:0_1 = x27 != x28_1.d + 1
        x28_1 = zx.q(x28_1.d + 1)
    while (cond:0_1)

void* x8_6 = x22 + x23 * 0x19a8
*(x8_6 + 0x10) += 1
*(x19 + 0x17a0) = 0
*(x8_6 + 0x1670) = *(x8_6 + 0x1660)
*(x8_6 + 0x10) = *(*(x19 + 0x1788) + 0x10)

if (zx.d(*(x8_6 + 0x13f0)) != 0)
    *(x8_6 + 0x13f0) = 0
    result = UI2AutoFocusTextbox(zx.q(var_64))

*(x22 + x23 * 0x19a8 + 4) = 1
return result
