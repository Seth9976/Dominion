// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_
// 地址: 0xf11120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* result = arg2
int64_t entry_x2

if (arg2 != entry_x2)
    uint32_t x8_1 = zx.d(*result)
    void** x0_8
    void* x8_17
    int64_t x9_7
    struct vtable_for_std::__ndk1::__r_anchor<char>* const x10_3
    
    if (x8_1 s> 0x5b)
        if (x8_1 == 0x5c)
            if (&result[1] != entry_x2)
                uint32_t x8_21 = zx.d(result[1])
                void** x21_2
                int128_t v0_2
                
                if (x8_21 == 0x42)
                    void** x0_12 = operator new(0x30)
                    x21_2 = x0_12
                    int64_t x8_25 = *(*(arg1 + 0x38) + 8)
                    *x0_12 = _vtable_for_std::__ndk1::__word_boundary<char, std::__ndk1::regex_traits<char> >
                        + 0x10
                    x0_12[1] = x8_25
                    std::__ndk1::locale::locale(&x0_12[2])
                    v0_2 = *(arg1 + 8)
                    x21_2[5].b = 1
                label_f113e0:
                    *(x21_2 + 0x18) = v0_2
                    result = &result[2]
                    *(*(arg1 + 0x38) + 8) = x21_2
                    *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
                else if (x8_21 == 0x62)
                    void** x0_10 = operator new(0x30)
                    x21_2 = x0_10
                    int64_t x8_23 = *(*(arg1 + 0x38) + 8)
                    *x0_10 = _vtable_for_std::__ndk1::__word_boundary<char, std::__ndk1::regex_traits<char> >
                        + 0x10
                    x0_10[1] = x8_23
                    std::__ndk1::locale::locale(&x0_10[2])
                    v0_2 = *(arg1 + 8)
                    x21_2[5].b = 0
                    goto label_f113e0
        else if (x8_1 == 0x5e)
            x0_8 = operator new(0x10)
            x8_17 = *(arg1 + 0x38)
            x9_7 = *(x8_17 + 8)
            x10_3 = _vtable_for_std::__ndk1::__l_anchor<char>
            goto label_f11318
    else if (x8_1 == 0x24)
        x0_8 = operator new(0x10)
        x8_17 = *(arg1 + 0x38)
        x9_7 = *(x8_17 + 8)
        x10_3 = _vtable_for_std::__ndk1::__r_anchor<char>
    label_f11318:
        *x0_8 = x10_3 + 0x10
        x0_8[1] = x9_7
        *(x8_17 + 8) = x0_8
        result = &result[1]
        *(arg1 + 0x38) = *(*(arg1 + 0x38) + 8)
    else if (x8_1 == 0x28 && &result[1] != entry_x2 && zx.d(result[1]) == 0x3f
            && &result[2] != entry_x2)
        uint32_t x8_5 = zx.d(result[2])
        char var_90
        int64_t x9_16
        int64_t* x19_2
        int128_t v0_1
        int128_t v1_1
        
        if (x8_5 == 0x21)
            std::__ndk1::locale::locale()
            int64_t x0_15 = std::__ndk1::locale::use_facet(&var_90)
            int64_t var_80_2 = std::__ndk1::locale::use_facet(&var_90)
            int128_t var_78_1
            __builtin_memset(&var_78_1, 0, 0x28)
            var_78_1.d = *(arg1 + 0x18)
            char* x0_19 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse<char const*>(
                &var_90, &result[3])
            int32_t x24_2 = var_78_1:4.d
            int32_t x25_2 = *(arg1 + 0x1c)
            void** x0_20 = operator new(0x58)
            int64_t x8_29 = *(*(arg1 + 0x38) + 8)
            *x0_20 =
                _vtable_for_std::__ndk1::__lookahead<char, std::__ndk1::regex_traits<char> > + 0x10
            x0_20[1] = x8_29
            v0_1, v1_1 = std::__ndk1::locale::locale(&x0_20[2])
            v0_1 = x0_15.o
            v1_1 = var_78_1
            int128_t var_68_1
            int64_t x8_30 = var_68_1:8.q
            *(x0_20 + 0x18) = v0_1
            *(x0_20 + 0x28) = v1_1
            x0_20[7] = var_68_1.q
            x0_20[8] = x8_30
            
            if (x8_30 != 0)
                int32_t i
                
                do
                    i = __stxr(__ldxr(x8_30 + 8) + 1, x8_30 + 8)
                while (i != 0)
            
            x0_20[0xa].d = x25_2
            *(x0_20 + 0x54) = 1
            int64_t var_58_1
            x0_20[9] = var_58_1
            *(*(arg1 + 0x38) + 8) = x0_20
            int64_t x8_35 = *(*(arg1 + 0x38) + 8)
            *(arg1 + 0x1c) += x24_2
            *(arg1 + 0x38) = x8_35
            
            if (x0_19 == entry_x2 || zx.d(*x0_19) != 0x29)
                sub_f11c7c()
                noreturn
            
            x19_2 = var_68_1:8.q
            result = &x0_19[1]
            
            if (x19_2 == 0)
                std::__ndk1::locale::~locale()
            else
                int32_t i_1
                
                do
                    x9_16 = __ldaxr(&x19_2[1])
                    i_1 = __stlxr(x9_16 - 1, &x19_2[1])
                while (i_1 != 0)
            label_f11528:
                
                if (x9_16 != 0)
                    std::__ndk1::locale::~locale()
                else
                    (*(*x19_2 + 0x10))(x19_2, v0_1, v1_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
                    std::__ndk1::locale::~locale()
        else if (x8_5 == 0x3d)
            std::__ndk1::locale::locale()
            int64_t x0_1 = std::__ndk1::locale::use_facet(&var_90)
            int64_t var_80_1 = std::__ndk1::locale::use_facet(&var_90)
            int128_t var_78
            __builtin_memset(&var_78, 0, 0x28)
            var_78.d = *(arg1 + 0x18)
            char* x0_5 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse<char const*>(
                &var_90, &result[3])
            int32_t x24_1 = var_78:4.d
            int32_t x25_1 = *(arg1 + 0x1c)
            void** x0_6 = operator new(0x58)
            int64_t x8_8 = *(*(arg1 + 0x38) + 8)
            *x0_6 =
                _vtable_for_std::__ndk1::__lookahead<char, std::__ndk1::regex_traits<char> > + 0x10
            x0_6[1] = x8_8
            v0_1, v1_1 = std::__ndk1::locale::locale(&x0_6[2])
            v0_1 = x0_1.o
            v1_1 = var_78
            int128_t var_68
            int64_t x8_9 = var_68:8.q
            *(x0_6 + 0x18) = v0_1
            *(x0_6 + 0x28) = v1_1
            x0_6[7] = var_68.q
            x0_6[8] = x8_9
            
            if (x8_9 != 0)
                int32_t i_2
                
                do
                    i_2 = __stxr(__ldxr(x8_9 + 8) + 1, x8_9 + 8)
                while (i_2 != 0)
            
            x0_6[0xa].d = x25_1
            *(x0_6 + 0x54) = 0
            int64_t var_58
            x0_6[9] = var_58
            *(*(arg1 + 0x38) + 8) = x0_6
            int64_t x8_14 = *(*(arg1 + 0x38) + 8)
            *(arg1 + 0x1c) += x24_1
            *(arg1 + 0x38) = x8_14
            
            if (x0_5 == entry_x2 || zx.d(*x0_5) != 0x29)
                sub_f11c7c()
                noreturn
            
            x19_2 = var_68:8.q
            result = &x0_5[1]
            
            if (x19_2 != 0)
                int32_t i_3
                
                do
                    x9_16 = __ldaxr(&x19_2[1])
                    i_3 = __stlxr(x9_16 - 1, &x19_2[1])
                while (i_3 != 0)
                goto label_f11528
            
            std::__ndk1::locale::~locale()

return result
