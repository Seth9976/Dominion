// 函数: _ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0x10dfbdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_std::logic_error + 0x10
char* entry_x1
void* x20

if ((zx.d(*entry_x1) & 1) != 0)
    x20 = *(entry_x1 + 0x10)
else
    x20 = &entry_x1[1]

int64_t x0_1 = __strlen_chk(x20, -1)
int64_t* x0_3 = operator new(x0_1 + 0x19)
*x0_3 = x0_1
x0_3[1] = x0_1
x0_3[2].d = 0
int64_t result = memcpy(&x0_3[3], x20, x0_1 + 1)
*(arg1 + 8) = &x0_3[3]
return result
