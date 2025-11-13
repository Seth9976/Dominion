// 函数: _ZN5Botan13Threaded_Fork8set_nextEPPNS_6FilterEm
// 地址: 0xd7df3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = &arg1[4]
int64_t x9 = *result
*(result + 8) = x9
*(result + 0x18) = 0
*(result + 0x20) = 0
int64_t x8_3

if (arg2 == 0)
label_d7df90:
    x8_3 = x9
else
    int64_t entry_x2
    void* x8_2 = arg2 + (entry_x2 << 3) + 8
    int64_t i
    
    do
        if (entry_x2 == 0)
            goto label_d7df90
        
        i = *(x8_2 - 0x10)
        entry_x2 -= 1
        x8_2 -= 8
    while (i == 0)
    result = std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::assign<Botan::Filter**>(
        result, arg2)
    x9 = arg1[4]
    x8_3 = arg1[5]

int64_t x10_1 = arg1[0xa]
int64_t x21 = (x8_3 - x9) s>> 3
void* x22 = arg1[0xb]

if (x21 u>= (x22 - x10_1) s>> 4)
    result = std::__ndk1::vector<std::__ndk1::shared_ptr<std::__ndk1::thread>, std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::thread> > >::reserve(
        &arg1[0xa])
    
    for (int64_t i_1 = (arg1[0xb] - arg1[0xa]) s>> 4; i_1 != x21; i_1 += 1)
        int64_t x0_3 = operator new(8)
        int64_t x8_11 = arg1[4]
        int64_t (* const var_70)(Botan::Filter*) = Botan::Threaded_Fork::thread_entry
        int64_t var_68_1 = 0
        Botan::Filter** var_60_1 = arg1
        int64_t var_58_1 = *(x8_11 + (i_1 << 3))
        sub_d7e9d4(x0_3, &var_70)
        int64_t var_50_1 = x0_3
        result = operator new(0x20)
        *result = _vtable_for_std::__ndk1::__shared_ptr_pointer<std::__ndk1::thread*, std::__ndk1::default_delete<std::__ndk1::thread>, std::__ndk1::allocator<std::__ndk1::thread> >
            + 0x10
        *(result + 8) = 0
        *(result + 0x10) = 0
        *(result + 0x18) = x0_3
        void* result_1 = result
        int64_t* x8_13 = arg1[0xb]
        
        if (x8_13 u< arg1[0xc])
            *x8_13 = x0_3
            x8_13[1] = result_1
            arg1[0xb] = &x8_13[2]
        else
            result = std::__ndk1::vector<std::__ndk1::shared_ptr<std::__ndk1::thread>, std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::thread> > >::__push_back_slow_path<std::__ndk1::shared_ptr<std::__ndk1::thread> >(
                &arg1[0xa])
            
            if (result_1 != 0)
                int64_t x9_5
                int32_t j
                
                do
                    x9_5 = __ldaxr(result_1 + 8)
                    j = __stlxr(x9_5 - 1, result_1 + 8)
                while (j != 0)
                
                if (x9_5 == 0)
                    (*(*result_1 + 0x10))(result_1)
                    result = std::__ndk1::__shared_weak_count::__release_weak()
else
    int64_t x21_1 = x10_1 + (x21 << 4)
    
    while (x22 != x21_1)
        int64_t* x20_2 = *(x22 - 8)
        x22 -= 0x10
        
        if (x20_2 != 0)
            int64_t x9_1
            int32_t i_2
            
            do
                x9_1 = __ldaxr(&x20_2[1])
                i_2 = __stlxr(x9_1 - 1, &x20_2[1])
            while (i_2 != 0)
            
            if (x9_1 == 0)
                (*(*x20_2 + 0x10))(x20_2)
                result = std::__ndk1::__shared_weak_count::__release_weak()
    
    arg1[0xb] = x21_1

return result
