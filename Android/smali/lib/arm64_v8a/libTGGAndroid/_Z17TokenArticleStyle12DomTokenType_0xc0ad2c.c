// 函数: _Z17TokenArticleStyle12DomTokenType
// 地址: 0xc0ad2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = 2

if (arg1 s<= 0xaff)
    if (arg1 s> 0x5ff)
        if (arg1 == 0x600)
            return zx.q(x8)
        
        if (arg1 == 0xa00)
            return 4
    else if (arg1 - 0x400 u< 2)
        return zx.q(x8)
else if (arg1 s> 0xdff)
    if (arg1 == 0x1000)
        return 4
    
    if (arg1 == 0x1001)
        return zx.q(x8)
    
    if (arg1 == 0xe00)
        return 4
    
    if (arg1 == 0xe01)
        return 5
else if (arg1 - 0xb00 u< 0xb)
    return 5

pthread_kill(pthread_self(), 6)
void* x0_3
int64_t x1
x0_3, x1 = XNoReturn()
return GetLocTranslation(x0_3, x1) __tailcall
