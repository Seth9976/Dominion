// 函数: _ZN5Botan15XMSS_PrivateKey17tree_hash_subtreeERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmmRNS_12XMSS_AddressERNS_9XMSS_HashE
// 地址: 0xecf350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = *(arg1 + 0x1d8)
uint64_t x22 = arg3
void* var_180
__builtin_memset(&var_180, 0, 0x18)

if (x23 == 0)
    goto label_ecf3d0

char* result_1
void* var_78
int64_t* var_70

if ((x23 & 0xffffffff80000000) != 0)
label_ecfa08:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x0_1 = Botan::allocate_memory(x23, 1)
    void* x19_1 = x0_1 + x23
    var_180 = x0_1
    void* var_170_1 = x19_1
    memset(x0_1, 0, x23)
    void* var_178_1 = x19_1
label_ecf3d0:
    std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
        &var_78, arg4 + 1)
    void* x0_3 = var_180
    
    if (x0_3 != 0)
        void* var_178_2 = x0_3
        Botan::deallocate_memory(x0_3, var_170_1 - x0_3, 1)
    
    __builtin_memset(&result_1, 0, 0x18)
    
    if (arg4 == -1)
        goto label_ecf424
    
    if (((arg4 + 1) & 0xffffffff80000000) == 0)
        char* result_3 = operator new(arg4 + 1)
        void* x19_2 = result_3 + arg4 + 1
        result_1 = result_3
        void* var_80_1 = x19_2
        memset(result_3, 0, arg4 + 1)
        void* var_88_1 = x19_2
    label_ecf424:
        int32_t x26_1 = *(arg1 + 0x30)
        void* var_198
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_198)
        Botan::XMSS_WOTS_PublicKey::XMSS_WOTS_PublicKey(&var_180, zx.q(x26_1))
        void* x0_7 = var_198
        
        if (x0_7 != 0)
            void* var_190_1 = x0_7
            int64_t var_188
            Botan::deallocate_memory(x0_7, var_188 - x0_7, 1)
        
        int64_t x8_4 = (1 << arg4) + x22
        int64_t x8_34
        
        if (x8_4 u<= x22)
            x8_34 = -1
        else
            int32_t fp_1 = 0
            void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x8) 
                x26_2 = arg1 + 8
            void var_c0
            void* var_1e0_1 = &var_c0
            void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x8) 
                var_1f0_1 = x26_2
            
            while (true)
                *(*arg5 + 0xf) = 0
                void* x8_7 = *arg5
                size_t x2_2 = *(arg5 + 8) - (x8_7 + 0x10)
                
                if (x2_2 s>= 1)
                    memset(x8_7 + 0x10, 0, x2_2)
                    x8_7 = *arg5
                
                if (zx.d(*(x8_7 + 0xf)) != 0)
                    Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
                        "set_ots_address() requires XMSS_Address::Type::OTS_Hash_Address.", 
                        "set_ots_address", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1b94)
                    Botan::assertion_failure(
                        "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                        "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::"
                    "Type::Hash_Tree_Address.", "set_tree_index", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c2a)
                else
                    uint64_t x27_1 = x22 u>> 0x18
                    *(x8_7 + 0x10) = (x27_1.d).b
                    uint8_t x28_1 = (x22 u>> 0x10).b
                    uint8_t x9_4 = (x22 u>> 8).b
                    *(*arg5 + 0x11) = x28_1
                    *(*arg5 + 0x12) = x9_4
                    *(*arg5 + 0x13) = (x22.d).b
                    Botan::XMSS_WOTS_PrivateKey::at(x26_2, arg5)
                    int64_t* var_1b0
                    Botan::XMSS_WOTS_PrivateKey::generate_public_key(x26_2, &var_180, &var_1b0, 
                        arg5)
                    int64_t* x25_1 = var_1b0
                    
                    if (x25_1 != 0)
                        int64_t* var_1a8
                        int64_t* x8_11 = var_1a8
                        int64_t* x0_12
                        
                        if (x8_11 == x25_1)
                            x0_12 = x25_1
                        else
                            int64_t* x27_2 = x8_11
                            
                            do
                                x27_2 = &x27_2[-3]
                                void* x0_11 = *x27_2
                                
                                if (x0_11 != 0)
                                    int64_t x9_5 = x8_11[-1]
                                    x8_11[-2] = x0_11
                                    Botan::deallocate_memory(x0_11, x9_5 - x0_11, 1)
                                
                                x8_11 = x27_2
                            while (x25_1 != x27_2)
                            
                            x0_12 = var_1b0
                        
                        var_1a8 = x25_1
                        operator delete(x0_12)
                    
                    *(*arg5 + 0xf) = 1
                    void* x8_13 = *arg5
                    size_t x2_5 = *(arg5 + 8) - (x8_13 + 0x10)
                    
                    if (x2_5 s>= 1)
                        memset(x8_13 + 0x10, 0, x2_5)
                        x8_13 = *arg5
                    
                    if (zx.d(*(x8_13 + 0xf)) != 1)
                    label_ecf988:
                        Botan::assertion_failure("get_type() == Type::LTree_Address", 
                            "set_ltree_address() requires XMSS_Address::Type::LTree_Address.", 
                            "set_ltree_address", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1bb2)
                        Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
                            "set_ots_address() requires XMSS_Address::Type::OTS_Hash_Address.", 
                            "set_ots_address", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1b94)
                        Botan::assertion_failure(
                            "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                            "set_tree_index() requires XMSS_Address::Type::LTree_Address or "
                        "XMSS_Address::Type::Hash_Tree_Address.", "set_tree_index", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c2a)
                    else
                        *(x8_13 + 0x10) = (x27_1.d).b
                        *(*arg5 + 0x11) = x28_1
                        *(*arg5 + 0x12) = x9_4
                        *(*arg5 + 0x13) = (x22.d).b
                        void* x26_4 = var_78
                        int64_t* var_1c8
                        std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
                            &var_1c8)
                        uint64_t x25_2 = zx.q(fp_1.b)
                        Botan::XMSS_Hash* entry_x5
                        Botan::XMSS_Common_Ops::create_l_tree(x26_4 + x25_2 * 0x18, &var_1c8, arg5, 
                            arg1 + 0x288, entry_x5, arg1 + 0x1a0)
                        int64_t* x27_3 = var_1c8
                        
                        if (x27_3 != 0)
                            int64_t* var_1c0
                            int64_t* x8_18 = var_1c0
                            int64_t* x0_17
                            
                            if (x8_18 == x27_3)
                                x0_17 = x27_3
                            else
                                int64_t* x26_5 = x8_18
                                
                                do
                                    x26_5 = &x26_5[-3]
                                    void* x0_16 = *x26_5
                                    
                                    if (x0_16 != 0)
                                        int64_t x9_9 = x8_18[-1]
                                        x8_18[-2] = x0_16
                                        Botan::deallocate_memory(x0_16, x9_9 - x0_16, 1)
                                    
                                    x8_18 = x26_5
                                while (x27_3 != x26_5)
                                
                                x0_17 = var_1c8
                            
                            var_1c0 = x27_3
                            operator delete(x0_17)
                        
                        x26_2 = var_1f0_1
                        result_1[x25_2] = 0
                        *(*arg5 + 0xf) = 2
                        void* x8_21 = *arg5
                        size_t x2_7 = *(arg5 + 8) - (x8_21 + 0x10)
                        
                        if (x2_7 s>= 1)
                            memset(x8_21 + 0x10, 0, x2_7)
                            x8_21 = *arg5
                        
                        if (zx.d(*(x8_21 + 0xf)) - 1 u< 2)
                            *(x8_21 + 0x14) = 0
                            *(*arg5 + 0x15) = 0
                            *(*arg5 + 0x16) = 0
                            *(*arg5 + 0x17) = 0
                            void* x8_25 = *arg5
                            
                            if (zx.d(*(x8_25 + 0xf)) - 1 u< 2)
                                *(x8_25 + 0x18) = x27_1.b
                                *(*arg5 + 0x19) = x28_1
                                *(*arg5 + 0x1a) = x9_4
                                *(*arg5 + 0x1b) = (x22.d).b
                                
                                if ((fp_1 & 0xff) == 0)
                                label_ecf49c:
                                    fp_1 = 0
                                else
                                    while (true)
                                        char* result_6 = result_1
                                        uint64_t x8_29 = zx.q(fp_1.b)
                                        uint64_t x25_3 = zx.q((fp_1 & 0xff) - 1)
                                        
                                        if (zx.d(result_6[x8_29]) != zx.d(result_6[x25_3]))
                                            break
                                        
                                        void* x9_17 = *arg5
                                        
                                        if (zx.d(*(x9_17 + 0xf)) - 1 u< 2)
                                            int32_t x10_7 = _byteswap(*(x9_17 + 0x18)) - 1
                                            *(x9_17 + 0x18) = (x10_7 u>> 0x19).b
                                            *(*arg5 + 0x19) = (x10_7 u>> 0x11).b
                                            *(*arg5 + 0x1a) = (x10_7 u>> 9).b
                                            *(*arg5 + 0x1b) = (x10_7 u>> 1).b
                                            void* x9_21 = var_78
                                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >
                                                * x0_19 = x9_21 + x25_3 * 0x18
                                            Botan::XMSS_Common_Ops::randomize_tree_hash(x0_19, 
                                                x0_19, x9_21 + x8_29 * 0x18, arg5, arg1 + 0x288, 
                                                entry_x5, arg1 + 0x1a0)
                                            char* result_5 = result_1
                                            result_5[x25_3] += 1
                                            void* x8_30 = *arg5
                                            
                                            if (zx.d(*(x8_30 + 0xf)) - 1 u>= 2)
                                                Botan::assertion_failure(
                                                    "get_type() == Type::LTree_Address || get_type() == "
                                                "Type::Hash_Tree_Address", 
                                                    "get_tree_height() requires XMSS_Address::Type::"
                                                "LTree_Address or XMSS_Address::Type::"
                                                "Hash_Tree_Address.", "get_tree_height", 
                                                    "..\..\ExternalCode\botan\botanAM\arm\b"
                                                "otan_all_android.cpp", 
                                                    0x1bdc)
                                            else
                                                fp_1 -= 1
                                                int32_t x9_28 = _byteswap(*(x8_30 + 0x14)) + 1
                                                *(x8_30 + 0x14) = (x9_28 u>> 0x18).b
                                                *(*arg5 + 0x15) = (x9_28 u>> 0x10).b
                                                *(*arg5 + 0x16) = (x9_28 u>> 8).b
                                                *(*arg5 + 0x17) = x9_28.b
                                                
                                                if ((fp_1 & 0xff) == 0)
                                                    goto label_ecf49c
                                                
                                                continue
                                        
                                        Botan::assertion_failure(
                                            "get_type() == Type::LTree_Address || get_type() == Type::"
                                        "Hash_Tree_Address", 
                                            "get_tree_index() requires XMSS_Address::Type::LTree_Address "
                                        "or XMSS_Address::Type::Hash_Tree_Address.", 
                                            "get_tree_index", 
                                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                            0x1c1a)
                                        goto label_ecf988
                                
                                x22 += 1
                                fp_1 += 1
                                
                                if (x22 != x8_4)
                                    continue
                                
                                x8_34 = zx.q(fp_1.b) - 1
                                break
                            
                            Botan::assertion_failure(
                                "get_type() == Type::LTree_Address || get_type() == Type::"
                            "Hash_Tree_Address", 
                                "set_tree_index() requires XMSS_Address::Type::LTree_Address or "
                            "XMSS_Address::Type::Hash_Tree_Address.", "set_tree_index", 
                                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                0x1c2a)
                
                Botan::assertion_failure(
                    "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                    "set_tree_height() requires XMSS_Address::Type::LTree_Address or XMSS_Address::"
                "Type::Hash_Tree_Address.", 
                    "set_tree_height", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1bec)
                goto label_ecfa08
        
        void* x9_29 = var_78
        uint8_t** x10_12 = x9_29 + x8_34 * 0x18
        
        if (x10_12 != arg2)
            *(x9_29 + x8_34 * 0x18 + 8)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(arg2, 
                *x10_12)
        
        Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
        char* result = result_1
        
        if (result != 0)
            char* result_2 = result
            result = operator delete(result)
        
        void* x19_4 = var_78
        
        if (x19_4 == 0)
            return result
        
        int64_t* x8_37 = var_70
        void* x0_22
        
        if (x8_37 == x19_4)
            x0_22 = x19_4
        else
            int64_t* x20_1 = x8_37
            
            do
                x20_1 = &x20_1[-3]
                void* x0_21 = *x20_1
                
                if (x0_21 != 0)
                    int64_t x9_30 = x8_37[-1]
                    x8_37[-2] = x0_21
                    Botan::deallocate_memory(x0_21, x9_30 - x0_21, 1)
                
                x8_37 = x20_1
            while (x19_4 != x20_1)
            
            x0_22 = var_78
        
        void* var_70_1 = x19_4
        return operator delete(x0_22)

int64_t* x0_23 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
char* result_4 = result_1

if (result_4 != 0)
    char* result_7 = result_4
    operator delete(result_4)

void* x20_2 = var_78

if (x20_2 != 0)
    int64_t* x8_38 = var_70
    void* x0_24 = x20_2
    
    if (x8_38 != x20_2)
        int64_t* x21_1 = x8_38
        
        do
            x21_1 = &x21_1[-3]
            void* x0_25 = *x21_1
            
            if (x0_25 != 0)
                int64_t x9_31 = x8_38[-1]
                x8_38[-2] = x0_25
                Botan::deallocate_memory(x0_25, x9_31 - x0_25, 1)
            
            x8_38 = x21_1
        while (x20_2 != x21_1)
        
        x0_24 = var_78
    
    void* var_70_2 = x20_2
    operator delete(x0_24)

sub_1101e04(x0_23)
noreturn
