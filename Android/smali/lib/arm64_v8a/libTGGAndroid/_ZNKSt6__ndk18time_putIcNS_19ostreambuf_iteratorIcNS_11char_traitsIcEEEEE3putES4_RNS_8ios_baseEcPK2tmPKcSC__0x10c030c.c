// 函数: _ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_
// 地址: 0x10c030c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t* x24 = arg1
char const* x25 = arg6
std::__ndk1::ios_base& result = arg2
std::__ndk1::ios_base::getloc()
int64_t var_80 = 0
int64_t (* const var_90)() = std::__ndk1::ctype<char>::id
int64_t (* const var_88)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<char>::id != -1)
    int64_t (* const* var_70)()
    int64_t (* const** var_78)() = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_78, sub_10dd4b0)

void* var_98
int64_t x8_3 = *(var_98 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(var_98 + 0x18) - x8_3) s>> 3)
    int64_t* x26_1 = *(x8_3 + (x9_1 << 3))
    
    if (x26_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        int64_t entry_x6
        
        while (x25 != entry_x6)
            if (zx.d((*(*x26_1 + 0x48))(x26_1, zx.q(*x25), 0)) == 0x25)
                void* x21_1 = &x25[1]
                char const x1_6
                char* x8_17
                
                if (x21_1 == entry_x6)
                    if (result == 0)
                        break
                    
                    x8_17 = *(result + 0x30)
                    x1_6 = *x25
                    
                    if (x8_17 != *(result + 0x38))
                    label_10c050c:
                        *(result + 0x30) = &x8_17[1]
                        *x8_17 = x1_6
                        break
                else
                    int32_t x0_8 = (*(*x26_1 + 0x48))(x26_1, zx.q(*x21_1), 0)
                    int32_t x8_11 = x0_8 & 0xff
                    int32_t x27_1 = x0_8
                    uint64_t x5
                    
                    if (x8_11 != 0x4f && x8_11 != 0x45)
                        x5 = zx.q(x27_1)
                        x27_1 = 0
                    label_10c04e8:
                        result =
                            (*(*x24 + 0x18))(x24, result, arg3, zx.q(arg4.d), arg5, x5, zx.q(x27_1))
                        x25 = x21_1 + 1
                        continue
                    else if (&x25[2] != entry_x6)
                        x5 = zx.q((*(*x26_1 + 0x48))(x26_1, zx.q(x25[2]), 0))
                        x21_1 = &x25[2]
                        goto label_10c04e8
                    
                    if (result == 0)
                        break
                    
                    char* x8_18 = *(result + 0x30)
                    char const x1_7 = *x25
                    
                    if (x8_18 == *(result + 0x38))
                        if ((*(*result + 0x68))(result, x1_7) == 0xffffffff)
                            result = nullptr
                            break
                    else
                        *(result + 0x30) = &x8_18[1]
                        *x8_18 = x1_7
                    
                    x8_17 = *(result + 0x30)
                    x1_6 = *x21_1
                    
                    if (x8_17 != *(result + 0x38))
                        goto label_10c050c
                
                if ((*(*result + 0x68))(result, x1_6) == 0xffffffff)
                    result = nullptr
                
                break
            
            if (result != 0)
                char* x8_14 = *(result + 0x30)
                char const x1_4 = *x25
                
                if (x8_14 == *(result + 0x38))
                    if ((*(*result + 0x68))(result, x1_4) == 0xffffffff)
                        result = nullptr
                else
                    *(result + 0x30) = &x8_14[1]
                    *x8_14 = x1_4
                    x25 = &x25[1]
                    continue
            
            x25 = &x25[1]
        
        if (*(x8 + 0x28) == x8_1)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
