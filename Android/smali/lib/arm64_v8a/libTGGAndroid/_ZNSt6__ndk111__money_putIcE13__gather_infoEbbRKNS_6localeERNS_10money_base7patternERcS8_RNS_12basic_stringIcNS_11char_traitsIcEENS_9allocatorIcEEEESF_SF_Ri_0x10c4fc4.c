// 函数: _ZNSt6__ndk111__money_putIcE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_Ri
// 地址: 0x10c4fc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
void* x24 = *arg3
int64_t (* const var_90)()
int64_t var_80
int64_t (* const x28)()
int64_t (* const** var_78)()
int64_t (* const* var_70)()

if ((arg1.d & 1) == 0)
    x28 = std::__ndk1::moneypunct<char, false>::id
    var_80 = 0
    var_90 = std::__ndk1::moneypunct<char, false>::id
    int64_t (* const var_88_1)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::moneypunct<char, false>::id != -1)
        var_70 = &var_90
        var_78 = &var_70
        std::__ndk1::__call_once(std::__ndk1::moneypunct<char, false>::id, &var_78, sub_10dd4b0)
else
    x28 = std::__ndk1::moneypunct<char, true>::id
    var_80 = 0
    var_90 = std::__ndk1::moneypunct<char, true>::id
    int64_t (* const var_88)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::moneypunct<char, true>::id != -1)
        var_70 = &var_90
        var_78 = &var_70
        std::__ndk1::__call_once(std::__ndk1::moneypunct<char, true>::id, &var_78, sub_10dd4b0)
int64_t x8_3 = *(x24 + 0x10)
int64_t x9_1 = sx.q(*(x28 + 8)) - 1

if (x9_1 u< (*(x24 + 0x18) - x8_3) s>> 3)
    int64_t* x24_1 = *(x8_3 + (x9_1 << 3))
    
    if (x24_1 != 0)
        void* x8_4 = *x24_1
        int64_t x9_2
        
        if ((arg2.d & 1) == 0)
            *arg4 = (*(x8_4 + 0x50))(x24_1)
            x9_2 = *(*x24_1 + 0x38)
        else
            *arg4 = (*(x8_4 + 0x58))(x24_1)
            x9_2 = *(*x24_1 + 0x40)
        
        x9_2(x24_1)
        
        if ((zx.d(*arg9) & 1) != 0)
            operator delete(*(arg9 + 0x10))
        
        int128_t v0 = var_90.o
        *(arg9 + 0x10) = var_80
        *arg9 = v0
        *arg5 = (*(*x24_1 + 0x18))(x24_1)
        *arg6 = (*(*x24_1 + 0x20))(x24_1)
        (*(*x24_1 + 0x28))(x24_1)
        
        if ((zx.d(*arg7) & 1) != 0)
            operator delete(*(arg7 + 0x10))
        
        int128_t v0_1 = var_90.o
        *(arg7 + 0x10) = var_80
        *arg7 = v0_1
        (*(*x24_1 + 0x30))(x24_1)
        
        if ((zx.d(*arg8) & 1) != 0)
            operator delete(*(arg8 + 0x10))
        
        int128_t v0_2 = var_90.o
        *(arg8 + 0x10) = var_80
        *arg8 = v0_2
        int64_t result = (*(*x24_1 + 0x48))(x24_1)
        *arg10 = result.d
        
        if (*(x26 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
