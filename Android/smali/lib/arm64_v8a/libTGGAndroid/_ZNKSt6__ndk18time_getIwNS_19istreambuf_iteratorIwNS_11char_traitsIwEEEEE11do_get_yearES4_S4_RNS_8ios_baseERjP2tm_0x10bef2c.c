// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_yearES4_S4_RNS_8ios_baseERjP2tm
// 地址: 0x10bef2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t result = arg2
std::__ndk1::ios_base::getloc()
int64_t var_60 = 0
int64_t (* const var_70)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_68)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_50)()
    int64_t (* const** var_58)() = &var_50
    var_50 = &var_70
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_58, sub_10dd4b0)

void* var_80
int64_t x8_2 = *(var_80 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(var_80 + 0x18) - x8_2) s>> 3)
    int64_t* x22_1 = *(x8_2 + (x9_1 << 3))
    
    if (x22_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        int32_t x0_4 = sub_10bff9c(&result, arg3, arg5, x22_1, 4)
        
        if ((zx.d(arg5->tm_sec.b) & 4) == 0)
            int32_t x9_3
            
            if (x0_4 s< 0x64)
                x9_3 = x0_4 + 0x76c
            else
                x9_3 = x0_4
            
            int32_t x8_5
            
            if (x0_4 s< 0x45)
                x8_5 = x0_4 + 0x7d0
            else
                x8_5 = x9_3
            
            void* entry_x5
            *(entry_x5 + 0x14) = x8_5 - 0x76c
        
        if (*(x23 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
