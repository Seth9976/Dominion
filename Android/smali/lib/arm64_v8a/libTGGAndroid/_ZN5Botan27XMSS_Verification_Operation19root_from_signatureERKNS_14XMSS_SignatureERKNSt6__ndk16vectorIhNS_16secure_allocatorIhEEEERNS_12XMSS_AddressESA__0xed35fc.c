// 函数: _ZN5Botan27XMSS_Verification_Operation19root_from_signatureERKNS_14XMSS_SignatureERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERNS_12XMSS_AddressESA_
// 地址: 0xed35fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x26 = *(arg1 + 8)
int64_t var_c0 = *(x26 + 0x20)
char var_b8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_b8)
char var_a0
int128_t v0
int128_t v1
v0, v1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a0)
v1 = *(x26 + 0x58)
int64_t var_68 = *(x26 + 0x78)
int128_t var_78 = *(x26 + 0x68)
int64_t x25 = *arg2
*(*arg4 + 0xf) = 0
void* x8_3 = *arg4
size_t x2 = *(arg4 + 8) - (x8_3 + 0x10)

if (x2 s>= 1)
    memset(x8_3 + 0x10, 0, x2)
    x8_3 = *arg4

int64_t* var_1f8
int64_t* var_1f0
int128_t var_1e0
int128_t var_1d0
int128_t var_1c0
void* var_a8
void* var_90

