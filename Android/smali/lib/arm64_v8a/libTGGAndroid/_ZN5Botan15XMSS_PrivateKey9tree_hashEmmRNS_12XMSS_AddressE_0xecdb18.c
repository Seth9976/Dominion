// 函数: _ZN5Botan15XMSS_PrivateKey9tree_hashEmmRNS_12XMSS_AddressE
// 地址: 0xecdb18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_fp
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* var_60 = entry_fp
char const* const x0_31
char* x1_13
int32_t x4_3

if (arg3 u>= 0x1f)
label_ece3c8:
    Botan::assertion_failure("target_node_height <= 30", &data_793a18, "tree_hash", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x188b0)
label_ece3dc:
    x4_3 = 0x188b2
    x0_31 = "(start_idx % (static_cast<size_t>(1) << target_node_height)) == 0"
    x1_13 = "Start index must be divisible by 2^{target node height}."
label_ece418:
    Botan::assertion_failure(x0_31, x1_13, "tree_hash", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", x4_3)
label_ece440:
    Botan::assertion_failure(
        "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
        "set_tree_height() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
    "Hash_Tree_Address.", 
        "set_tree_height", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1bec)
    Botan::assertion_failure(
        "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
        "get_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
    "Hash_Tree_Address.", 
        "get_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c1a)
    Botan::assertion_failure(
        "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
        "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
    "Hash_Tree_Address.", 
        "set_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c2a)
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x8
    entry_fp = entry_x8
    uint64_t x26_1 = arg2
    
    if ((arg2 & not.q(-1 << arg3)) != 0)
        goto label_ece3dc
    
    Botan::Thread_Pool::global_instance()
    int64_t x8_3 = (data_23ed048 - data_23ed040) s>> 3
    int64_t x28_1
    
    x28_1 = x8_3 u< arg3 ? x8_3 : arg3
    
    if (x28_1 == 0)
        __builtin_memset(entry_fp, 0, 0x18)
        Botan::XMSS_Hash* entry_x3
        return Botan::XMSS_PrivateKey::tree_hash_subtree(arg1, entry_fp, x26_1, arg3, entry_x3)
    
    int64_t i_2 = 1 << x28_1
    int64_t x20_1 = 1 << arg3
    
    if (((i_2 - 1) & x20_1) != 0)
        x4_3 = 0x188cb
        x0_31 = "(last_idx - start_idx) % subtrees == 0"
        x1_13 = "Number of worker threads in tree_hash need to divide range of calculated nodes."
        goto label_ece418
    
    uint64_t x24_1 = *(arg1 + 0x1d8)
    void* var_90
    __builtin_memset(&var_90, 0, 0x18)
    
    if (x24_1 == 0)
        goto label_ecdbec
    
    if ((x24_1 & 0xffffffff80000000) == 0)
        void* x0_1 = Botan::allocate_memory(x24_1, 1)
        void* x21_1 = x0_1 + x24_1
        var_90 = x0_1
        void* var_80_1 = x21_1
        memset(x0_1, 0, x24_1)
        void* var_88_1 = x21_1
    label_ecdbec:
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* var_78
        std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
            &var_78, i_2)
        void* x0_3 = var_90
        
        if (x0_3 != 0)
            var_88_1 = x0_3
            Botan::deallocate_memory(x0_3, var_80_1 - x0_3, 1)
        
        std::__ndk1::vector<Botan::XMSS_Address, std::__ndk1::allocator<Botan::XMSS_Address> >::vector(
            &var_90, i_2)
        void* x0_6 = operator new(0x48 << x28_1)
        int64_t x21_2 = 0
        int64_t x20_2 = i_2 * 0x48
        void* x8_9 = x0_6 + x20_2
        
        do
            Botan::XMSS_Hash::XMSS_Hash(x0_6 + x21_2)
            x21_2 += 0x48
        while (x20_2 != x21_2)
        
        void* var_a8
        __builtin_memset(&var_a8, 0, 0x18)
        int32_t var_130_1 = arg3.d
        void* x25_1 = x0_6
        int64_t x20_3 = 0
        int64_t i_1
        
        i_1 = i_2 u> 1 ? i_2 : 1
        
        int64_t (* const var_f8)(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, 
            uint64_t, uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&)
        int64_t (* var_f0_1)(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, 
            uint64_t, uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&)
        uint64_t var_b8
        int64_t var_b0
        void* var_a0_1
        int64_t var_98
        int64_t i
        
        do
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x8_13 = var_78
            void* x9_4 = var_90
            var_f8 = Botan::XMSS_PrivateKey::tree_hash_subtree
            var_f0_1 = nullptr
            void* var_d0_1 = arg3 - x28_1
            uint64_t var_c8_1 = x26_1
            void* var_c0_1 = x8_13 + x20_3
            var_b8 = arg1
            void* var_e0_1 = x25_1
            void* var_d8_1 = x9_4 + x20_3
            Botan::Thread_Pool::run<void(Botan::XMSS_PrivateKey::*)(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, uint64_t, uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&)&, Botan::XMSS_PrivateKey*, std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >, uint64_t, uint64_t, std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > ><Botan::XMSS_Address>, std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > ><Botan::XMSS_Hash> >(
                &data_23ed040, &var_f8)
            int64_t* x8_15 = var_a0_1
            
            if (x8_15 u< var_98)
                *x8_15 = var_b0
                var_b0 = 0
                var_a0_1 = &x8_15[1]
            else
                std::__ndk1::vector<std::__ndk1::future<void>, std::__ndk1::allocator<std::__ndk1::future<void> > >::__push_back_slow_path<std::__ndk1::future<void> >(
                    &var_a8)
            
            std::__ndk1::future<void>::~future()
            i = i_1
            i_1 -= 1
            x26_1 += x20_1 u>> x28_1
            x20_3 += 0x18
            x25_1 += 0x48
        while (i != 1)
        void* x26_2 = var_a8
        void* var_a0_2
        int32_t x22_2
        void* x19_4
        
        if (x26_2 == var_a0_1)
            x19_4 = x0_6
            x22_2 = var_130_1
            var_a0_2 = x26_2
            
            if ((x28_1.d & 0xff) u> 1)
            label_ecde00:
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* var_150_1 =
                    entry_fp
                entry_fp = arg1 + 0x288
                int64_t x10_4 = x28_1 & 0xff
                
                while (true)
                    std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector<std::__ndk1::__wrap_iter<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*> >(
                        &var_f8, var_78)
                    void* x25_2 = x0_6
                    int64_t x27_3 = 0
                    int64_t x28_2 = 0
                    int32_t x22_3 = x22_2 - (zx.d(x10_4.b - 1) + 1)
                    int64_t x21_5 = 0x18
                    
                    while (true)
                        if (((x8_9 - x19_4) s>> 3) * -0x71c71c71c71c71c7 != x28_2)
                            void* x9_8 = var_90
                            void* x8_27 = x9_8 + x27_3
                            void* x10_6 = *x8_27
                            
                            if (zx.d(*(x10_6 + 0xf)) - 1 u>= 2)
                                Botan::assertion_failure(
                                    "get_type() == Type::LTree_Address || get_type() == Type::"
                                "Hash_Tree_Address", 
                                    "set_tree_height() requires XMSS_Address::Type::LTree_Address or "
                                "XMSS_Address::Type::Hash_Tree_Address.", "set_tree_height", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x1bec)
                                Botan::assertion_failure(
                                    "get_type() == Type::LTree_Address || get_type() == Type::"
                                "Hash_Tree_Address", 
                                    "set_tree_index() requires XMSS_Address::Type::LTree_Address or "
                                "XMSS_Address::Type::Hash_Tree_Address.", "set_tree_index", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x1c2a)
                            else
                                *(x10_6 + 0x14) = (x22_3 u>> 0x18).b
                                *(*x8_27 + 0x15) = (x22_3 u>> 0x10).b
                                *(*x8_27 + 0x16) = (x22_3 u>> 8).b
                                *(*x8_27 + 0x17) = x22_3.b
                                void* x9_9 = *(x9_8 + x21_5)
                                
                                if (zx.d(*(x9_9 + 0xf)) - 1 u< 2)
                                    void* x10_12 = *x8_27
                                    
                                    if (zx.d(*(x10_12 + 0xf)) - 1 u< 2)
                                        int32_t x9_12 = _byteswap(*(x9_9 + 0x18)) - 1
                                        *(x10_12 + 0x18) = (x9_12 u>> 0x19).b
                                        *(*x8_27 + 0x19) = (x9_12 u>> 0x11).b
                                        *(*x8_27 + 0x1a) = (x9_12 u>> 9).b
                                        *(*x8_27 + 0x1b) = (x9_12 u>> 1).b
                                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >
                                            * var_e0_2 = entry_fp
                                        void* var_d8_2 = x8_27
                                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >
                                            * x8_28 = var_78
                                        int64_t (* const x9_14)(
                                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >
                                                &, 
                                            uint64_t, uint64_t, Botan::XMSS_Address&, 
                                            Botan::XMSS_Hash&) = var_f8
                                        Botan::XMSS_Parameters* var_108 = arg1 + 0x1a0
                                        void* var_100_1 = x25_2
                                        void* x9_15 = x9_14 + x21_5
                                        void* var_c0_2 = x8_28 + x27_3
                                        var_b8 = Botan::XMSS_Common_Ops::randomize_tree_hash
                                        void* var_d0_2 = x9_15
                                        void* var_c8_2 = x9_15 - 0x18
                                        Botan::XMSS_Parameters** var_160_1 = &var_108
                                        Botan::Thread_Pool::run<void (*)(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const&, Botan::XMSS_Address&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const&, Botan::XMSS_Hash&, Botan::XMSS_Parameters const&), std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >, std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const>, std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const>, std::__ndk1::reference_wrapper<Botan::XMSS_Address>, std::__ndk1::reference_wrapper<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const>, std::__ndk1::reference_wrapper<Botan::XMSS_Hash>, std::__ndk1::reference_wrapper<Botan::XMSS_Parameters const> >(
                                            &data_23ed040, &var_b8)
                                        
                                        if (var_a0_2 u< var_98)
                                            *var_a0_2 = var_b0
                                            var_b0 = 0
                                            var_a0_2 += 8
                                        else
                                            std::__ndk1::vector<std::__ndk1::future<void>, std::__ndk1::allocator<std::__ndk1::future<void> > >::__push_back_slow_path<std::__ndk1::future<void> >(
                                                &var_a8)
                                        
                                        std::__ndk1::future<void>::~future()
                                        x28_2 += 1
                                        x21_5 += 0x30
                                        x27_3 += 0x18
                                        x25_2 += 0x48
                                        
                                        if (x28_2 u>> zx.q(x10_4.b - 1) != 0)
                                            break
                                        
                                        continue
                                    
                                    Botan::assertion_failure(
                                        "get_type() == Type::LTree_Address || get_type() == Type::"
                                    "Hash_Tree_Address", 
                                        "set_tree_index() requires XMSS_Address::Type::LTree_Address or "
                                    "XMSS_Address::Type::Hash_Tree_Address.", "set_tree_index", 
                                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                        0x1c2a)
                            
                            Botan::assertion_failure(
                                "get_type() == Type::LTree_Address || get_type() == Type::"
                            "Hash_Tree_Address", 
                                "get_tree_index() requires XMSS_Address::Type::LTree_Address or "
                            "XMSS_Address::Type::Hash_Tree_Address.", "get_tree_index", 
                                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                0x1c1a)
                        
                        Botan::assertion_failure("xmss_hash.size() > i", &data_793a18, "tree_hash", 
                            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x188f8)
                        goto label_ece3c8
                    
                    void* x27_4 = var_a8
                    x22_2 = var_130_1
                    
                    if (x27_4 != var_a0_2)
                        do
                            std::__ndk1::future<void>::get()
                            x27_4 += 8
                        while (var_a0_2 != x27_4)
                        
                        x27_4 = var_a8
                        void* x28_3 = var_a0_2
                        
                        if (x28_3 != x27_4)
                            do
                                x28_3 -= 8
                                std::__ndk1::future<void>::~future()
                            while (x27_4 != x28_3)
                    
                    int64_t (* x19_8)(
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, uint64_t, 
                        uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&) = var_f8
                    var_a0_2 = x27_4
                    
                    if (x19_8 != 0)
                        int64_t (* x8_32)(
                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, 
                            uint64_t, uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&) = var_f0_1
                        int64_t (* const x0_12)(
                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, 
                            uint64_t, uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&)
                        
                        if (x8_32 == x19_8)
                            x0_12 = x19_8
                        else
                            int64_t (* x21_6)(
                                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&, 
                                uint64_t, uint64_t, Botan::XMSS_Address&, Botan::XMSS_Hash&) = x8_32
                            
                            do
                                x21_6 -= 0x18
                                void* x0_17 = *x21_6
                                
                                if (x0_17 != 0)
                                    int64_t x9_17 = *(x8_32 - 8)
                                    *(x8_32 - 0x10) = x0_17
                                    Botan::deallocate_memory(x0_17, x9_17 - x0_17, 1)
                                
                                x8_32 = x21_6
                            while (x19_8 != x21_6)
                            
                            x0_12 = var_f8
                        
                        var_f0_1 = x19_8
                        operator delete(x0_12)
                    
                    bool cond:9_1 = zx.d(x10_4.b - 1) u<= 1
                    x10_4 -= 1
                    
                    if (cond:9_1)
                        break
                
                entry_fp = var_150_1
        else
            do
                std::__ndk1::future<void>::get()
                x26_2 += 8
            while (var_a0_1 != x26_2)
            
            void* x26_3 = var_a8
            void* x27_2 = var_a0_1
            x19_4 = x0_6
            x22_2 = var_130_1
            
            if (x27_2 != x26_3)
                do
                    x27_2 -= 8
                    std::__ndk1::future<void>::~future()
                while (x26_3 != x27_2)
            
            var_a0_2 = x26_3
            
            if ((x28_1.d & 0xff) u> 1)
                goto label_ecde00
        void* x3_1 = var_90
        void* x8_33 = *x3_1
        
        if (zx.d(*(x8_33 + 0xf)) - 1 u>= 2)
            goto label_ece440
        
        *(x8_33 + 0x14) = ((x22_2 - 1) u>> 0x18).b
        *(*x3_1 + 0x15) = ((x22_2 - 1) u>> 0x10).b
        *(*x3_1 + 0x16) = ((x22_2 - 1) u>> 8).b
        *(*x3_1 + 0x17) = (x22_2 - 1).b
        void* x8_37 = *(x3_1 + 0x18)
        
        if (zx.d(*(x8_37 + 0xf)) - 1 u>= 2)
            Botan::assertion_failure(
                "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                "get_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
            "Hash_Tree_Address.", 
                "get_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x1c1a)
            Botan::assertion_failure(
                "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
            "Hash_Tree_Address.", 
                "set_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x1c2a)
        else
            void* x9_23 = *x3_1
            
            if (zx.d(*(x9_23 + 0xf)) - 1 u< 2)
                int32_t x8_40 = _byteswap(*(x8_37 + 0x18)) - 1
                *(x9_23 + 0x18) = (x8_40 u>> 0x19).b
                *(*x3_1 + 0x19) = (x8_40 u>> 0x11).b
                *(*x3_1 + 0x1a) = (x8_40 u>> 9).b
                *(*x3_1 + 0x1b) = (x8_40 u>> 1).b
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_18 = var_78
                Botan::XMSS_Common_Ops::randomize_tree_hash(x0_18, x0_18, x0_18 + 0x18, x3_1, 
                    arg1 + 0x288, arg1 + 0x118, arg1 + 0x1a0)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(entry_fp)
                void* x19_9 = var_a8
                
                if (x19_9 != 0)
                    void* x21_7 = var_a0_2
                    void* x0_21
                    
                    if (x21_7 == x19_9)
                        x0_21 = x19_9
                    else
                        do
                            x21_7 -= 8
                            std::__ndk1::future<void>::~future()
                        while (x19_9 != x21_7)
                        
                        x0_21 = var_a8
                    
                    void* var_a0_3 = x19_9
                    operator delete(x0_21)
                
                if (x8_9 != x0_6)
                    void* x21_8 = x0_6
                    int64_t x19_10 = 0
                    int64_t x20_4 = i_2 * 0x48
                    
                    do
                        void* x22_4 = x21_8 + x20_4
                        
                        if ((zx.d(*(x22_4 - 0x18)) & 1) != 0)
                            operator delete(*(x22_4 - 8))
                        
                        void* x0_23 = *(x22_4 - 0x38)
                        
                        if (x0_23 != 0)
                            *(x21_8 + x20_4 - 0x30) = x0_23
                            operator delete(x0_23)
                        
                        void* x22_5 = x21_8 + x20_4
                        int64_t* x0_24 = *(x22_5 - 0x40)
                        *(x22_5 - 0x40) = 0
                        
                        if (x0_24 != 0)
                            (*(*x0_24 + 0x10))()
                        
                        int64_t* x0_25 = *(x22_5 - 0x48)
                        *(x22_5 - 0x48) = 0
                        
                        if (x0_25 != 0)
                            (*(*x0_25 + 0x10))()
                        
                        x19_10 += 0x48
                        x21_8 -= 0x48
                    while (x20_4 != x19_10)
                
                int64_t result = operator delete(x0_6)
                void* x19_11 = var_90
                
                if (x19_11 != 0)
                    void* x8_52 = var_88_1
                    void* x0_28
                    
                    if (x8_52 == x19_11)
                        x0_28 = x19_11
                    else
                        void* x20_5 = x8_52
                        
                        do
                            x20_5 -= 0x18
                            void* x0_27 = *x20_5
                            
                            if (x0_27 != 0)
                                int64_t x9_28 = *(x8_52 - 8)
                                *(x8_52 - 0x10) = x0_27
                                Botan::deallocate_memory(x0_27, x9_28 - x0_27, 1)
                            
                            x8_52 = x20_5
                        while (x19_11 != x20_5)
                        
                        x0_28 = var_90
                    
                    void* var_88_2 = x19_11
                    result = operator delete(x0_28)
                
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x19_12 = var_78
                
                if (x19_12 == 0)
                    return result
                
                int64_t* var_70
                int64_t* x8_53 = var_70
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_30
                
                if (x8_53 == x19_12)
                    x0_30 = x19_12
                else
                    int64_t* x20_6 = x8_53
                    
                    do
                        x20_6 = &x20_6[-3]
                        void* x0_29 = *x20_6
                        
                        if (x0_29 != 0)
                            int64_t x9_29 = x8_53[-1]
                            x8_53[-2] = x0_29
                            Botan::deallocate_memory(x0_29, x9_29 - x0_29, 1)
                        
                        x8_53 = x20_6
                    while (x19_12 != x20_6)
                    
                    x0_30 = var_78
                
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* var_70_1 = x19_12
                return operator delete(x0_30)
            
            Botan::assertion_failure(
                "get_type() == Type::LTree_Address || get_type() == Type::Hash_Tree_Address", 
                "set_tree_index() requires XMSS_Address::Type::LTree_Address or XMSS_Address::Type::"
            "Hash_Tree_Address.", 
                "set_tree_index", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x1c2a)
int64_t* x0_32 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_54 = *entry_fp

if (x8_54 != 0)
    int64_t x9_31 = *(entry_fp + 0x10)
    *(entry_fp + 8) = x8_54
    Botan::deallocate_memory(x8_54, x9_31 - x8_54, 1)

sub_1101e04(x0_32)
noreturn
