// 函数: _Z15ShouldShowCount12DomTokenType8DomWhereiiRb
// 地址: 0xb04660
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg5 = false

if (arg1 s> 0xbff)
    if (arg1 == 0x1000)
        return zx.q(arg2 == 0x3f1 ? 1 : 0) | zx.q(arg3 s> 1 ? 1 : 0)
    
    if (arg1 == 0x1001 || arg1 == 0x1200)
        return 1
    
    if (arg1 == 0xc00)
        return zx.q(arg2 == 0x3f1 ? 1 : 0) | zx.q(arg3 s> 1 ? 1 : 0)
    
    if (arg1 == 0xe00)
        return 1
    
    if (arg1 == 0xe01)
        if (arg3 s< 2)
            return (zx.q(arg2 != 0x3f1 ? 1 : 0) | zx.q(arg3 != 1 ? 1 : 0)) & zx.q(arg4 s> 0 ? 1 : 0)
        
        *arg5 = true
        return 1
else if (arg1 s<= 0x600)
    if (arg1 == 0x400)
        return zx.q(arg3 s> 1 ? 1 : 0)
    
    if (arg1 == 0x401)
        return 1
    
    if (arg1 == 0x600)
        return 0
else
    if (arg1 - 0xb00 u< 0xb)
        return 0
    
    if (arg1 == 0x601)
        return zx.q(arg2 == 0x3f1 ? 1 : 0) | zx.q(arg3 s> 1 ? 1 : 0)
    
    if (arg1 == 0xa00)
        return 1

pthread_kill(pthread_self(), 6)
return DomDeclareArrow(XNoReturn()) __tailcall
