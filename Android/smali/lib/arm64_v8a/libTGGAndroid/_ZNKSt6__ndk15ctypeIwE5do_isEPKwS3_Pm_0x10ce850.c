// 函数: _ZNKSt6__ndk15ctypeIwE5do_isEPKwS3_Pm
// 地址: 0x10ce850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
wchar_t const* x0 = arg2

if (arg2 == arg3)
    return x0

do
    uint64_t x9_2 = zx.q(*x0)
    int64_t x9_1
    
    if (x9_2.d u<= 0x7f)
        x9_1 = *(&data_878ac0 + (x9_2 << 3))
    else
        x9_1 = 0
    
    x0 = &x0[1]
    int64_t* entry_x3
    *entry_x3 = x9_1
    entry_x3 = &entry_x3[1]
while (arg3 != x0)

return arg3
