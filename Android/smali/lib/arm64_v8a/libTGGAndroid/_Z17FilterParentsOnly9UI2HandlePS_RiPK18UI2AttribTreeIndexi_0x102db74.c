// 函数: _Z17FilterParentsOnly9UI2HandlePS_RiPK18UI2AttribTreeIndexi
// 地址: 0x102db74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 s>= 1)
    UI2AttribTreeIndex const* x22_1 = arg4
    uint64_t i_1 = zx.q(arg5)
    UI2Handle* x25_1 = arg2
    uint64_t i
    
    do
        uint64_t x0 = zx.q(*x22_1)
        x22_1 += 4
        i = i_1
        i_1 -= 1
        *x25_1 = *(UI2GetIndex(x0) + 0x19a0)
        x25_1 += 4
    while (i != 1)

*arg3 = arg5
return FilterParentsOnlyRec(*gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8), arg2, arg3, false) __tailcall
