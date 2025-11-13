// 函数: _ZNK5Botan14Cert_Extension17Unknown_Extension6oid_ofEv
// 地址: 0xee7dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[3] = 0
*entry_x8 = _vtable_for_Botan::OID + 0x10
entry_x8[1] = 0
void* entry_x0
int64_t x22 = *(entry_x0 + 0x10)
int64_t x8_1 = *(entry_x0 + 0x18)
uint64_t x21 = x8_1 - x22

if (x8_1 == x22)
    return 

if ((x21 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_5 = entry_x8[1]
    
    if (x8_5 != 0)
        entry_x8[2] = x8_5
        operator delete(x8_5)
    
    sub_1101e04(x0_3)
    noreturn

int64_t x0_1 = operator new(x21)
entry_x8[1] = x0_1
entry_x8[2] = x0_1
entry_x8[3] = x0_1 + (x21 s>> 2 << 2)
memcpy(x0_1, x22, x21)
entry_x8[2] = x0_1 + x21
