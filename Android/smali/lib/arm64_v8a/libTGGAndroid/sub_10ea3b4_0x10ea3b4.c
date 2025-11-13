// 函数: sub_10ea3b4
// 地址: 0x10ea3b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
x0, v0, v1, v2, v3, v4, v5, v6, v7 = __cxa_get_globals_fast()

if (x0 != 0)
    void* x20_1 = *x0
    
    if (x20_1 != 0)
        if ((sub_10e96e8(x20_1 + 0x60) & 1) == 0)
            data_11c1ab8
            sub_10ea1a4("terminating with %s foreign exception", v0, v1, v2, v3, v4, v5, v6, v7)
            noreturn
        
        void* x8
        
        if (sub_10e96dc(x20_1 + 0x60) != 0x434c4e47432b2b01)
            x8 = x20_1 + 0x80
        else
            x8 = *(x20_1 + 8)
        
        void* var_18 = x8
        void* x20_2 = *(x20_1 + 0x10)
        int64_t var_440 = 0x400
        void var_434
        int32_t var_34
        __cxa_demangle(*(x20_2 + 8), &var_434, &var_440, &var_34)
        
        if (var_34 != 0)
            *(x20_2 + 8)
        
        int32_t x0_8
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        x0_8, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
            (*(*_typeinfo_for_std::exception + 0x20))(_typeinfo_for_std::exception, x20_2, &var_18)
        
        if ((x0_8 & 1) == 0)
            data_11c1ab8
            sub_10ea1a4("terminating with %s exception of type %s", v0_1, v1_1, v2_1, v3_1, v4_1, 
                v5_1, v6_1, v7_1)
            noreturn
        
        data_11c1ab8
        int64_t x0_10
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        int128_t v3_2
        int128_t v4_2
        int128_t v5_2
        int128_t v6_2
        int128_t v7_2
        x0_10, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = (*(*var_18 + 0x10))()
        sub_10ea1a4("terminating with %s exception of type %s: %s", v0_2, v1_2, v2_2, v3_2, v4_2, 
            v5_2, v6_2, v7_2)
        noreturn

sub_10ea1a4("terminating", v0, v1, v2, v3, v4, v5, v6, v7)
noreturn
