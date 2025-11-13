// 函数: _ZN5Botan14sm2_compute_zaERNS_12HashFunctionERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS_8EC_GroupERKNS_8PointGFpE
// 地址: 0xe2939c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg2)
int128_t var_80
uint64_t x8

if ((x9.d & 1) != 0)
    x8 = *(arg2 + 8)
    
    if (x8 u< 0x2000)
        goto label_e293e4
else
    x8 = x9 u>> 1
label_e293e4:
    var_80.b = (x8 u>> 5).b
    (*(*arg1 + 0x18))(arg1, &var_80, 1)
    var_80.b = (x8.d << 3).b
    (*(*arg1 + 0x18))(arg1, &var_80, 1)
    uint64_t x8_3 = zx.q(*arg2)
    int32_t temp0_1 = x8_3.d & 1
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x1_2
    
    if (temp0_1 != 0)
        x1_2 = *(arg2 + 0x10)
    else
        x1_2 = arg2 + 1
    
    uint64_t x2
    
    if (temp0_1 == 0)
        x2 = x8_3 u>> 1
    else
        x2 = *(arg2 + 8)
    
    (*(*arg1 + 0x18))(arg1, x1_2, x2)
    uint64_t x22_1 = (*(Botan::EC_Group::data() + 0x1e0) + 7) u>> 3
    Botan::BigInt::encode_1363((*(**Botan::EC_Group::data() + 0x18))(), x22_1)
    int64_t x1_4 = var_80.q
    (*(*arg1 + 0x18))(arg1, x1_4, var_80:8.q - x1_4)
    void* x0_10 = var_80.q
    int64_t var_70
    
    if (x0_10 != 0)
        var_80:8.q = x0_10
        Botan::deallocate_memory(x0_10, var_70 - x0_10, 1)
    
    Botan::BigInt::encode_1363((*(**Botan::EC_Group::data() + 0x20))(), x22_1)
    int64_t x1_7 = var_80.q
    (*(*arg1 + 0x18))(arg1, x1_7, var_80:8.q - x1_7)
    void* x0_16 = var_80.q
    
    if (x0_16 != 0)
        var_80:8.q = x0_16
        Botan::deallocate_memory(x0_16, var_70 - x0_16, 1)
    
    Botan::BigInt::encode_1363(Botan::EC_Group::data() + 0x98, x22_1)
    int64_t x1_10 = var_80.q
    (*(*arg1 + 0x18))(arg1, x1_10, var_80:8.q - x1_10)
    void* x0_21 = var_80.q
    
    if (x0_21 != 0)
        var_80:8.q = x0_21
        Botan::deallocate_memory(x0_21, var_70 - x0_21, 1)
    
    Botan::BigInt::encode_1363(Botan::EC_Group::data() + 0xc0, x22_1)
    int64_t x1_13 = var_80.q
    (*(*arg1 + 0x18))(arg1, x1_13, var_80:8.q - x1_13)
    void* x0_26 = var_80.q
    
    if (x0_26 != 0)
        var_80:8.q = x0_26
        Botan::deallocate_memory(x0_26, var_70 - x0_26, 1)
    
    Botan::PointGFp::get_affine_x()
    Botan::BigInt::encode_1363(&var_80, x22_1)
    void* var_58
    void* var_50
    (*(*arg1 + 0x18))(arg1, var_58, var_50 - var_58)
    int64_t var_48
    
    if (var_58 != 0)
        var_50 = var_58
        Botan::deallocate_memory(var_58, var_48 - var_58, 1)
    
    void* x0_31 = var_80.q
    
    if (x0_31 != 0)
        var_80:8.q = x0_31
        Botan::deallocate_memory(x0_31, (var_70 - x0_31) s>> 2, 4)
    
    Botan::PointGFp::get_affine_y()
    Botan::BigInt::encode_1363(&var_80, x22_1)
    (*(*arg1 + 0x18))(arg1, var_58, var_50 - var_58)
    
    if (var_58 != 0)
        void* var_50_1 = var_58
        Botan::deallocate_memory(var_58, var_48 - var_58, 1)
    
    void* x0_36 = var_80.q
    
    if (x0_36 != 0)
        var_80:8.q = x0_36
        Botan::deallocate_memory(x0_36, (var_70 - x0_36) s>> 2, 4)
    
    uint64_t x0_38 = (**arg1)(arg1)
    int64_t* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    
    if (x0_38 == 0)
        return (*(*arg1 + 0x20))(arg1, 0)
    
    if ((x0_38 & 0xffffffff80000000) == 0)
        int64_t x0_40 = operator new(x0_38)
        int64_t x23_1 = x0_40 + x0_38
        *entry_x8 = x0_40
        entry_x8[2] = x23_1
        memset(x0_40, 0, x0_38)
        entry_x8[1] = x23_1
        return (*(*arg1 + 0x20))(arg1, x0_40)
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
void** x0_44 = __cxa_allocate_exception(0x20)
int64_t x0_45
int128_t v0
x0_45, v0 = operator new(0x30)
v0 = data_71c510
int64_t var_70_1 = x0_45
__builtin_strncpy(x0_45, "SM2 user id too long to represent", 0x22)
var_80 = v0
*x0_44 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_44[1])
*x0_44 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_44, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
