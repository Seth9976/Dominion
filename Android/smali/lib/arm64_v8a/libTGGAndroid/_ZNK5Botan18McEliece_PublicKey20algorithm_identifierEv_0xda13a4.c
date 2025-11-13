// 函数: _ZNK5Botan18McEliece_PublicKey20algorithm_identifierEv
// 地址: 0xda13a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t result = (*(*(entry_x0 + *(*entry_x0 - 0x88)) + 0x28))()
void** entry_x8
*entry_x8 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
entry_x8[1] = _vtable_for_Botan::OID + 0x10
entry_x8[2] = 0
void* var_58
int64_t var_50
uint64_t x22 = var_50 - var_58
entry_x8[3] = 0
entry_x8[4] = 0

if (var_50 != var_58)
    if ((x22 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_4 = entry_x8[2]
        void* x0_6
        
        if (x8_4 != 0)
            entry_x8[3] = x8_4
            operator delete(x8_4)
            x0_6 = var_58
            void* __offset(vtable_for_Botan::OID, 0x10) var_60_2 = _vtable_for_Botan::OID + 0x10
            
            if (x0_6 != 0)
            label_da14bc:
                void* var_50_2 = x0_6
                operator delete(x0_6)
                sub_1101e04(x0_5)
                noreturn
        else
            x0_6 = var_58
            void* __offset(vtable_for_Botan::OID, 0x10) var_60_1 = _vtable_for_Botan::OID + 0x10
            
            if (x0_6 != 0)
                goto label_da14bc
        sub_1101e04(x0_5)
        noreturn
    
    int64_t x0_2 = operator new(x22)
    entry_x8[2] = x0_2
    entry_x8[3] = x0_2
    entry_x8[4] = x0_2 + (x22 s>> 2 << 2)
    result = memcpy(x0_2, var_58, x22)
    entry_x8[3] = x0_2 + x22

__builtin_memset(&entry_x8[5], 0, 0x18)
void* __offset(vtable_for_Botan::OID, 0x10) var_60 = _vtable_for_Botan::OID + 0x10

if (var_58 == 0)
    return result

void* var_50_1 = var_58
return operator delete(var_58)
