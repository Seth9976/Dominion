// 函数: sub_1104550
// 地址: 0x1104550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_1 = zx.q(*arg4 - 1)
char const* const x2_1
char const* const x3_3
int64_t (* x19)()

if (x9_1.d u> 5)
label_1104654:
    SystemHintOp_BTI()
    x2_1 = "getSavedRegister"
    x19 = __sF + 0x130
    x3_3 = "unsupported restore location for register"
label_11046a8:
    fprintf(x19, "libunwind: %s - %s\n", x2_1, x3_3)
    fflush(x19)
    abort()
    noreturn

switch (x9_1)
    case 0
        SystemHintOp_BTI()
        return 0
    case 1
        SystemHintOp_BTI()
        int64_t result = *(*(arg4 + 8) + arg3)
        SystemHintOp_BTI()
        return result
    case 2
        goto label_1104654
    case 3
        SystemHintOp_BTI()
        int32_t x8_2 = (*(arg4 + 8)).d
        
        if (x8_2 == 0xfffffffe)
            return *(arg2 + 0xf8)
        
        if (x8_2 == 0x22)
            return *(arg2 + 0x108)
        
        if (x8_2 == 0xffffffff)
            return *(arg2 + 0x100)
        
        if (x8_2 u<= 0x1f)
            return *(arg2 + (zx.q(x8_2) << 3))
        
        x2_1 = "getRegister"
        x19 = __sF + 0x130
        x3_3 = "unsupported arm64 register"
        goto label_11046a8
    case 4
        SystemHintOp_BTI()
        return *sub_11049a8(*(arg4 + 8), arg1, arg2, arg3)
    case 5
        SystemHintOp_BTI()
        return sub_11049a8(*(arg4 + 8), arg1, arg2, arg3) __tailcall
