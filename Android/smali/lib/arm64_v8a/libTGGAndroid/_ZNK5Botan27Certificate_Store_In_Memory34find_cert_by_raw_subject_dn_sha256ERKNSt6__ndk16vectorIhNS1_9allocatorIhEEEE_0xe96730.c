// 函数: _ZNK5Botan27Certificate_Store_In_Memory34find_cert_by_raw_subject_dn_sha256ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xe96730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
int64_t* entry_x1

if (entry_x1[1] - *entry_x1 != 0x20)
    void** x0_9 = __cxa_allocate_exception(0x20)
    int64_t x0_10
    int128_t v0
    x0_10, v0 = operator new(0x50)
    v0 = data_71b0d0
    int64_t var_40_1 = x0_10
    __builtin_strncpy(x0_10, 
        "Certificate_Store_In_Memory::find_cert_by_raw_subject_dn_sha256 invalid hash", 0x4d)
    var_50 = v0
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

var_50.b = 0xe
__builtin_strncpy(&var_50:1, "SHA-256", 8)
int16_t var_70 = 0
Botan::HashFunction::create(&var_50, &var_70)
void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)
void* var_40

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)
int64_t* x22 = *(arg1 + 8)
int64_t x23 = *(arg1 + 0x10)
int64_t* result
int64_t* entry_x8

if (x22 == x23)
label_e9686c:
    *entry_x8 = 0
    entry_x8[1] = 0
else
    while (true)
        *x22
        void* x0_4 = Botan::X509_Certificate::data()
        int64_t x1_1 = *(x0_4 + 0xe0)
        (*(*result + 0x18))(result, x1_1, *(x0_4 + 0xe8) - x1_1)
        Botan::Buffered_Computation::final_stdvec()
        char* x9_3 = *entry_x1
        int64_t x8_4 = entry_x1[1]
        char* x0_7 = var_50.q
        int32_t x21_2
        
        if (x8_4 - x9_3 != var_50:8.q - x0_7)
            x21_2 = 0
        label_e96840:
            
            if (x0_7 != 0)
                var_50:8.q = x0_7
                operator delete(x0_7)
        else
            if (x9_3 != x8_4)
                char* x10_3 = x0_7
                
                do
                    uint32_t x11_2 = zx.d(*x9_3)
                    uint32_t x12_1 = zx.d(*x10_3)
                    x21_2 = x11_2 == x12_1 ? 1 : 0
                    
                    if (x11_2 != x12_1)
                        break
                    
                    x9_3 = &x9_3[1]
                    x10_3 = &x10_3[1]
                while (x8_4 != x9_3)
                
                goto label_e96840
            
            x21_2 = 1
            
            if (x0_7 != 0)
                var_50:8.q = x0_7
                operator delete(x0_7)
        
        if (x21_2 != 0)
            int64_t x8_5 = x22[1]
            *entry_x8 = *x22
            entry_x8[1] = x8_5
            
            if (x8_5 != 0)
                int32_t i
                
                do
                    i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
                while (i != 0)
            
            break
        
        x22 = &x22[2]
        
        if (x22 == x23)
            goto label_e9686c
int64_t var_58 = 0

if (result == 0)
    return result

return (*(*result + 0x10))()
