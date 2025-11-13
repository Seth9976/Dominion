// 函数: _ZN5Botan3TLS15TLS_Data_Reader10get_stringEmmm
// 地址: 0xe4c6b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::TLS::TLS_Data_Reader::get_range_vector<uint8_t>(arg1, arg2, arg3)
void* result_1
int64_t var_40
size_t x20 = var_40 - result_1

if (x20 u>= -0x10)
    int64_t* x0_4 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if (result_1 != 0)
        void* result_3 = result_1
        operator delete(result_1)
    
    sub_1101e04(x0_4)
    noreturn

void* result
char* entry_x8
void* x19_1

if (x20 u>= 0x17)
    uint64_t x22_1 = (x20 + 0x10) & 0xfffffffffffffff0
    void* x0_1 = operator new(x22_1)
    *(entry_x8 + 8) = x20
    *(entry_x8 + 0x10) = x0_1
    *entry_x8 = x22_1 | 1
    x19_1 = x0_1
label_e4c744:
    memcpy(x19_1, result_1, x20)
    result = result_1
    *(x19_1 + x20) = 0
    
    if (result == 0)
        return result
else
    *entry_x8 = (x20.d << 1).b
    x19_1 = &entry_x8[1]
    
    if (x20 != 0)
        goto label_e4c744
    
    result = result_1
    *(x19_1 + x20) = 0
    
    if (result == 0)
        return result
void* result_2 = result
return operator delete(result)
