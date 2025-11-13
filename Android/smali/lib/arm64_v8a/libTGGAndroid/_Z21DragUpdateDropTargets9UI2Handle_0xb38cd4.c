// 函数: _Z21DragUpdateDropTargets9UI2Handle
// 地址: 0xb38cd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x1f8c0)

if (x8 == 0)
    return 

uint64_t x9_1 = zx.q(x8.w)

if (x9_1.d u>= *(gDomClient + 0x205e8))
    return 

int64_t x10_2 = *(gDomClient + 0x205e0)

if (*(x10_2 + x9_1 * 0x21d8 + 0x21d0) != x8)
    return 

int32_t x19_1 = arg1.d
int32_t x1_1
arg1, x1_1 = CalcDragInfo(x10_2 + x9_1 * 0x21d8)

if (arg1.d u> 1)
    if (x1_1 u>= 5)
        pthread_kill(pthread_self(), 6)
        return CanShowNextGame(XNoReturn()) __tailcall
    
    uint32_t x21_1 = (arg1 u>> 0x20).d
    UI2SetState(zx.q(x19_1), *(&data_1153d38 + (zx.q(x1_1) << 0x20 s>> 0x1d)), 0xffffffff, 0)
    int32_t x8_5 = *(*(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x1f8c0)) * 0x21d8 + 0xa4)
    int32_t x9_3
    
    x9_3 = x8_5 == 0x3e9 ? 0 : 6
    
    int32_t x20_1
    
    x20_1 = x8_5 != 0x3ea ? x9_3 : 1
    
    UI2SetState(zx.q(x19_1), &data_182f280, 0xffffffff, 0)
    
    if (x21_1 - 1 u< 5)
        if (x20_1 == 1)
            return UI2SetState(zx.q(x19_1), &data_182f2f8, 0xffffffff, 0) __tailcall
        
        if (x20_1 != 0)
            return UI2SetState(zx.q(x19_1), &data_182f2e0, 0xffffffff, 0) __tailcall
        
        return UI2SetState(zx.q(x19_1), &data_182f298, 0xffffffff, 0) __tailcall
    
    if (x21_1 == 0)
        if (x20_1 == 6)
            return UI2SetState(zx.q(x19_1), &data_182f2e0, 0xffffffff, 0) __tailcall
        
        if (x20_1 == 0)
            return UI2SetState(zx.q(x19_1), &data_182f298, 0xffffffff, 0) __tailcall
        
        return UI2SetState(zx.q(x19_1), &data_182f2f8, 0xffffffff, 0) __tailcall
    
    if (x21_1 == 6)
        int64_t* x1_2
        
        if (x20_1 == 0)
            x1_2 = &data_182f2b0
        else
            x1_2 = &data_182f310
        
        return UI2SetState(zx.q(x19_1), x1_2, 0xffffffff, 0) __tailcall
else if (*(gDomClient + 0x20758) == 0x33)
    UI2SetState(zx.q(x19_1), &data_182f2e0, 0xffffffff, 0)
    return UI2SetState(zx.q(x19_1), &data_182f328, 0xffffffff, 0) __tailcall
