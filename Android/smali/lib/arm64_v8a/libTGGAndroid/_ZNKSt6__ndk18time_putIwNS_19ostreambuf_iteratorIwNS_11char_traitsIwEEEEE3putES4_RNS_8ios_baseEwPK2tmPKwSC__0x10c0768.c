// 函数: _ZNKSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE3putES4_RNS_8ios_baseEwPK2tmPKwSC_
// 地址: 0x10c0768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t* x24 = arg1
wchar_t const* x25 = arg6
std::__ndk1::ios_base& result = arg2
std::__ndk1::ios_base::getloc()
int64_t var_80 = 0
int64_t (* const var_90)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_88)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_70)()
    int64_t (* const** var_78)() = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_78, sub_10dd4b0)

void* var_98
int64_t x8_3 = *(var_98 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(var_98 + 0x18) - x8_3) s>> 3)
    int64_t* x26_1 = *(x8_3 + (x9_1 << 3))
    
    if (x26_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        int64_t entry_x6
        
        if (x25 != entry_x6)
            while (true)
                if (zx.d((*(*x26_1 + 0x68))(x26_1, zx.q(*x25), 0)) == 0x25)
                    void* x21_1 = &x25[1]
                    wchar_t const x1_6
                    wchar_t* x8_17
                    
                    if (x21_1 == entry_x6)
                        if (result == 0)
                            break
                        
                        x8_17 = *(result + 0x30)
                        x1_6 = *x25
                        
                        if (x8_17 == *(result + 0x38))
                            x1_6 = (*(*result + 0x68))(result, x1_6)
                        else
                            *(result + 0x30) = &x8_17[1]
                            *x8_17 = x1_6
                    else
                        int32_t x0_6 = (*(*x26_1 + 0x68))(x26_1, zx.q(*x21_1), 0)
                        int32_t x8_9 = x0_6 & 0xff
                        int32_t x27_1 = x0_6
                        uint64_t x5
                        
                        if (x8_9 == 0x4f || x8_9 == 0x45)
                            if (&x25[2] != entry_x6)
                                x5 = zx.q((*(*x26_1 + 0x68))(x26_1, zx.q(x25[2]), 0))
                                x21_1 = &x25[2]
                                goto label_10c094c
                            
                            if (result == 0)
                                break
                            
                            wchar_t* x8_18 = *(result + 0x30)
                            wchar_t const x1_7 = *x25
                            
                            if (x8_18 == *(result + 0x38))
                                if ((*(*result + 0x68))(result, x1_7) == 0xffffffff)
                                    result = nullptr
                                    break
                            else
                                *(result + 0x30) = &x8_18[1]
                                *x8_18 = x1_7
                                
                                if (x1_7 == 0xffffffff)
                                    result = nullptr
                                    break
                            
                            x8_17 = *(result + 0x30)
                            x1_6 = *x21_1
                            
                            if (x8_17 != *(result + 0x38))
                                *(result + 0x30) = &x8_17[1]
                                *x8_17 = x1_6
                            else
                                x1_6 = (*(*result + 0x68))(result, x1_6)
                        else
                            x5 = zx.q(x27_1)
                            x27_1 = 0
                        label_10c094c:
                            result = (*(*x24 + 0x18))(x24, result, arg3, zx.q(arg4.d), arg5, x5, 
                                zx.q(x27_1))
                            x25 = x21_1 + 4
                            
                            if (x25 == entry_x6)
                                break
                            
                            continue
                    
                    if (x1_6 != 0xffffffff)
                        break
                    
                    result = nullptr
                    break
                
                if (result != 0)
                    wchar_t* x8_12 = *(result + 0x30)
                    wchar_t const x1_1 = *x25
                    
                    if (x8_12 != *(result + 0x38))
                        *(result + 0x30) = &x8_12[1]
                        *x8_12 = x1_1
                    else
                        x1_1 = (*(*result + 0x68))(result, x1_1)
                    
                    if (x1_1 == 0xffffffff)
                        result = nullptr
                
                x25 = &x25[1]
                
                if (x25 == entry_x6)
                    break
        
        if (*(x8 + 0x28) == x8_1)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
