// 函数: sub_110446c
// 地址: 0x110446c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg2)
uint64_t x10 = zx.q(x9.d + 2)

if (x10.d u> 0x24)
label_11044ec:
    SystemHintOp_BTI()
    
    if (x9.d u<= 0x1f)
        return *(arg3 + (x9 << 3)) + sx.q(arg2[1])
    
    fprintf(__sF + 0x130, "libunwind: %s - %s\n", "getRegister", "unsupported arm64 register")
    fflush(__sF + 0x130)
    abort()
    noreturn

switch (x10)
    case 0
        SystemHintOp_BTI()
        return *(arg3 + 0xf8) + sx.q(arg2[1])
    case 1
        SystemHintOp_BTI()
        return *(arg3 + 0x100) + sx.q(arg2[1])
    case 2
        SystemHintOp_BTI()
        return sub_11049a8(*(arg2 + 8), arg1, arg3, 0) __tailcall
    case 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
            0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23
        goto label_11044ec
    case 0x24
        SystemHintOp_BTI()
        return *(arg3 + 0x108) + sx.q(arg2[1])
