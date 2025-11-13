// 函数: _ZSt13set_terminatePFvvE
// 地址: 0x10ea524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void (* x8)()

x8 = arg1 == 0 ? sub_10ea3b4 : arg1

int64_t result
int32_t i

do
    result = __ldaxr(__cxa_terminate_handler)
    i = __stlxr(x8, __cxa_terminate_handler)
while (i != 0)
return result
