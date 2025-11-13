// 函数: _ZNK5Botan10Extensions10extensionsEv
// 地址: 0xeaeef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* entry_x0
int64_t* i = entry_x0[4]

while (i != &entry_x0[5])
    int64_t* x0 = i[8]
    int64_t* var_40
    
    if (x0 == 0)
        int64_t* x0_3 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, "obj", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
        int64_t var_40_2 = 0
        void* x21
        
        if (var_40 != 0)
            (*(*var_40 + 0x30))()
            x21 = *entry_x8
            
            if (x21 == 0)
                sub_1101e04(x0_3)
                noreturn
        else
            x21 = *entry_x8
            
            if (x21 == 0)
                sub_1101e04(x0_3)
                noreturn
        
        int64_t* x22 = entry_x8[1]
        void* x0_6 = x21
        
        if (x22 != x21)
            do
                x22 = &x22[-2]
                int64_t* x0_7 = *x22
                *x22 = 0
                
                if (x0_7 != 0)
                    (*(*x0_7 + 0x30))()
            while (x21 != x22)
            
            x0_6 = *entry_x8
        
        entry_x8[1] = x21
        operator delete(x0_6)
        sub_1101e04(x0_3)
        noreturn
    
    int64_t* x0_1 = (*(*x0 + 0x10))()
    int64_t** x8_2 = entry_x8[1]
    char x10_1 = i[0xd].b
    int64_t* var_40_1 = x0_1
    
    if (x8_2 u>= entry_x8[2])
        std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::unique_ptr<Botan::Certificate_Extension, std::__ndk1::default_delete<Botan::Certificate_Extension> >, bool>, std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::unique_ptr<Botan::Certificate_Extension, std::__ndk1::default_delete<Botan::Certificate_Extension> >, bool> > >::__push_back_slow_path<std::__ndk1::pair<std::__ndk1::unique_ptr<Botan::Certificate_Extension, std::__ndk1::default_delete<Botan::Certificate_Extension> >, bool> >(
            entry_x8)
    else
        var_40_1 = nullptr
        *x8_2 = x0_1
        x8_2[1].b = x10_1
        entry_x8[1] = &x8_2[2]
    
    var_40 = nullptr
    
    if (var_40_1 != 0)
        (*(*var_40_1 + 0x30))()
    
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_6 = &i[2]
        int64_t* i_1 = *x8_6
        
        if (*i_1 == i)
            i = i_1
        else
            void* j
            
            do
                j = *x8_6
                x8_6 = j + 0x10
                i = *x8_6
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)
