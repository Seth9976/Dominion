// 函数: _ZSt14set_unexpectedPFvvE
// 地址: 0x10ea4f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void (* x8)()

x8 = arg1 == 0 ? sub_10ea4d8 : arg1

int64_t result
int32_t i

do
    result = __ldaxr(__cxa_unexpected_handler)
    i = __stlxr(x8, __cxa_unexpected_handler)
while (i != 0)
return result
