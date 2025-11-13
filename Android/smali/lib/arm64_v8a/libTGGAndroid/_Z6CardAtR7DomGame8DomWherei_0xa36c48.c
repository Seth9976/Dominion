// 函数: _Z6CardAtR7DomGame8DomWherei
// 地址: 0xa36c48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1 = zx.q(*(DomBoardPile(arg1, arg2) + 8))

if (arg3 s>= 1 && x1.d != 0)
    int32_t x21_1 = 1
    
    do
        x1 = zx.q(*(CardGet(arg1, x1) + 0x60))
        
        if (x21_1 s>= arg3)
            break
        
        x21_1 += 1
    while (x1.d != 0)

return zx.q(x1.d)
