// 函数: _ZNSt11logic_errorC1EPKc
// 地址: 0x10dfc74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_std::logic_error + 0x10
int64_t entry_x1
int64_t x0_1 = __strlen_chk(entry_x1, -1)
int64_t* x0_3 = operator new(x0_1 + 0x19)
*x0_3 = x0_1
x0_3[1] = x0_1
x0_3[2].d = 0
int64_t result = memcpy(&x0_3[3], entry_x1, x0_1 + 1)
*(arg1 + 8) = &x0_3[3]
return result
