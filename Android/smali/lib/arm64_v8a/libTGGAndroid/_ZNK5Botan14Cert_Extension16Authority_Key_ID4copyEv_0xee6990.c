// 函数: _ZNK5Botan14Cert_Extension16Authority_Key_ID4copyEv
// 地址: 0xee6990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = operator new(0x20)
result[2] = 0
result[3] = 0
*result = _vtable_for_Botan::Cert_Extension::Authority_Key_ID + 0x10
result[1] = 0
void* entry_x0
int64_t x22 = *(entry_x0 + 8)
int64_t x8_1 = *(entry_x0 + 0x10)
uint64_t x21_1 = x8_1 - x22

if (x8_1 != x22)
    if ((x21_1 & 0xffffffff80000000) != 0)
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_2 = result[1]
        
        if (x8_2 != 0)
            result[2] = x8_2
            operator delete(x8_2)
        
        operator delete(result)
        sub_1101e04(x0_4)
        noreturn
    
    int64_t x0_1 = operator new(x21_1)
    int64_t x20_2 = x0_1 + x21_1
    result[1] = x0_1
    result[2] = x0_1
    result[3] = x20_2
    memcpy(x0_1, x22, x21_1)
    result[2] = x20_2

return result
