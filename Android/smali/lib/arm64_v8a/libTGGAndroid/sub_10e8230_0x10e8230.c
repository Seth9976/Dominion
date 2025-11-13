// 函数: sub_10e8230
// 地址: 0x10e8230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char buf[0x400]
char (* x20)[0x400] = &buf
int32_t* x0 = __errno()
int32_t x24 = *x0
int32_t x0_2
int64_t x1_1
int64_t x2
int64_t x3
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
x0_2, x1_1, x2, x3, v0, v1, v2, v3, v4, v5, v6, v7 = strerror_r(arg2, &buf, 0x400)

if (x0_2 == 0)
    goto label_10e82a8

if (x0_2 == 0xffffffff)
    x0_2 = *x0

if (x0_2 == 0x16)
    x20 = &data_793a18
label_10e82a8:
    
    if (zx.d(*x20) == 0)
        x20 = &buf
        sub_10e8f58(&buf, x1_1, x2, x3, zx.q(arg2), v0, v1, v2, v3, v4, v5, v6, v7)
    
    *x0 = x24
    size_t result = strlen(x20)
    
    if (result u< -0x10)
        size_t result_1 = result
        void* x19_1
        
        if (result u>= 0x17)
            uint64_t x22_1 = (result_1 + 0x10) & 0xfffffffffffffff0
            void* x0_6 = operator new(x22_1)
            *(arg3 + 8) = result_1
            *(arg3 + 0x10) = x0_6
            *arg3 = x22_1 | 1
            x19_1 = x0_6
            result = memcpy(x19_1, x20, result_1)
        else
            *arg3 = (result_1.d << 1).b
            x19_1 = &arg3[1]
            
            if (result_1 != 0)
                result = memcpy(x19_1, x20, result_1)
        
        *(x19_1 + result_1) = 0
        
        if (*(x23 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn
    
    std::__ndk1::__basic_string_common<true>::__throw_length_error()

abort()
noreturn
