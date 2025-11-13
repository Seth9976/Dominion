// 函数: _ZN5Botan12EC_PublicKey22set_parameter_encodingENS_17EC_Group_EncodingE
// 地址: 0xd353a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 3)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x40)
    v0 = data_71d0c0
    int64_t var_30 = x0_2
    __builtin_strncpy(x0_2, "Invalid encoding form for EC-key object specified", 0x32)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* x20 = arg1

if (entry_x1 == 2)
    arg1 = Botan::EC_Group::data()
    
    if (*(arg1 + 0x1c8) == *(arg1 + 0x1d0))
        void** x0_6 = __cxa_allocate_exception(0x20)
        int64_t x0_7
        int128_t v0_1
        x0_7, v0_1 = operator new(0x70)
        v0_1 = data_71b710
        int64_t var_30_1 = x0_7
        __builtin_strncpy(x0_7, 
            "Invalid encoding form OID specified for EC-key object whose corresponding domain parameters "
        "are without oid", 
            0x6c)
        int128_t var_40_1 = v0_1
        *x0_6 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_6[1])
        *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn

*(x20 + 0xa0) = entry_x1
