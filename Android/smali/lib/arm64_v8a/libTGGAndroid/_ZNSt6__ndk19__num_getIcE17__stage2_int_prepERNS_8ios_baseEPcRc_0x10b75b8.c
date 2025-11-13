// 函数: _ZNSt6__ndk19__num_getIcE17__stage2_int_prepERNS_8ios_baseEPcRc
// 地址: 0x10b75b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
std::__ndk1::ios_base::getloc()
int64_t var_70 = 0
int64_t (* const var_80)() = std::__ndk1::ctype<char>::id
int64_t (* const var_78)() = std::__ndk1::locale::id::__init
int64_t (* const** var_68)()
int64_t (* const* var_60)()

if (*std::__ndk1::ctype<char>::id != -1)
    var_68 = &var_60
    var_60 = &var_80
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_68, sub_10dd4b0)

void* var_88
int64_t x8_2 = *(var_88 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(var_88 + 0x18) - x8_2) s>> 3)
    int64_t* x0_1 = *(x8_2 + (x9_1 << 3))
    
    if (x0_1 != 0)
        (*(*x0_1 + 0x40))(x0_1, std::__ndk1::__num_get_base::__src, 
            std::__ndk1::__num_get_base::__src + 0x1a, arg2)
        int64_t var_70_1 = 0
        var_80 = std::__ndk1::numpunct<char>::id
        int64_t (* const var_78_1)() = std::__ndk1::locale::id::__init
        
        if (*std::__ndk1::numpunct<char>::id != -1)
            var_68 = &var_60
            var_60 = &var_80
            std::__ndk1::__call_once(std::__ndk1::numpunct<char>::id, &var_68, sub_10dd4b0)
        
        int64_t x8_6 = *(var_88 + 0x10)
        int64_t x9_3 = sx.q(*(std::__ndk1::numpunct<char>::id + 8)) - 1
        
        if (x9_3 u< (*(var_88 + 0x18) - x8_6) s>> 3)
            int64_t* x21_2 = *(x8_6 + (x9_3 << 3))
            
            if (x21_2 != 0)
                *arg3 = (*(*x21_2 + 0x20))(x21_2)
                (*(*x21_2 + 0x28))(x21_2)
                int64_t result = std::__ndk1::__shared_count::__release_shared()
                
                if (*(x22 + 0x28) == x8)
                    return result
                
                __stack_chk_fail()
                noreturn
        
        sub_f43870()
        noreturn

sub_f43870()
noreturn
