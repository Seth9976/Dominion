// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE16do_get_monthnameES4_S4_RNS_8ios_baseERjP2tm
// 地址: 0x10bece8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t result = arg2
std::__ndk1::ios_base::getloc()
int64_t var_70 = 0
int64_t (* const var_80)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_78)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_60)()
    int64_t (* const** var_68)() = &var_60
    var_60 = &var_80
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_68, sub_10dd4b0)

void* var_90
int64_t x8_2 = *(var_90 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(var_90 + 0x18) - x8_2) s>> 3)
    int64_t* x23_1 = *(x8_2 + (x9_1 << 3))
    
    if (x23_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        char* x0_4 = (*(*(arg1 + 0x10) + 8))(arg1 + 0x10)
        void* x8_5 = sub_10b3ff4(&result, arg3, x0_4, &x0_4[0x240], x23_1, arg5, 0) - x0_4
        
        if (x8_5 s<= 0x23f)
            int64_t x8_7 = (x8_5 s>> 3) * -0x5555555555555555
            int64_t x9_2 = (muls.dp.q(x8_7, 0x2aaaaaaaaaaaaaab) u>> 0x40).q
            void* entry_x5
            *(entry_x5 + 0x10) = x8_7.d - ((x9_2 u>> 1).d + (x9_2 u>> 0x3f).d) * 0xc
        
        if (*(x24 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
