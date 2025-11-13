// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO12send_messageEttNS0_14Handshake_TypeERKNSt6__ndk16vectorIhNS3_9allocatorIhEEEE
// 地址: 0xe70c40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x4
uint64_t x1 = *entry_x4
int16_t x23 = arg3
uint16_t x5 = arg4.w
int32_t x2 = (entry_x4[1]).d - x1.d
void* x20 = arg1
void* result = Botan::TLS::Datagram_Handshake_IO::format_fragment(arg1, x1, x2.w, 0, zx.q(x2), x5)
uint64_t x8_2 = zx.q(*(x20 + 0xd0))
int16_t var_80
char var_64
int64_t* entry_x8

if (entry_x8[1] - *entry_x8 + 0xd u<= x8_2)
    var_80 = x23
    var_64 = 0x16
    int64_t* x0_4 = *(x20 + 0xc0)
    
    if (x0_4 != 0)
        return (*(*x0_4 + 0x30))(x0_4, &var_80, &var_64, entry_x8)
    
    sub_a58ab4()
    noreturn

int64_t x9_3

if (zx.d(x23) == 0)
    x9_3 = 0x19
else
    x9_3 = 0x99

int64_t* var_90_1 = entry_x8

if (x9_3 u< x8_2)
    int64_t x19_1 = *entry_x4
    int64_t x10_1 = entry_x4[1]
    int64_t x22_1 = x10_1 - x19_1
    
    if (x10_1 == x19_1)
        return result
    
    size_t x28_1 = x8_2 - x9_3
    int64_t x27_1 = 0
    uint16_t x8_4 = (_byteswap(arg2.d) u>> 0x10).w
    
    while (true)
        size_t x8_6 = x22_1 - x27_1
        size_t x24_1
        
        x24_1 = x28_1 u< x8_6 ? x28_1 : x8_6
        
        __builtin_memset(&var_80, 0, 0x18)
        char* x25_1
        
        if (x24_1 == -0xc)
            x25_1 = nullptr
        label_e70d5c:
            x25_1[1] = 0
            *x25_1 = x5.b
            *(x25_1 + 4) = x8_4
            x25_1[3] = (x22_1.d).b
            x25_1[6] = 0
            x25_1[8] = (x27_1.d).b
            x25_1[2] = (x22_1 u>> 8).b
            x25_1[7] = (x27_1 u>> 8).b
            x25_1[9] = (x24_1 u>> 0x10).b
            x25_1[0xa] = (x24_1 u>> 8).b
            x25_1[0xb] = (x24_1.d).b
            
            if (x24_1 == 0)
                goto label_e70dac
            
            if (x19_1 == 0)
                Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            else
                memmove(&x25_1[0xc], x19_1 + x27_1, x24_1)
            label_e70dac:
                var_64.w = x23
                char var_68 = 0x16
                int64_t* x0_3 = *(x20 + 0xc0)
                
                if (x0_3 == 0)
                    sub_a58ab4()
                    noreturn
                
                (*(*x0_3 + 0x30))(x0_3, &var_64, &var_68, &var_80)
                result = var_80.q
                
                if (result != 0)
                    void* result_1 = result
                    result = operator delete(result)
                
                x19_1 = *entry_x4
                x27_1 += x24_1
                x22_1 = entry_x4[1] - x19_1
                
                if (x22_1 == x27_1)
                    return result
                
                continue
        else if (((x24_1 + 0xc) & 0xffffffff80000000) == 0)
            char* x0_1 = operator new(x24_1 + 0xc)
            void* fp_1 = &x0_1[x24_1 + 0xc]
            x25_1 = x0_1
            var_80.q = x0_1
            void* var_70_1 = fp_1
            memset(x0_1, 0, x24_1 + 0xc)
            void* var_78_1 = fp_1
            goto label_e70d5c
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        break

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0
x0_6, v0 = operator new(0x30)
v0 = data_71b5a0
int64_t var_70_2 = x0_6
__builtin_strncpy(x0_6, "DTLS MTU is too small to send headers", 0x26)
var_80.o = v0
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
