// 函数: _ZN5Botan3OID11from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xcadb44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
uint64_t x9_1

if ((x9.d & 1) == 0)
    x9_1 = x9 u>> 1
else
    x9_1 = *(arg1 + 8)

if (x9_1 == 0)
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x30)
    (*"ust be non-empty")[0].o
    int64_t var_50_2 = x0_8
    v0 = data_71cfc0
    __builtin_strncpy(x0_8, "OID::from_string argument must be non-empty", 0x2c)
    int128_t var_60_1 = v0
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x20 = arg1
int64_t result = Botan::OIDS::str2oid_or_empty(arg1)
int128_t var_60
void* x19 = var_60:8.q
int64_t var_50
void* var_50_1
void** entry_x8

if (x19 == var_50)
    void* var_78
    sub_cb08dc(&var_78, x20)
    void* x19_1 = var_78
    int64_t var_70
    uint64_t x22_1 = var_70 - x19_1
    
    if (var_70 != x19_1)
        *entry_x8 = _vtable_for_Botan::OID + 0x10
        entry_x8[1] = 0
        entry_x8[2] = 0
        entry_x8[3] = 0
        
        if ((x22_1 & 0xffffffff80000000) != 0)
            int64_t* x0_18 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            char var_90
            void* var_80
            
            if ((zx.d(var_90) & 1) != 0)
                operator delete(var_80)
            
            if (x19_1 != 0)
                operator delete(x19_1)
            
            void* x0_22 = var_60:8.q
            var_60.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_22 != 0)
                void* var_50_3 = x0_22
                operator delete(x0_22)
            
            sub_1101e04(x0_18)
            noreturn
        
        int64_t x0_5 = operator new(x22_1)
        entry_x8[1] = x0_5
        entry_x8[2] = x0_5
        entry_x8[3] = x0_5 + (x22_1 s>> 2 << 2)
        result = memcpy(x0_5, x19_1, x22_1)
        entry_x8[2] = x0_5 + x22_1
        
        if (x19_1 != 0)
            result = operator delete(x19_1)
        
        x19 = var_60:8.q
        var_60.q = _vtable_for_Botan::OID + 0x10
        
        if (x19 == 0)
            return result
        
        var_50_1 = x19
        return operator delete(x19)
else
    uint64_t x22 = var_50 - x19
    *entry_x8 = _vtable_for_Botan::OID + 0x10
    x20 = &entry_x8[1]
    *x20 = 0
    entry_x8[2] = 0
    entry_x8[3] = 0
    
    if (var_50 == x19)
        goto label_cadbe8
    
    if ((x22 & 0xffffffff80000000) == 0)
        int64_t x0_1 = operator new(x22)
        entry_x8[1] = x0_1
        entry_x8[2] = x0_1
        entry_x8[3] = x0_1 + (x22 s>> 2 << 2)
        result = memcpy(x0_1, x19, x22)
        entry_x8[2] = x0_1 + x22
    label_cadbe8:
        var_60.q = _vtable_for_Botan::OID + 0x10
        
        if (x19 == 0)
            return result
        
        var_50_1 = x19
        return operator delete(x19)
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
void** x0_13 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "No OID associated with name ", x20)
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
*x0_13 = _vtable_for_Botan::Lookup_Error + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
noreturn
