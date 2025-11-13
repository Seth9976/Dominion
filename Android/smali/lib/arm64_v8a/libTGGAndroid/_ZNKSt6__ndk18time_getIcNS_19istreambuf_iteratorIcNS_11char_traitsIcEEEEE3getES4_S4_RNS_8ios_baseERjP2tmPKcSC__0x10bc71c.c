// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKcSC_
// 地址: 0x10bc71c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t* x25 = arg1
char const* x26 = arg7
std::__ndk1::ios_base& x21 = arg3
int64_t* i = arg2
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
    int64_t* x27_1 = *(x8_3 + (x9_1 << 3))
    
    if (x27_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        arg5->tm_sec = 0
        char* entry_x7
        
        if (x26 != entry_x7)
            while (true)
                if (i != 0 && i[3] == i[4])
                    if ((*(*i + 0x48))(i) == 0xffffffff)
                        i = nullptr
                    
                    if (x21 != 0)
                        goto label_10bc814
                    
                    goto label_10bc854
                
                if (x21 == 0)
                label_10bc854:
                    x21 = nullptr
                    
                    if (i != 0)
                    label_10bc874:
                        
                        if (zx.d((*(*x27_1 + 0x48))(x27_1, zx.q(*x26), 0)) != 0x25)
                            int32_t x9_6 = sx.d(*x26)
                            
                            if ((x9_6 & 0x80000000) == 0)
                                int64_t x8_17 = x27_1[2]
                                
                                if (((*(x8_17 + (zx.q(x9_6.b) << 3))).d & 1) != 0)
                                    void* x9_10 = &x26[1]
                                    
                                    while (true)
                                        if (entry_x7 == x9_10)
                                            x26 = entry_x7
                                            
                                            if (i == 0)
                                                goto label_10bca58
                                            
                                            break
                                        
                                        int32_t x10_2 = sx.d(*x9_10)
                                        
                                        if ((x10_2 & 0x80000000) != 0)
                                            x26 = x9_10
                                            
                                            if (i == 0)
                                                goto label_10bca58
                                            
                                            break
                                        
                                        x26 = &x26[1]
                                        x9_10 += 1
                                        
                                        if (((*(x8_17 + (zx.q(x10_2.b) << 3))).d & 1) == 0)
                                            while (i == 0)
                                            label_10bca58:
                                                int32_t x0_26
                                                
                                                if (x21 != 0 && *(x21 + 0x18) == *(x21 + 0x20))
                                                    x0_26 = (*(*x21 + 0x48))(x21)
                                                
                                                if (x21 == 0 || (*(x21 + 0x18) == *(x21 + 0x20)
                                                        && x0_26 == 0xffffffff))
                                                    x21 = nullptr
                                                    
                                                    if (i == 0)
                                                        i = nullptr
                                                        goto label_10bcaec
                                                else if (i != 0)
                                                    goto label_10bcaec
                                                
                                                char* x8_39 = i[3]
                                                uint32_t x0_27
                                                
                                                if (x8_39 == i[4])
                                                    x0_27 = (*(*i + 0x48))(i)
                                                    
                                                    if ((x0_27 & 0x80) != 0)
                                                        goto label_10bcaec
                                                else
                                                    x0_27 = zx.d(*x8_39)
                                                    
                                                    if ((x0_27 & 0x80) != 0)
                                                        goto label_10bcaec
                                                
                                                if (((*(x27_1[2] + ((zx.q(x0_27) & 0xff) << 3))).d
                                                        & 1) == 0)
                                                    goto label_10bcaec
                                                
                                                int64_t x8_44 = i[3]
                                                
                                                if (x8_44 != i[4])
                                                    i[3] = x8_44 + 1
                                                    
                                                    if (i != 0)
                                                        break
                                                    
                                                    goto label_10bca58
                                                
                                                (*(*i + 0x50))(i)
                                            
                                            break
                                    
                                    if (i[3] != i[4])
                                        goto label_10bca58
                                    
                                    if ((*(*i + 0x48))(i) != 0xffffffff)
                                        goto label_10bca58
                                    
                                    i = nullptr
                                    goto label_10bca58
                            
                            char* x8_18 = i[3]
                            uint64_t x1_4
                            
                            if (x8_18 == i[4])
                                x1_4 = zx.q((*(*i + 0x48))(i))
                            else
                                x1_4 = zx.q(*x8_18)
                            
                            if (zx.d((*(*x27_1 + 0x18))(x27_1, x1_4))
                                    != zx.d((*(*x27_1 + 0x18))(x27_1, zx.q(*x26))))
                                arg5->tm_sec = 4
                            else
                                int64_t x8_27 = i[3]
                                
                                if (x8_27 == i[4])
                                    (*(*i + 0x50))(i)
                                    x26 = &x26[1]
                                else
                                    i[3] = x8_27 + 1
                                    x26 = &x26[1]
                            
                            goto label_10bcaec
                        
                        if (&x26[1] != entry_x7)
                            int32_t x0_10 = (*(*x27_1 + 0x48))(x27_1, zx.q(x26[1]), 0)
                            int32_t x8_15 = x0_10 & 0xff
                            int32_t x28_1 = x0_10
                            uint64_t x7
                            int64_t x26_1
                            
                            if (x8_15 != 0x45 && x8_15 != 0x30)
                                x7 = 0
                                x26_1 = 1
                            label_10bc94c:
                                i = (*(*x25 + 0x48))(x25, i, x21, arg4, arg5, arg6, zx.q(x28_1), x7)
                                x26 = &x26[1 + x26_1]
                            label_10bcaec:
                                
                                if (x26 == entry_x7)
                                    break
                                
                                if (arg5->tm_sec != 0)
                                    break
                                
                                continue
                            else if (&x26[2] != entry_x7)
                                x7 = zx.q(x28_1)
                                x28_1 = (*(*x27_1 + 0x48))(x27_1, zx.q(x26[2]), 0)
                                x26_1 = 2
                                goto label_10bc94c
                else
                label_10bc814:
                    int32_t x0_4
                    
                    if (*(x21 + 0x18) == *(x21 + 0x20))
                        x0_4 = (*(*x21 + 0x48))(x21)
                    
                    if (*(x21 + 0x18) == *(x21 + 0x20) && x0_4 == 0xffffffff)
                        goto label_10bc854
                    
                    if (i == 0)
                        goto label_10bc874
                
                arg5->tm_sec = 4
                break
        
        uint64_t x22_1
        
        if (i != 0)
            x22_1 = x8
            
            if (i[3] == i[4] && (*(*i + 0x48))(i) == 0xffffffff)
                i = nullptr
            
            if (x21 != 0)
                goto label_10bcb4c
            
            goto label_10bcbb0
        
        x22_1 = x8
        
        if (x21 == 0)
        label_10bcbb0:
            
            if (i == 0)
                arg5->tm_sec |= 2
        else
        label_10bcb4c:
            int32_t x0_32
            
            if (*(x21 + 0x18) == *(x21 + 0x20))
                x0_32 = (*(*x21 + 0x48))(x21)
            
            if (*(x21 + 0x18) == *(x21 + 0x20) && x0_32 == 0xffffffff)
                goto label_10bcbb0
            
            if (i != 0)
                arg5->tm_sec |= 2
        
        if (*(x22_1 + 0x28) == x8_1)
            return i
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
