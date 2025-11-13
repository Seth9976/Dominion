// 函数: _ZNK5Botan26Flatfile_Certificate_Store34find_cert_by_raw_subject_dn_sha256ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xcf8060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
char* x10 = *entry_x1
int64_t x9 = entry_x1[1]

if (x9 - x10 != 0x20)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x50)
    v0 = data_71b810
    int64_t var_30 = x0_2
    __builtin_strncpy(x0_2, 
        "Flatfile_Certificate_Store::find_cert_by_raw_subject_dn_sha256 invalid hash", 0x4c)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* i = *(arg1 + 0x58)
int64_t* entry_x8

if (i != 0)
    void* __offset(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, 0x58) i_2
    
    if (x10 == x9)
        do
            i_2 = i
            i = *i
        while (i != 0)
    else
        i_2 = arg1 + 0x58
        
        while (true)
        label_cf80b0:
            char* x14_1 = *(i + 0x20)
            char* x15_1 = x10
            
            while (true)
                if (*(i + 0x28) != x14_1)
                    uint32_t x16_1 = zx.d(*x14_1)
                    uint32_t x17_1 = zx.d(*x15_1)
                    
                    if (x16_1 u>= x17_1)
                        if (x17_1 u< x16_1)
                            break
                        
                        x15_1 = &x15_1[1]
                        x14_1 = &x14_1[1]
                        
                        if (x9 == x15_1)
                            break
                        
                        continue
                
                i = *(i + 8)
                
                if (i == 0)
                    goto label_cf80f4
                
                goto label_cf80b0
            
            i_2 = i
            i = *i
            
            if (i == 0)
                break
    
label_cf80f4:
    
    if (i_2 != arg1 + 0x58)
        char* x12_1 = *(i_2 + 0x20)
        int64_t x13_2 = *(i_2 + 0x28)
        
        if (x12_1 != x13_2)
            do
                if (x9 == x10)
                    goto label_cf8170
                
                uint32_t x14_2 = zx.d(*x10)
                uint32_t x15_2 = zx.d(*x12_1)
                
                if (x14_2 u< x15_2)
                    goto label_cf8170
                
                if (x15_2 u< x14_2)
                    break
                
                x12_1 = &x12_1[1]
                x10 = &x10[1]
            while (x13_2 != x12_1)
        
        *entry_x8 = *(i_2 + 0x38)
        int64_t x9_2 = *(i_2 + 0x40)
        entry_x8[1] = x9_2
        
        if (x9_2 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(x9_2 + 8) + 1, x9_2 + 8)
            while (i_1 != 0)
        
        return arg1 + 0x58

label_cf8170:
*entry_x8 = 0
entry_x8[1] = 0
return arg1 + 0x58
