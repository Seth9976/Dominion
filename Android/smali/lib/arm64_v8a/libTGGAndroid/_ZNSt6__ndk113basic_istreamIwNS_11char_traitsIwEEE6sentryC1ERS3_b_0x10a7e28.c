// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC1ERS3_b
// 地址: 0x10a7e28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
*arg1 = 0
void* x8_3 = arg2 + *(*arg2 - 0x18)
int32_t x9 = *(x8_3 + 0x20)

if (x9 == 0)
    std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >& x19_1 = arg1
    int64_t* x20_1 = arg2
    
    if (*(x8_3 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
    
    int32_t entry_x2
    
    if ((entry_x2 & 1) == 0 && (zx.d(*(x20_1 + *(*x20_1 - 0x18) + 9)) & 0x10) != 0)
        void var_50
        std::__ndk1::locale::locale(&var_50)
        int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_50)
        std::__ndk1::locale::~locale()
        int64_t* x22_1 = *(x20_1 + *(*x20_1 - 0x18) + 0x28)
        
        if (x22_1 != 0)
            while (true)
                int32_t* x8_12 = x22_1[3]
                
                if (x8_12 == x22_1[4])
                    arg1 = (*(*x22_1 + 0x48))(x22_1)
                else
                    arg1 = zx.q(*x8_12)
                
                int64_t* x23_1
                
                x23_1 = arg1.d == 0xffffffff ? nullptr : x22_1
                
                if (arg1.d == 0xffffffff)
                    goto label_10a7fdc
                
                int32_t* x8_15 = x23_1[3]
                uint64_t x2
                
                if (x8_15 == x23_1[4])
                    x2 = zx.q((*(*x23_1 + 0x48))(x23_1))
                else
                    x2 = zx.q(*x8_15)
                
                if (((*(*x0_3 + 0x18))(x0_3, 1, x2).d & 1) == 0)
                    int32_t* x8_22 = x22_1[3]
                    
                    if (x8_22 == x22_1[4])
                        arg1 = (*(*x22_1 + 0x48))(x22_1)
                    else
                        arg1 = zx.q(*x8_22)
                    
                    if (arg1.d != 0xffffffff)
                        goto label_10a801c
                    
                    break
                
                int64_t x8_20 = x23_1[3]
                
                if (x8_20 == x23_1[4])
                    (*(*x22_1 + 0x50))(x22_1)
                    
                    if (x22_1 == 0)
                        goto label_10a7fdc
                else
                    x23_1[3] = x8_20 + 4
                    
                    if (x22_1 == 0)
                        goto label_10a7fdc
        
    label_10a7fdc:
        void* x8_27 = x20_1 + *(*x20_1 - 0x18)
        int32_t x10_5 = *(x8_27 + 0x20) | (*(x8_27 + 0x28) == 0 ? 1 : 0) | 6
        bool cond:3_1 = (x10_5 & *(x8_27 + 0x24)) != 0
        *(x8_27 + 0x20) = x10_5
        
        if (cond:3_1)
            sub_10b053c()
            noreturn
    
label_10a801c:
    *x19_1 = (*(x20_1 + *(*x20_1 - 0x18) + 0x20) == 0 ? 1 : 0).b
else
    int32_t x9_2 = x9 | (*(x8_3 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:1_1 = (x9_2 & *(x8_3 + 0x24)) == 0
    *(x8_3 + 0x20) = x9_2
    
    if (not(cond:1_1))
        sub_10b053c()
        noreturn

if (*(x24 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
