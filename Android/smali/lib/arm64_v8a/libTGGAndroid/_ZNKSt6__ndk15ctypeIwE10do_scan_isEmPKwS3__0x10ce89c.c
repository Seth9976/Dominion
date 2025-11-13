// 函数: _ZNKSt6__ndk15ctypeIwE10do_scan_isEmPKwS3_
// 地址: 0x10ce89c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
wchar_t const* x0 = arg3
int64_t entry_x3

if (arg3 != entry_x3)
    while (true)
        uint64_t x9_1 = zx.q(*x0)
        
        if (x9_1.d u<= 0x7f && (*(&data_878ac0 + (x9_1 << 3)) & arg2) != 0)
            break
        
        x0 = &x0[1]
        
        if (entry_x3 == x0)
            return entry_x3

return x0
