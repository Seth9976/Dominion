// 函数: _ZNSt6__ndk16localeC1ERKS0_PKci
// 地址: 0x10cd194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)

if (arg3 == 0)
    std::__ndk1::__throw_runtime_error("locale constructed with null")
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    char* x22_1 = arg3
    struct std::__ndk1::locale::facet::std::__ndk1::locale::__imp::VTable** x0 = operator new(0x140)
    void* x23_1 = *arg2
    size_t x0_2 = strlen(x22_1)
    
    if (x0_2 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        int64_t var_80
        void* var_70
        void* x25_1
        
        if (x0_2 u>= 0x17)
            uint64_t x26_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
            void* x0_4 = operator new(x26_1)
            x25_1 = x0_4
            size_t var_78_1 = x0_2
            var_70 = x0_4
            var_80 = x26_1 | 1
            memcpy(x25_1, x22_1, x0_2)
        else
            x25_1 = &var_80 | 1
            var_80.b = (x0_2.d << 1).b
            
            if (x0_2 != 0)
                memcpy(x25_1, x22_1, x0_2)
        
        *(x25_1 + x0_2) = 0
        int32_t entry_x3
        sub_10cab98(x0, x23_1, &var_80, entry_x3)
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(var_70)
        
        *arg1 = x0
        int64_t result = std::__ndk1::__shared_count::__add_shared()
        
        if (*(x27 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
