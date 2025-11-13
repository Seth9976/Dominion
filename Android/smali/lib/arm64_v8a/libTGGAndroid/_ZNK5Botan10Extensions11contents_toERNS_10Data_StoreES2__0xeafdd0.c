// 函数: _ZNK5Botan10Extensions11contents_toERNS_10Data_StoreES2_
// 地址: 0xeafdd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_2 = *(arg1 + 0x20)
void* __offset(Botan::Data_Store, 0x28) x22 = arg1 + 0x28

if (i_2 == x22)
    return 

while (true)
    int64_t* x0 = i_2[8]
    char var_78[0x10]
    void* var_68
    char var_60
    void* var_50
    char var_48
    void* var_38
    
    if (x0 != 0)
        int64_t entry_x2
        (*(*x0 + 0x18))(x0, arg2, entry_x2)
        int64_t* x0_1 = i_2[8]
        
        if (x0_1 != 0)
            (*(*x0_1 + 8))()
            int128_t* x0_3
            int128_t v0_1
            x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_78)
            var_50 = x0_3[1].q
            var_60.o = *x0_3
            __builtin_memset(x0_3, 0, 0x18)
            std::__ndk1::to_string(zx.d(i_2[0xd].b))
            Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                arg2, &var_60, &var_48)
            
            if ((zx.d(var_48) & 1) != 0)
                operator delete(var_38)
                
                if ((zx.d(var_60) & 1) != 0)
                label_eafebc:
                    operator delete(var_50)
                    
                    if ((zx.d(var_78[0]) & 1) == 0)
                        goto label_eafe9c
                    
                    goto label_eafecc
            else if ((zx.d(var_60) & 1) != 0)
                goto label_eafebc
            
            int64_t* i_1
            
            if ((zx.d(var_78[0]) & 1) == 0)
            label_eafe9c:
                i_1 = i_2[1]
                
                if (i_1 != 0)
                    goto label_eafee0
                
                goto label_eafeec
            
        label_eafecc:
            operator delete(var_68)
            i_1 = i_2[1]
            
            if (i_1 == 0)
            label_eafeec:
                void* x8_11 = &i_2[2]
                int64_t* i_3 = *x8_11
                
                if (*i_3 == i_2)
                    i_2 = i_3
                else
                    void* i
                    
                    do
                        i = *x8_11
                        x8_11 = i + 0x10
                        i_2 = *x8_11
                    while (*i_2 != i)
            else
            label_eafee0:
                
                do
                    i_2 = i_1
                    i_1 = *i_1
                while (i_1 != 0)
            
            if (i_2 == x22)
                break
            
            continue
    
    int64_t* x0_9 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, "obj", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
    
    if ((zx.d(var_48) & 1) == 0)
        if ((zx.d(var_60) & 1) != 0)
            goto label_eaff9c
        
        goto label_eaff6c
    
    operator delete(var_38)
    
    if ((zx.d(var_60) & 1) == 0)
    label_eaff6c:
        
        if ((zx.d(var_78[0]) & 1) == 0)
            sub_1101e04(x0_9)
            noreturn
    else
    label_eaff9c:
        operator delete(var_50)
        
        if ((zx.d(var_78[0]) & 1) == 0)
            sub_1101e04(x0_9)
            noreturn
    
    operator delete(var_68)
    sub_1101e04(x0_9)
    noreturn
