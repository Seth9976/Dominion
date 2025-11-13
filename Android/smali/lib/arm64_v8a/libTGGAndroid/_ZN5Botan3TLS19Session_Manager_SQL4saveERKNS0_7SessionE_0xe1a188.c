// 函数: _ZN5Botan3TLS19Session_Manager_SQL4saveERKNS0_7SessionE
// 地址: 0xe1a188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_50)
uint32_t x8 = zx.d(var_50)

if ((x8 & 1) != 0)
    void* var_40
    result = operator delete(var_40)
    int64_t var_48
    
    if (var_48 != 0)
    label_e1a1d0:
        int64_t* x22_2 = *(arg1 + 8)
        void* x0_2
        int128_t v0_1
        x0_2, v0_1 = operator new(0x40)
        var_50.o = data_71be50
        __builtin_strncpy(x0_2, "insert or replace into tls_sessions values(?1, ?2, ?3, ?4, ?5)", 
            0x3f)
        (**x22_2)(x22_2, &var_50)
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(x0_2)
        
        Botan::OctetString* entry_x1
        uint8_t* x0_5 = *(entry_x1 + 8)
        Botan::hex_encode(x0_5, *(entry_x1 + 0x10) - x0_5, true)
        int64_t* var_60
        (**var_60)(var_60, 1, &var_50)
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(x0_2)
        
        (*(*var_60 + 0x10))(var_60, 2, *entry_x1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_50)
        (**var_60)(var_60, 3, &var_50)
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(x0_2)
        
        (*(*var_60 + 8))(var_60, 4, zx.q(*(entry_x1 + 0xa8)))
        void* var_78
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_78)
        *(arg1 + 0x30)
        Botan::TLS::Session::encrypt(entry_x1, &var_78)
        (*(*var_60 + 0x18))(var_60, 5, &var_50)
        void* x0_16 = var_50.q
        
        if (x0_16 != 0)
            void* var_48_1 = x0_16
            operator delete(x0_16)
        
        void* x0_17 = var_78
        
        if (x0_17 != 0)
            void* var_70_1 = x0_17
            int64_t var_68
            Botan::deallocate_memory(x0_17, var_68 - x0_17, 1)
        
        (*(*var_60 + 0x40))()
        result = Botan::TLS::Session_Manager_SQL::prune_session_cache()
        int64_t* var_58
        
        if (var_58 != 0)
            int64_t x9_2
            int32_t i
            
            do
                x9_2 = __ldaxr(&var_58[1])
                i = __stlxr(x9_2 - 1, &var_58[1])
            while (i != 0)
            
            if (x9_2 == 0)
                (*(*var_58 + 0x10))(var_58)
                return std::__ndk1::__shared_weak_count::__release_weak()
else if (x8 u>= 2)
    goto label_e1a1d0

return result
