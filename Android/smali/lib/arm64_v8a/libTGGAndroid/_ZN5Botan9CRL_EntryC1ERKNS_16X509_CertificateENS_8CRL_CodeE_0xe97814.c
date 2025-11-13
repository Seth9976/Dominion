// 函数: _ZN5Botan9CRL_EntryC1ERKNS_16X509_CertificateENS_8CRL_CodeE
// 地址: 0xe97814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::CRL_Entry + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void* tp_1 = operator new(0x80)
__builtin_memset(tp_1, 0, 0x18)
__builtin_memset(tp_1 + 0x20, 0, 0x18)
*(tp_1 + 0x40) = 0
*(tp_1 + 0x38) = 0xff00
*(tp_1 + 0x18) = _vtable_for_Botan::ASN1_Time + 0x10
*(tp_1 + 0x58) = 0
*(tp_1 + 0x60) = 0
*(tp_1 + 0x48) = _vtable_for_Botan::Extensions + 0x10
*(tp_1 + 0x50) = 0
*(tp_1 + 0x70) = 0
*(tp_1 + 0x78) = 0
*(tp_1 + 0x68) = tp_1 + 0x70
void* const tp = tp_1
int64_t* x0 = operator new(0x20)
x0[2] = 0
x0[3] = tp_1
tp = nullptr
*x0 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::CRL_Entry_Data*, std::__ndk1::default_delete<Botan::CRL_Entry_Data>, std::__ndk1::allocator<Botan::CRL_Entry_Data> >
    + 0x10
x0[1] = 0
sub_e98704(&tp)
int64_t* x23 = *(arg1 + 0x10)
*(arg1 + 8) = tp_1
*(arg1 + 0x10) = x0

if (x23 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x23[1])
        i = __stlxr(x9_1 - 1, &x23[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x23 + 0x10))(x23)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x0_5 = Botan::X509_Certificate::data()
uint8_t* x8_8 = *(arg1 + 8)

if (x8_8 != x0_5)
    x0_5[1]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(x8_8, *x0_5)

int64_t var_88 = std::__ndk1::chrono::system_clock::now()
time_t t = std::__ndk1::chrono::system_clock::to_time_t(&var_88)
struct tm* result
int128_t v0
int128_t v1
uint128_t v2
result, v0, v1, v2 = gmtime_r(&t, &tp)
int64_t var_70
v0.q = var_70
v1.q = 0x76c00000001
int128_t v0_1 = v0 + v1
void* x9_3 = *(arg1 + 8)
uint128_t v1_1 = vrev64q_s32(tp.o)
uint128_t v1_2 = vextq_s8(v1_1, v1_1, 8)
uint64_t v0_2 = vrev64_s32(v0_1)
int32_t x8_9

if (v0_1:4.d u> 0x801)
    x8_9 = 0x18
else
    x8_9 = 0x17

*(x9_3 + 0x20) = v0_2
*(x9_3 + 0x28) = v1_2
*(x9_3 + 0x38) = x8_9
int32_t entry_x2
*(*(arg1 + 8) + 0x40) = entry_x2

if (entry_x2 == 0)
    return result

void* x21_1 = *(arg1 + 8)
void** x0_11 = operator new(0x10)
x0_11[1].d = entry_x2
*x0_11 = _vtable_for_Botan::Cert_Extension::CRL_ReasonCode + 0x10
return Botan::Extensions::add(x21_1 + 0x48, x0_11.b)
