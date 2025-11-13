// 函数: _ZNSt6__ndk16localeC1EPKc
// 地址: 0x10ccfe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
char* entry_x1

if (entry_x1 == 0)
    std::__ndk1::__throw_runtime_error("locale constructed with null")
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    struct std::__ndk1::locale::facet::std::__ndk1::locale::__imp::VTable** x0 = operator new(0x140)
    size_t x0_2 = strlen(entry_x1)
    
    if (x0_2 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        int64_t var_70
        void* var_60
        void* x23_1
        
        if (x0_2 u>= 0x17)
            uint64_t x24_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
            void* x0_4 = operator new(x24_1)
            x23_1 = x0_4
            size_t var_68_1 = x0_2
            var_60 = x0_4
            var_70 = x24_1 | 1
            memcpy(x23_1, entry_x1, x0_2)
        else
            x23_1 = &var_70 | 1
            var_70.b = (x0_2.d << 1).b
            
            if (x0_2 != 0)
                memcpy(x23_1, entry_x1, x0_2)
        
        *(x23_1 + x0_2) = 0
        sub_10c861c(x0, &var_70, 0)
        
        if ((zx.d(var_70.b) & 1) != 0)
            operator delete(var_60)
        
        *arg1 = x0
        int64_t result = std::__ndk1::__shared_count::__add_shared()
        
        if (*(x25 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