if (zx.d(*(x8_3 + 0xf)) != 0)
label_ed3b24:
    Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
        "set_ots_address() requires XMSS_Address::Type::OTS_Hash_Address.", "set_ots_address", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1b94)
    Botan::assertion_failure("get_type() == Type::LTree_Address", 
        "set_ltree_address() requires XMSS_Address::Type::LTree_Address.", "set_ltree_address", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1bb2)
    Botan::assertion_failure(
        "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
        "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
    "Hash_Tree_Address.", 
        "set_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c2a)
else
    uint8_t x26_1 = (x25 u>> 0x18).b
    *(x8_3 + 0x10) = x26_1
    uint8_t x27_1 = (x25 u>> 0x10).b
    uint8_t x28_1 = (x25 u>> 8).b
    *(*arg4 + 0x11) = x27_1
    *(*arg4 + 0x12) = x28_1
    *(*arg4 + 0x13) = (x25.d).b
    void var_1b0
    Botan::XMSS_WOTS_PublicKey::XMSS_WOTS_PublicKey(&var_1b0, zx.q(*(*(arg1 + 8) + 0x80)), arg3, 
        arg2 + 0x20, arg4)
    *(*arg4 + 0xf) = 1
    void* x8_9 = *arg4
    size_t x2_2 = *(arg4 + 8) - (x8_9 + 0x10)
    
    if (x2_2 s>= 1)
        memset(x8_9 + 0x10, 0, x2_2)
        x8_9 = *arg4
    
    if (zx.d(*(x8_9 + 0xf)) != 1)
        Botan::assertion_failure("get_type() == Type::LTree_Address", 
            "set_ltree_address() requires XMSS_Address::Type::LTree_Address.", "set_ltree_address", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1bb2)
        Botan::assertion_failure(
            "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
            "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
        "Hash_Tree_Address.", 
            "set_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c2a)
    else
        *(x8_9 + 0x10) = x26_1
        *(*arg4 + 0x11) = x27_1
        *(*arg4 + 0x12) = x28_1
        *(*arg4 + 0x13) = (x25.d).b
        __builtin_memset(&var_1e0, 0, 0x30)
        std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
            &var_1f8)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x4
        Botan::XMSS_Common_Ops::create_l_tree(&var_1e0, &var_1f8, arg4, entry_x4, arg1 + 0x10, 
            &var_c0)
        int64_t* x24_1 = var_1f8
        
        if (x24_1 != 0)
            int64_t* x8_13 = var_1f0
            int64_t* x0_8
            
            if (x8_13 == x24_1)
                x0_8 = x24_1
            else
                int64_t* fp_1 = x8_13
                
                do
                    fp_1 = &fp_1[-3]
                    void* x0_7 = *fp_1
                    
                    if (x0_7 != 0)
                        int64_t x9_4 = x8_13[-1]
                        x8_13[-2] = x0_7
                        Botan::deallocate_memory(x0_7, x9_4 - x0_7, 1)
                    
                    x8_13 = fp_1
                while (x24_1 != fp_1)
                
                x0_8 = var_1f8
            
            var_1f0 = x24_1
            operator delete(x0_8)
        
        *(*arg4 + 0xf) = 2
        void* x8_15 = *arg4
        size_t x2_4 = *(arg4 + 8) - (x8_15 + 0x10)
        
        if (x2_4 s>= 1)
            memset(x8_15 + 0x10, 0, x2_4)
            x8_15 = *arg4
        
        if (zx.d(*(x8_15 + 0xf)) - 1 u>= 2)
            Botan::assertion_failure(
                "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
            "Hash_Tree_Address.", 
                "set_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x1c2a)
        else
            *(x8_15 + 0x18) = x26_1
            *(*arg4 + 0x19) = x27_1
            *(*arg4 + 0x1a) = x28_1
            *(*arg4 + 0x1b) = (x25.d).b
            
            if (v1:8.q != 0)
                int64_t x26_2 = 0
                int64_t x27_2 = 0
                
                while (true)
                    void* x8_20 = *arg4
                    
                    if (zx.d(*(x8_20 + 0xf)) - 1 u>= 2)
                        Botan::assertion_failure(
                            "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                            "set_tree_height() requires XMSS_Address::Type::LTree_Address or "
                        "XMSS_Address::Type::Hash_Tree_Address.", "set_tree_height", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1bec)
                    label_ed3ad4:
                        Botan::assertion_failure(
                            "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                            "get_tree_index() requires XMSS_Address::Type::LTree_Address or "
                        "XMSS_Address::Type::Hash_Tree_Address.", "get_tree_index", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c1a)
                        Botan::assertion_failure(
                            "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                            "get_tree_index() requires XMSS_Address::Type::LTree_Address or "
                        "XMSS_Address::Type::Hash_Tree_Address.", "get_tree_index", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c1a)
                        break
                    
                    *(x8_20 + 0x14) = (x27_2 u>> 0x18).b
                    *(*arg4 + 0x15) = (x27_2 u>> 0x10).b
                    *(*arg4 + 0x16) = (x27_2 u>> 8).b
                    *(*arg4 + 0x17) = (x27_2.d).b
                    void* x8_24 = *arg4
                    uint32_t x9_15 = zx.d(*(x8_24 + 0xf) - 1)
                    
                    if ((((x25 & 0xffffffff) u>> x27_2).d & 1) == 0)
                        if (x9_15 u>= 2)
                            Botan::assertion_failure(
                                "get_type() == Type::LTree_Address || get_type() == Type::"
                            "Hash_Tree_Address", 
                                "get_tree_index() requires XMSS_Address::Type::LTree_Address or "
                            "XMSS_Address::Type::Hash_Tree_Address.", "get_tree_index", 
                                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                0x1c1a)
                            break
                            break
                        
                        uint32_t x10_5 = zx.d(*(x8_24 + 0x18))
                        uint32_t x9_21 = zx.d(*(x8_24 + 0x19)) << 0x10
                        *(x8_24 + 0x18) = (x10_5 u>> 1).b
                        uint32_t x11_2 = zx.d(*(x8_24 + 0x1b))
                        char x8_29 = *(x8_24 + 0x1a)
                        *(*arg4 + 0x19) = (((0xffffff & x9_21) | (0xff & x10_5) << 0x18) u>> 0x11).b
                        *(*arg4 + 0x1a) = (((0xffff00ff & x9_21) | zx.d(x8_29) << 8) u>> 9).b
                        *(*arg4 + 0x1b) = (((0xffff00ff & x11_2) | zx.d(x8_29) << 8) u>> 1).b
                        Botan::XMSS_Common_Ops::randomize_tree_hash(&var_1d0:8, &var_1e0, 
                            *(arg2 + 0x38) + x26_2, arg4, entry_x4, arg1 + 0x10, &var_c0)
                    else
                        if (x9_15 u>= 2)
                            goto label_ed3ad4
                        
                        int32_t x9_18 = _byteswap(*(x8_24 + 0x18)) - 1
                        *(x8_24 + 0x18) = (x9_18 u>> 0x19).b
                        *(*arg4 + 0x19) = (x9_18 u>> 0x11).b
                        *(*arg4 + 0x1a) = (x9_18 u>> 9).b
                        *(*arg4 + 0x1b) = (x9_18 u>> 1).b
                        Botan::XMSS_Common_Ops::randomize_tree_hash(&var_1d0:8, 
                            *(arg2 + 0x38) + x26_2, &var_1e0, arg4, entry_x4, arg1 + 0x10, &var_c0)
                    
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                        &var_1e0, var_1d0:8.q)
                    x27_2 += 1
                    x26_2 += 0x18
                    
                    if (x27_2 u>= v1:8.q)
                        goto label_ed39a0
                
                goto label_ed3b24
            
        label_ed39a0:
            void* x20_1 = var_1e0.q
            int64_t x8_33 = var_1e0:8.q
            int64_t* entry_x8
            __builtin_memset(entry_x8, 0, 0x18)
            uint64_t x22_1 = x8_33 - x20_1
            
            if (x8_33 == x20_1)
            label_ed39fc:
                void* x0_16 = var_1d0:8.q
                
                if (x0_16 != 0)
                    int64_t x8_35 = var_1c0:8.q
                    var_1c0.q = x0_16
                    Botan::deallocate_memory(x0_16, x8_35 - x0_16, 1)
                    x20_1 = var_1e0.q
                
                if (x20_1 != 0)
                    var_1e0:8.q = x20_1
                    Botan::deallocate_memory(x20_1, var_1d0.q - x20_1, 1)
                
                int64_t result = Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
                
                if ((zx.d(var_a0) & 1) != 0)
                    result = operator delete(var_90)
                
                if ((zx.d(var_b8) & 1) == 0)
                    return result
                
                return operator delete(var_a8)
            
            if ((x22_1 & 0xffffffff80000000) == 0)
                int64_t x0_14 = Botan::allocate_memory(x22_1, 1)
                x20_1 = var_1e0.q
                int64_t x8_34 = var_1e0:8.q
                int64_t x21_1 = x0_14
                *entry_x8 = x0_14
                entry_x8[1] = x0_14
                size_t x22_2 = x8_34 - x20_1
                entry_x8[2] = x0_14 + x22_1
                
                if (x22_2 s>= 1)
                    memcpy(x21_1, x20_1, x22_2)
                    x21_1 += x22_2
                
                entry_x8[1] = x21_1
                goto label_ed39fc

int64_t* x0_21 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x19_1 = var_1f8

if (x19_1 != 0)
    int64_t* x8_39 = var_1f0
    int64_t* x0_22 = x19_1
    
    if (x8_39 != x19_1)
        int64_t* x21_2 = x8_39
        
        do
            x21_2 = &x21_2[-3]
            void* x0_23 = *x21_2
            
            if (x0_23 != 0)
                int64_t x9_27 = x8_39[-1]
                x8_39[-2] = x0_23
                Botan::deallocate_memory(x0_23, x9_27 - x0_23, 1)
            
            x8_39 = x21_2
        while (x19_1 != x21_2)
        
        x0_22 = var_1f8
    
    int64_t* var_1f0_1 = x19_1
    operator delete(x0_22)

void* x0_24 = var_1d0:8.q

if (x0_24 != 0)
    int64_t x8_40 = var_1c0:8.q
    var_1c0.q = x0_24
    Botan::deallocate_memory(x0_24, x8_40 - x0_24, 1)

void* x0_25 = var_1e0.q

if (x0_25 != 0)
    var_1e0:8.q = x0_25
    Botan::deallocate_memory(x0_25, var_1d0.q - x0_25, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()

if ((zx.d(var_a0) & 1) != 0)
    operator delete(var_90)

if ((zx.d(var_b8) & 1) != 0)
    operator delete(var_a8)

sub_1101e04(x0_21)
noreturn
