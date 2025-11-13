// 函数: _ZNK5Botan22Path_Validation_Result13result_stringEv
// 地址: 0xe584cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
char* x0_1 = Botan::to_string(zx.q(*(entry_x0 + 0x48)))
char* x21

if (x0_1 == 0)
    x21 = "Unknown error"
else
    x21 = x0_1

size_t result = strlen(x21)

if (result u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    return Botan::Path_Validation_Result::~Path_Validation_Result() __tailcall

size_t result_1 = result
void* x19_1
char* entry_x8

if (result u>= 0x17)
    uint64_t x22_1 = (result_1 + 0x10) & 0xfffffffffffffff0
    void* x0_4 = operator new(x22_1)
    *(entry_x8 + 8) = result_1
    *(entry_x8 + 0x10) = x0_4
    *entry_x8 = x22_1 | 1
    x19_1 = x0_4
    result = memcpy(x19_1, x21, result_1)
else
    *entry_x8 = (result_1.d << 1).b
    x19_1 = &entry_x8[1]
    
    if (result_1 != 0)
        result = memcpy(x19_1, x21, result_1)
*(x19_1 + result_1) = 0
return result
