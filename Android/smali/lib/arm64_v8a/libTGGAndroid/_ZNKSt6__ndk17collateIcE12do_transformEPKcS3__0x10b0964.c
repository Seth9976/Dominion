// 函数: _ZNKSt6__ndk17collateIcE12do_transformEPKcS3_
// 地址: 0x10b0964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
void* x20 = entry_x2 - arg2

if (x20 u>= -0x10)
    char* x0_3
    char* x1_1
    x0_3, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    return std::__ndk1::collate<char>::do_hash(x0_3, x1_1) __tailcall

void* x19_1
char* entry_x8

if (x20 u> 0x16)
    void* x23_1 = (x20 + 0x10) & 0xfffffffffffffff0
    arg1 = operator new(x23_1)
    *(entry_x8 + 8) = x20
    *(entry_x8 + 0x10) = arg1
    *entry_x8 = x23_1 | 1
    x19_1 = arg1
    
    if (arg2 != entry_x2)
        memcpy(x19_1, arg2, x20)
        x19_1 += x20
else
    *entry_x8 = (x20.d << 1).b
    x19_1 = &entry_x8[1]
    
    if (arg2 != entry_x2)
        memcpy(x19_1, arg2, x20)
        x19_1 += x20
*x19_1 = 0
