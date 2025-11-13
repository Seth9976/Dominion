// 函数: _ZN5Botan9SCAN_NameC1EPKc
// 地址: 0xccddc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
size_t x0_1 = strlen(entry_x1)
char var_48
void* var_38

if (x0_1 u>= -0x10)
    int64_t* x0_7 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)
    
    sub_1101e04(x0_7)
    noreturn

void* x22

if (x0_1 u>= 0x17)
    uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x23_1)
    x22 = x0_3
    size_t var_40_1 = x0_1
    var_38 = x0_3
    var_48.q = x23_1 | 1
    memcpy(x22, entry_x1, x0_1)
else
    x22 = &var_48 | 1
    var_48 = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x22, entry_x1, x0_1)

*(x22 + x0_1) = 0
int64_t result = Botan::SCAN_Name::SCAN_Name(arg1)

if ((zx.d(var_48) & 1) == 0)
    return result

return operator delete(var_38)
