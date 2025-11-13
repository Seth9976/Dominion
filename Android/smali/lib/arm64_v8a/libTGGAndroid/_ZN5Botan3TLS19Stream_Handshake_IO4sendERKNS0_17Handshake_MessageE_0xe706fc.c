// 函数: _ZN5Botan3TLS19Stream_Handshake_IO4sendERKNS0_17Handshake_MessageE
// 地址: 0xe706fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
(*(*entry_x1 + 8))(entry_x1)
void* result_1
char var_60
int64_t* entry_x8

if ((**entry_x1)(entry_x1) != 0xfe)
    Botan::TLS::Stream_Handshake_IO::format((**entry_x1)(entry_x1), &result_1)
    char var_24 = 0x16
    int64_t* x0_6 = *(arg1 + 0x60)
    
    if (x0_6 == 0)
        sub_a58ab4()
        noreturn
    
    (*(*x0_6 + 0x30))(x0_6, &var_24, &var_60)
    void* x20_1 = var_60.q
    __builtin_memset(entry_x8, 0, 0x18)
    int64_t var_58
    uint64_t x21_1 = var_58 - x20_1
    
    if (var_58 != x20_1)
        if ((x21_1 & 0xffffffff80000000) != 0)
            int64_t* x0_11 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x8_9 = *entry_x8
            void* x0_12
            
            if (x8_9 == 0)
                x0_12 = var_60.q
                
                if (x0_12 != 0)
                    goto label_e70880
                
                goto label_e7084c
            
            entry_x8[1] = x8_9
            operator delete(x8_9)
            x0_12 = var_60.q
            void* result_3
            
            if (x0_12 == 0)
            label_e7084c:
                result_3 = result_1
                
                if (result_3 == 0)
                    sub_1101e04(x0_11)
                    noreturn
            else
            label_e70880:
                void* var_58_2 = x0_12
                operator delete(x0_12)
                result_3 = result_1
                
                if (result_3 == 0)
                    sub_1101e04(x0_11)
                    noreturn
            
            void* result_4 = result_3
            operator delete(result_3)
            sub_1101e04(x0_11)
            noreturn
        
        int64_t x0_8 = operator new(x21_1)
        int64_t x22_1 = x0_8 + x21_1
        *entry_x8 = x0_8
        entry_x8[1] = x0_8
        entry_x8[2] = x22_1
        memcpy(x0_8, x20_1, x21_1)
        entry_x8[1] = x22_1
    
    if (x20_1 != 0)
        void* var_58_1 = x20_1
        operator delete(x20_1)
else
    var_60 = 0x14
    int64_t* x0_3 = *(arg1 + 0x60)
    
    if (x0_3 == 0)
        sub_a58ab4()
        noreturn
    
    (*(*x0_3 + 0x30))(x0_3, &var_60, &result_1)
    __builtin_memset(entry_x8, 0, 0x18)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return operator delete(result)
