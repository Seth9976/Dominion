// 函数: sub_f32b54
// 地址: 0xf32b54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_10 = arg2
char* x21 = *(arg1 + 8)
size_t x0_1 = strlen(x21)

if (x0_1 u>= -0x10)
    int64_t* x0_11 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    (*(*arg2 + 8))(arg2)
    sub_1101e04(x0_11)
    noreturn

int64_t var_48
void* var_38
void* x22

if (x0_1 u>= 0x17)
    uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x23_1)
    x22 = x0_3
    size_t var_40_1 = x0_1
    var_38 = x0_3
    var_48 = x23_1 | 1
    memcpy(x22, x21, x0_1)
else
    x22 = &var_48 | 1
    var_48.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x22, x21, x0_1)

*(x22 + x0_1) = 0
int64_t* x0_6 = Botan::get_kdf(&var_48)

if ((zx.d(var_48.b) & 1) != 0)
    operator delete(var_38)

(*(*x0_6 + 0x18))(x0_6, *(arg1 + 0x10), *(arg1 + 0x18), *(arg1 + 0x20), *(arg1 + 0x28), 
    *(arg1 + 0x30), *(arg1 + 0x38), *(arg1 + 0x40), *(arg1 + 0x48))
(*(*x0_6 + 8))(x0_6)
return 0
