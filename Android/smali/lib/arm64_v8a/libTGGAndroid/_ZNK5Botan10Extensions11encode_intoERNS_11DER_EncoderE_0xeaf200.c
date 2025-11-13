// 函数: _ZNK5Botan10Extensions11encode_intoERNS_11DER_EncoderE
// 地址: 0xeaf200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 0x20)

while (i != arg1 + 0x28)
    void* __offset(vtable_for_Botan::OID, 0x10) var_90
    std::__ndk1::pair<Botan::OID const, Botan::Extensions::Extensions_Info>::pair(&var_90)
    Botan::DER_Encoder* var_88
    int64_t* var_70
    int64_t* var_68
    uint64_t var_60
    
    if (var_70 == 0)
        int64_t* x0_11 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, "obj", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
        
        if (var_60 != 0)
            uint64_t var_58_1 = var_60
            operator delete(var_60)
        
        if (var_68 != 0)
            int64_t x9_2
            int32_t j
            
            do
                x9_2 = __ldaxr(&var_68[1])
                j = __stlxr(x9_2 - 1, &var_68[1])
            while (j != 0)
            
            if (x9_2 == 0)
                (*(*var_68 + 0x10))(var_68)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        var_90 = _vtable_for_Botan::OID + 0x10
        
        if (var_88 != 0)
            Botan::DER_Encoder* var_80_2 = var_88
            operator delete(var_88)
        
        sub_1101e04(x0_11)
        noreturn
    
    if (((*(*var_70 + 0x38))() & 1) != 0)
        char var_48
        uint32_t x20_1 = zx.d(var_48)
        int64_t entry_x1
        Botan::DER_Encoder::start_cons(entry_x1, 0x10)
        (*var_90)(&var_90, entry_x1)
        
        if (x20_1 != 0)
            char var_34 = ((x20_1 & 1) << 0x1f s>> 0x1f).b
            Botan::DER_Encoder::add_object(entry_x1, 1, nullptr, &var_34)
        
        Botan::DER_Encoder::add_object(entry_x1, 4, nullptr, var_60)
        Botan::DER_Encoder::end_cons()
    
    if (var_60 != 0)
        uint64_t var_58 = var_60
        operator delete(var_60)
    
    Botan::DER_Encoder& var_80_1
    
    if (var_68 == 0)
    label_eaf304:
        var_90 = _vtable_for_Botan::OID + 0x10
        
        if (var_88 != 0)
            var_80_1 = var_88
            operator delete(var_88)
    else
        int64_t x9_1
        int32_t j_1
        
        do
            x9_1 = __ldaxr(&var_68[1])
            j_1 = __stlxr(x9_1 - 1, &var_68[1])
        while (j_1 != 0)
        
        if (x9_1 != 0)
            goto label_eaf304
        
        (*(*var_68 + 0x10))(var_68)
        std::__ndk1::__shared_weak_count::__release_weak()
        var_90 = _vtable_for_Botan::OID + 0x10
        
        if (var_88 != 0)
            var_80_1 = var_88
            operator delete(var_88)
    int64_t* j_3 = i[1]
    
    if (j_3 == 0)
        void* x8_9 = &i[2]
        int64_t* i_1 = *x8_9
        
        if (*i_1 == i)
            i = i_1
        else
            void* j_2
            
            do
                j_2 = *x8_9
                x8_9 = j_2 + 0x10
                i = *x8_9
            while (*i != j_2)
    else
        do
            i = j_3
            j_3 = *j_3
        while (j_3 != 0)
